/******************************************************************************
 * Board support drivers
 * for initialisation and board specific functions
 * All rights reserved to G-Tek Inc
 * 
 * by Maxime Bedard - 12/02/2012
 * ****************************************************************************/

#include "Board.h"
#include "TouchScreen.h"
#include "TouchScreenResistive.h"
#include "serialComm.h"
#include "Timers.h"
#include "TimeDelay.h"
#include "FSIO.h"
#include "../Graphics/DisplayDriver.h"

// This is the calibration data from the touch screen module
extern volatile long   _trA;
extern volatile long   _trB;
extern volatile long   _trC;
extern volatile long   _trD;

// File pointer for PutImage wrapper
FSFILE *pFileInUse;

// Warning message
XCHAR strSdMess[] =  "SD CARD";
XCHAR strSdMess2[] = "MISSING";

// GOL Timer
volatile unsigned short usGOLTimer;
unsigned short usGOLTimerReload;

// Functor for the TouchScreen driver
void DetectTouchScreen(void)
{
    TouchDetectPosition();
}

/*
 * Initialize the board
 * TouchScreen, Timers, Communication, Graphical layer, Filesystem, etc
 * Note : Should only be called once at the begginning of the main
 * Also, this function will freeze if there is no SD Card
 */
void InitBoard(void)
{
    // Init all variables
    pFileInUse = NULL;
    
    // Make all Analog Pins Digital
    ANSA = 0x0000;
    ANSB = 0x0000;
    ANSC = 0x0000;
    ANSD = 0x0000;
    ANSE = 0x0000;
    ANSF = 0x0000;
    ANSG = 0x0000;
    
    // Remappable pins assignation
    __builtin_write_OSCCONL(OSCCON & 0xbf); // unlock PPS

    RPINR19bits.U2RXR = 36;     // RPI36 for U2RX       (RS-232)  // Different from Seresco
    RPOR1bits.RP2R = 5;         // RP2 for U2TX         (RS-232)

    RPOR13bits.RP26R = 8;       // assign RP26 for SCK1 (SD CARD)
    RPOR9bits.RP19R = 7;        // assign RP19 for SDO1 (SD CARD)  // Different from Seresco
    RPINR20bits.SDI1R = 41;     // assign RPI41 for SDI1(SD CARD)

    __builtin_write_OSCCONL(OSCCON | 0x40); // lock   PPS until the device is erased

    MDD_SDSPI_InitIO(); // Initialize IO pins for SPI (SD CARD)

    InitSerialComm();   // Initialize Serial Communication
    SetCommDir(SERIAL_COMM_TRANSMIT_MODE);

    // Special GOL Timer
    usGOLTimerReload = 0;
    usGOLTimer = 1;

    InitTimers();       // Initialize Timer module
    GOLInit();          // Initialize Graphic Objects Layer

    volatile unsigned short usCountdown = 0;
    while( SetFastCountdown(&usCountdown)); // Create a timer for the SD Card detection

    // Make sure that SD CARD is available
    // Loop until the filesystem is ready
    if (FSInit() == FALSE)
    {
        usCountdown = 100;
        while (usCountdown); // Delay, before we can draw

        // Display a warning for the SD CARD
        SetColor(RGBConvert(9, 58, 109)); // Dark blue background
        ClearDevice();

        SetFont((void *) &FONTDEFAULT); // Bright red text
        SetColor(RGBConvert(0xFF, 0, 0));
        while(!OutTextXY(GetMaxX()/2-45, GetMaxY()/2-30, strSdMess));
        while(!OutTextXY(GetMaxX()/2-45, GetMaxY()/2, strSdMess2));

        usCountdown = 100;
        while (usCountdown); // FREEZE! NO SD CARD!

        while (FSInit() == FALSE)
        {
            usCountdown = 1000;
            while (usCountdown); // FREEZE! NO SD CARD!
        }
    }

    while ( RemoveFastCountdown(&usCountdown) ); // Remove the timer

    // Try to load the Calibration data from the SD CARD
    FSFILE * fpointer;
    unsigned short usDataRead = 0;
    short aTouchParams[9];

    // Open file in read mode
    fpointer = FSfopen ("TSCALIB.BIN", "r");

    if ( fpointer != NULL )
    {
        // Read nine two-bytes objects
        usDataRead = FSfread (aTouchParams, 2, 9, fpointer);
        FSfclose(fpointer);
    }

    // If the touch screen params couldn't be read, force the calibration
    if ( usDataRead != 9 )
        aTouchParams[8] = 1; // Request touch screen calibration

    // Initialize touch screen
    SetFastFunctor(&DetectTouchScreen);
    TouchInit(aTouchParams);

    // Try to store the calibration data in all cases (the user could have changed it by pressing the screen at boot time)
    fpointer = FSfopen ("TSCALIB.BIN", "w");
    if ( fpointer != NULL )
    {
        aTouchParams[8] = 0;
        FSfwrite(aTouchParams, 2, 9, fpointer);
        FSfclose (fpointer);
    }
}

