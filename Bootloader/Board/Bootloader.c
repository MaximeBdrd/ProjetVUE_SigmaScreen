

#include "Bootloader.h"

#include "../GenericTypeDefs.h"

/** VARIABLES ******************************************************/
#pragma udata

#pragma udata
unsigned char MaxPageToErase;
unsigned long ProgramMemStopAddress;
unsigned char BootState;
unsigned char ErasePageTracker;
unsigned int ProgrammingBuffer[BufferSize];
unsigned char BufferedDataIndex;
unsigned long ProgrammedPointer;
unsigned char ConfigsProtected;

typedef struct __attribute__ ((packed)) _PACKET_BOOT_HEADER
{
    unsigned short PacketSize;
    unsigned char StartByte;
    unsigned char Type;
    unsigned long Address;
} PACKET_BOOT_HEADER;

unsigned char g_DataBuffer[64];
PACKET_BOOT_HEADER g_packetHeader;

/** CODE **********************************************************/
#pragma code

char BootApplication(FSFILE * pFile)
{
    // Read the first packet header
    size_t sBytesRead = FSfread(&g_packetHeader, 8, 1, pFile);
    if( sBytesRead != 8 || g_packetHeader.PacketSize > 56)
    {
        if ( sBytesRead == 2 && g_packetHeader.PacketSize == 0)
            return 0;
        else
            return 2;
    }

    // Read the data
    if (  g_packetHeader.PacketSize )
    {
        sBytesRead = FSfread(&g_DataBuffer, g_packetHeader.PacketSize, 1, pFile);
        if( sBytesRead != g_packetHeader.PacketSize )
            return 2;
    }

    // Next action will depend on the type of packet we have
    switch( g_packetHeader.Type )
    {
        case 0:
        {
            // FINISHED!
            return 0;
            break;
        }
        case UNLOCK_CONFIG:
        {
            MaxPageToErase = MaxPageToEraseWithConfigs;		//Assume we will not allow erase/programming of config words (unless host sends override command)
            ProgramMemStopAddress = ProgramMemStopWithConfigs;
            ConfigsProtected = UNLOCKCONFIG;

            // There is one more page to erase then...
            ErasePageTracker = MaxPageToEraseWithConfigs;
            EraseFlash();
            break;
        }
        case PROGRAM_COMPLETE:
        {
            WriteFlashSubBlock();
            ProgrammedPointer = InvalidAddress;		//Reinitialize pointer to an invalid range, so we know the next PROGRAM_DEVICE will be the start address of a contiguous section.
            break;
        }
        case PROGRAM_DEVICE:
        {
            if(ProgrammedPointer == (unsigned long)InvalidAddress)
                ProgrammedPointer = (unsigned long)g_packetHeader.Address;

            if(ProgrammedPointer == (unsigned long)g_packetHeader.Address)
            {
                unsigned char i;
                for(i = 0; i < (g_packetHeader.PacketSize/WORDSIZE); i++)
                {
                    //unsigned int index;

                    //index = (RequestDataBlockSize-g_packetHeader.PacketSize)/WORDSIZE+i;
                    //ProgrammingBuffer[BufferedDataIndex] = g_DataBuffer[(RequestDataBlockSize-g_packetHeader.PacketSize)/WORDSIZE+i];	//Data field is right justified.  Need to put it in the buffer left justified.
                    ProgrammingBuffer[BufferedDataIndex] = g_DataBuffer[(i*2)];
                    ProgrammingBuffer[BufferedDataIndex] += (g_DataBuffer[(i*2)+1] << 8) & 0xFF00;

                    BufferedDataIndex++;
                    ProgrammedPointer++;
                    if(BufferedDataIndex == (RequestDataBlockSize/WORDSIZE))	//Need to make sure it doesn't call WriteFlashSubBlock() unless BufferedDataIndex/2 is an integer
                    {
                            WriteFlashSubBlock();
                    }
                }
            }
            //else host sent us a non-contiguous packet address...  to make this firmware simpler, host should not do this without sending a PROGRAM_COMPLETE command in between program sections.

            break;
        }
    }

    return 1;
}//End BootApplication()

void BootInit(void)
{
    //Initialize bootloader state variables
    MaxPageToErase = MaxPageToEraseNoConfigs;		//Assume we will not allow erase/programming of config words (unless host sends override command)
    ProgramMemStopAddress = ProgramMemStopNoConfigs;
    ConfigsProtected = LOCKCONFIG;					//Assume we will not erase or program the vector table at first.  Must receive unlock config bits/vectors command first.
    BootState = IdleState;
    ProgrammedPointer = InvalidAddress;
    BufferedDataIndex = 0;
}

void EraseAllFlash(void)
{
    for(ErasePageTracker = BeginPageToErase; ErasePageTracker < (MaxPageToErase + 1); ErasePageTracker++)
    {
        EraseFlash();
    }
    
    NVMCONbits.WREN = 0;		//Good practice to clear WREN bit anytime we are not expecting to do erase/write operations, further reducing probability of accidental activation.
}

void EraseFlash(void)
{
	DWORD_VAL MemAddressToErase = {0x00000000};
	MemAddressToErase.Val = (((DWORD)ErasePageTracker) << 10);

	NVMCON = 0x4042;				//Erase page on next WR

	TBLPAG = MemAddressToErase.byte.UB;
	__builtin_tblwtl(MemAddressToErase.word.LW, 0xFFFF);

	asm("DISI #16");					//Disable interrupts for next few instructions for unlock sequence
	__builtin_write_NVM();
    while(NVMCONbits.WR == 1){}

//	EECON1bits.WREN = 0;  //Good practice now to clear the WREN bit, as further protection against any future accidental activation of self write/erase operations.
}

DWORD ReadProgramMemory(DWORD address) 
{  
      DWORD_VAL dwvResult;
    WORD wTBLPAGSave;
 
      wTBLPAGSave = TBLPAG;
    TBLPAG = ((DWORD_VAL*)&address)->w[1];

    dwvResult.w[1] = __builtin_tblrdh((WORD)address);
    dwvResult.w[0] = __builtin_tblrdl((WORD)address);
    TBLPAG = wTBLPAGSave;
 
      return dwvResult.Val;
}

void WriteFlashSubBlock(void)		//Use word writes to write code chunks less than a full 64 byte block size.
{
	unsigned int i = 0;
	DWORD_VAL Address;

	NVMCON = 0x4003;		//Perform WORD write next time WR gets set = 1.

	while(BufferedDataIndex > 0)		//While data is still in the buffer.
	{
		Address.Val = ProgrammedPointer - BufferedDataIndex;
		TBLPAG = Address.word.HW;

		__builtin_tblwtl(Address.word.LW, ProgrammingBuffer[i]);		//Write the low word to the latch
		__builtin_tblwth(Address.word.LW, ProgrammingBuffer[i + 1]);	//Write the high word to the latch (8 bits of data + 8 bits of "phantom data")
		i = i + 2;

		asm("DISI #16");					//Disable interrupts for next few instructions for unlock sequence
		__builtin_write_NVM();
        while(NVMCONbits.WR == 1){}

		BufferedDataIndex = BufferedDataIndex - 2;		//Used up 2 (16-bit) words from the buffer.
	
        }

	NVMCONbits.WREN = 0;		//Good practice to clear WREN bit anytime we are not expecting to do erase/write operations, further reducing probability of accidental activation.
        

}



