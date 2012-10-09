/* 
 * File:   demo.c
 * Author: Maxime Bedard
 *
 * Created on 10 april 2012, 18:48
 */
#include <p24FJ256DA210.h>
#include "GenericTypeDefs.h"
#include "Board/FSIO.h"
#include "Board/Board.h"
#include "Board/Bootloader.h"
#include "Board/TimeDelay.h"

// Config bits, do not change. ever.
_CONFIG1( WDTPS_PS32768 & FWPSA_PR128 & ALTVREF_ALTVREDIS & WINDIS_OFF & FWDTEN_OFF & ICS_PGx2 & GWRP_OFF & GCP_OFF & JTAGEN_OFF)
_CONFIG2( POSCMOD_XT & IOL1WAY_OFF & OSCIOFNC_OFF & FCKSM_CSDCMD & FNOSC_PRIPLL & PLL96MHZ_ON & PLLDIV_DIV2 & IESO_OFF)
_CONFIG3( WPFP_WPFP255 & SOSCSEL_SOSC & WUTSEL_LEG & ALTPMP_ALTPMPEN & WPDIS_WPDIS & WPCFG_WPCFGDIS & WPEND_WPENDMEM)


extern WORD gColor;
extern void Bar(WORD, WORD, WORD, WORD);
extern unsigned long ProgrammedPointer;

/*
 * For this demo, any error will block the execution of the
 * code, which should help debugging
 * If you choose the "release" configuration, the program will reboot instead of freezing
 * To do that, use the macro FREEZE() for unhandled situations
 */
int main(int argc, char** argv)
{
    unsigned short attempts;

    // HMI drivers initialisation 
    InitBoard();
    
    attempts = 0;
    while( FSInit() == FALSE && attempts != 6 )
    {
        DelayMs(30);
        attempts += 1;
    }

    if( attempts == 6 )
    {
        // Jump to user program right now
        JUMP_TO_USER_PROGRAM
    }

    // Check if the file FIRMWARE.BIN is there
    FSFILE * pFile = FSfopen(FIRMWARE_FILE_NAME, FS_READ);

    if(!pFile)
    {
        // Jump to user program right now
        JUMP_TO_USER_PROGRAM
    }

    InitGraphics();

    // Check if the magic seq is there
    unsigned long EndPointer;
    unsigned char seq[4];
    if ( 4 != FSfread(&seq, 4, 1, pFile) || seq[3] != '0' || 4 != FSfread(&EndPointer, 4, 1, pFile))
    {
        // Display "something" to serve as an error code
        gColor = 2;
        Bar(0,0,120,100);
        DelayMs(100);
        Bar(120,100,120,100);  // Two Red squares
        DelayMs(5000);

        // Jump to user program right now
        JUMP_TO_USER_PROGRAM
    }

    // Draw the contour of a progress bar
    gColor = 1;
    Bar(70,70,340,2);
    Bar(70,70,2,132);
    Bar(DISP_HOR_RESOLUTION-72,70,2,132);
    Bar(70,DISP_VER_RESOLUTION-72,340,2);  //(72,72,336,128) <- Interior

    // Initialize bootloader variables
    BootInit();
    
    // That's 2% of the time done
    gColor = 3;
    Bar(72,72,4,128);

    // Erase all the flash memory
    EraseAllFlash();

    // That's 20% of the time done
    gColor = 3;
    Bar(72,72,80,128);

    // Try to program the device
    char outCode;
    unsigned short count = 100;
    do {
        // Update one time every 100 packets of data
        if (count==0)
        {

            WORD progress = ((ProgrammedPointer - ProgramMemStart)<<8)/EndPointer;
            Bar(151,72,progress,128);
            count = 100;
        }
        count -= 1;

        outCode = BootApplication(pFile);
    } while(outCode == 1);


    if (outCode == 0)
    {
        JUMP_TO_USER_PROGRAM
    }
    else
    {
        // Display "something" to serve as an error code
        gColor = 0;
        Bar(0,0,DISP_HOR_RESOLUTION,DISP_VER_RESOLUTION);
        gColor = 2;
        Bar(0,0,120,100);
        DelayMs(100);
        Bar(120,100,120,100);  // Three Red squares
        DelayMs(100);
        Bar(240,0,120,100);

        while(1);
    }

    // Return from main = Reboot (don't do it)
    return 1;
}

