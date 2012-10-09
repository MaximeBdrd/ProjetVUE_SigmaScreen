/* 
 * File:   Bootloader.h
 * Author: bedm2308
 *
 * Created on 30 septembre 2012, 13:49
 */

#ifndef BOOTLOADER_H
#define	BOOTLOADER_H

#include "HardwareProfile.h"
#include "../Compiler.h"
#include "FSIO.h"

/** C O N S T A N T S **********************************************************/

//Section defining the address range to erase for the erase device command, along with the valid programming range to be reported by the QUERY_DEVICE command.
#define VectorsStart					0x00000000
#define	VectorsEnd						0x00000400	//One page of vectors + general purpose program memory.
//Bootloader resides in memory range 0x400-0x17FF
#define ProgramMemStart					0x00003000 //Beginning of application program memory (not occupied by bootloader).  **THIS VALUE MUST BE ALIGNED WITH BLOCK BOUNDRY** Also, in order to work correctly, make sure the StartPageToErase is set to erase this section.

#if defined(__PIC24FJ256DA210__) || defined(__PIC24FJ256DA206__) || defined(__PIC24FJ256DA110__) || defined(__PIC24FJ256DA106__)
	#define	BeginPageToErase			12		 //Bootloader and vectors occupy first six 1024 word (1536 bytes due to 25% unimplemented bytes) pages
	#define MaxPageToEraseNoConfigs		169		 //Last full page of flash on the PIC24FJ256GB110, which does not contain the flash configuration words.
	#define MaxPageToEraseWithConfigs	170		 //Page 170 contains the flash configurations words on the PIC24FJ256GB110.  Page 170 is also smaller than the rest of the (1536 byte) pages.
	#define ProgramMemStopNoConfigs		0x0002A800 //Must be instruction word aligned address.  This address does not get updated, but the one just below it does:
                                                        //IE: If AddressToStopPopulating = 0x200, 0x1FF is the last programmed address (0x200 not programmed)

	#define ProgramMemStopWithConfigs	0x0002ABF8 //Must be instruction word aligned address.  This address does not get updated, but the one just below it does: IE: If AddressToStopPopulating = 0x200, 0x1FF is the last programmed address (0x200 not programmed)
	#define ConfigWordsStartAddress		0x0002ABF8 //0x2ABFA is start of CW3 on PIC24FJ256GB110 Family devices
    #define ConfigWordsStopAddress		0x0002AC00
#elif defined(__PIC24FJ128DA210__) || defined(__PIC24FJ128DA206__) || defined(__PIC24FJ128DA110__) || defined(__PIC24FJ128DA106__)
	#define	BeginPageToErase			5		 //Bootloader and vectors occupy first six 1024 word (1536 bytes due to 25% unimplemented bytes) pages
	#define MaxPageToEraseNoConfigs		84		 //Last full page of flash on the PIC24FJ128GB110, which does not contain the flash configuration words.
	#define MaxPageToEraseWithConfigs	85       //Page 85 contains the flash configurations words on the PIC24FJ128GB110.  Page 85 is also smaller than the rest of the (1536 byte) pages.
	#define ProgramMemStopNoConfigs		0x00015400 //Must be instruction word aligned address.  This address does not get updated, but the one just below it does:
                                                        //IE: If AddressToStopPopulating = 0x200, 0x1FF is the last programmed address (0x200 not programmed)

	#define ProgramMemStopWithConfigs	0x000157F8 //Must be instruction word aligned address.  This address does not get updated, but the one just below it does: IE: If AddressToStopPopulating = 0x200, 0x1FF is the last programmed address (0x200 not programmed)
	#define ConfigWordsStartAddress		0x000157F8 //0x157FA is start of CW3 on PIC24FJ128GB110 Family devices
    #define ConfigWordsStopAddress		0x00015800
#else
    #error "This bootloader only covers the PIC24FJ256DA210 family devices.  Please see another folder for the bootloader appropriate for the selected device."
#endif

//Switch State Variable Choices
#define	QUERY_DEVICE				0x02	//Command that the host uses to learn about the device (what regions can be programmed, and what type of memory is the region)
#define	UNLOCK_CONFIG				0x03	//Note, this command is used for both locking and unlocking the config bits (see the "//Unlock Configs Command Definitions" below)
#define ERASE_DEVICE				0x04	//Host sends this command to start an erase operation.  Firmware controls which pages should be erased.
#define PROGRAM_DEVICE				0x05	//If host is going to send a full RequestDataBlockSize to be programmed, it uses this command.
#define	PROGRAM_COMPLETE			0x06	//If host send less than a RequestDataBlockSize to be programmed, or if it wished to program whatever was left in the buffer, it uses this command.
#define GET_DATA					0x07	//The host sends this command in order to read out memory from the device.  Used during verify (and read/export hex operations)
#define	RESET_DEVICE				0x08	//Resets the microcontroller, so it can update the config bits (if they were programmed, and so as to leave the bootloader (and potentially go back into the main application)

//Unlock Configs Command Definitions
#define UNLOCKCONFIG				0x00	//Sub-command for the ERASE_DEVICE command
#define LOCKCONFIG					0x01	//Sub-command for the ERASE_DEVICE command

//Query Device Response "Types"
#define	TypeProgramMemory			0x01	//When the host sends a QUERY_DEVICE command, need to respond by populating a list of valid memory regions that exist in the device (and should be programmed)
#define TypeEEPROM					0x02
#define TypeConfigWords				0x03
#define	TypeEndOfTypeList			0xFF	//Sort of serves as a "null terminator" like number, which denotes the end of the memory region list has been reached.


//BootState Variable States
#define	IdleState					0x00
#define NotIdleState				0x01

//OtherConstants
#define InvalidAddress				0xFFFFFFFF

//Application and Microcontroller constants
#define BytesPerFlashAddress		0x02	//For Flash memory: One byte per address on PIC18, two bytes per address on PIC24

#define	TotalPacketSize				0x40
#define WORDSIZE					0x02	//PIC18 uses 2 byte instruction words, PIC24 uses 3 byte "instruction words" (which take 2 addresses, since each address is for a 16 bit word; the upper word contains a "phantom" byte which is unimplemented.).
//#define	FlashBlockSize				0x40	//For PIC18F87J50 family devices, a flash block is 64 bytes
#define RequestDataBlockSize 		56	//Number of bytes in the "Data" field of a standard request to/from the PC.  Must be an even number from 2 to 56.
#define BufferSize 					0x20	//32 16-bit words of buffer

/** PRIVATE PROTOTYPES *********************************************/
void BootInit(void);
void EraseAllFlash(void);
void EraseFlash(void);
DWORD ReadProgramMemory(DWORD address);
void WriteFlashSubBlock(void);
char BootApplication(FSFILE * pFile);

/** DEFINES **********************************************************/
#pragma code

#define JUMP_TO_USER_PROGRAM __asm__("goto 0x3000");
#define FIRMWARE_FILE_NAME "FIRMWARE.BIN"

#endif	/* BOOTLOADER_H */