/*
 * Print a picture from a file on the SD Card
 * This is a wrapper function to simplify printing
 * pictures from the SD Card
 * In - Left and top position of the picture
 * In - A pointer to the filename
 * In - Stretch factor, 1 or 2 allowed
 * Out - Always 1, since this is a blocking function
 */
BOOL PutImageFromSD(SHORT left, SHORT top, const char *pucFilename, BYTE stretch)
{
    if ( pFileInUse != NULL )
        return 0;

    MoveTo(left, top);
    pFileInUse = FSfopen (pucFilename, "r");
    if ( pFileInUse != NULL )
    {
        unsigned char ucFileComp;
        if(FSfread(&ucFileComp, 1, 1, pFileInUse))
        {
            ucFileComp |= 1;
            while( !PutImage(left, top, (void*)&ucFileComp, stretch));
        }
        FSfclose (pFileInUse);
        pFileInUse = NULL;
    }
    return 1;
}

// *** Never call this function ***
// This function is the implemention used by GOL to draw a picture
// directly from the SD Card
WORD ExternalMemoryCallback(GFX_EXTDATA* memory, LONG offset, WORD nCount, void* buffer) {
    unsigned int i = 0;

    if ( pFileInUse )
        i = FSfread(buffer, nCount, 1, pFileInUse);
    
    // return the actual number of bytes retrieved
    return (i);
}

/*
 * Set the delay between two ticks of the GOL timer
 * which will create "timeout" events for the UI (for refreshing for example)
 * In - The time in millisecond between two ticks OR zero to disable
 */
void SetGOLTimer(unsigned short usTimerMS)
{
    if ( usTimerMS )
    {
        usGOLTimer = usTimerMS;
        usGOLTimerReload = usTimerMS;
        SetFastCountdown(&usGOLTimer); // Make sure the timer is active
    }
    else
    {
        RemoveFastCountdown(&usGOLTimer); // Disable the GOL timer
    }
}

/*
 * This is a function for the UI message pump to get any events from the GOL timer
 * In - Pointer to the message structure receving the event informations
 */
void TimerGetMsg(GOL_MSG *pMsg)
{
    // This module only generates TIMER messages
    pMsg->type = TYPE_TIMER;

    if ( usGOLTimer )
    {
        // No event to send
        pMsg->uiEvent = EVENT_INVALID;
    }
    else
    {
        // Countdown timer is finished
        if ( usGOLTimerReload )
            usGOLTimer = usGOLTimerReload; // Reload the GOL timer
        else
        {
            usGOLTimer = 1000;
            RemoveFastCountdown(&usGOLTimer); // Disable the GOL timer
        }

        // Fill the event informations
        pMsg->uiEvent = EVENT_TIMEOUT;
        pMsg->param1 = usGOLTimerReload;
        pMsg->param2 = 0;
    }
}

