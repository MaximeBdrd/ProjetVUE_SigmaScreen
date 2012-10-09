/******************************************************************************
 * Board support drivers
 * for initialisation and board specific functions
 * All rights reserved to G-Tek Inc
 * 
 * by Maxime Bedard - 12/02/2012
 * ****************************************************************************/

#include "Board.h"
#include "FSIO.h"
#include "TimeDelay.h"

/* RCC GPU Commands */
#define RCC_SRCADDR                         0x62000000ul
#define RCC_DESTADDR                        0x63000000ul
#define RCC_RECTSIZE                        0x64000000ul
#define RCC_COLOR                           0x66000000ul
#define RCC_STARTCOPY                       0x67000000ul
#define RCC_DEST_ADDR_DISCONTINUOUS         0x00000000ul

#define GFX_BITS_PER_PIXEL 2
#define GFX_COLOR_MASK                      0x0003
#define GFX_COMMAND_QUEUE_LENGTH            16
#define GFX_BUFFER_START_ADDRESS    0x00007000

#define GFX_LCD_TFT  0x01			// Type TFT Display
#define GFX_ACTIVE_HIGH                     1
#define GFX_ACTIVE_LOW                      0

#define RCC_ROP_C                           0x00000060ul		// S
#define RCC_SOLID_FILL                      0x00000000ul
#define RCC_SRC_ADDR_DISCONTINUOUS          0x00000000ul
#define GFX_DATA_DISCONTINUOUS              (0x00)
#define GFX_SetCommand(c)                   { G1CMDL = ((DWORD_VAL)((DWORD)(c))).word.LW; G1CMDH = ((DWORD_VAL)((DWORD)(c))).word.HW; Nop(); }
#define GFX_GetFreeCommandSpace()       	(GFX_COMMAND_QUEUE_LENGTH - _GCMDCNT)
#define GFX_SetDisplayArea(a)               { G1DPADRL = ((DWORD_VAL)((DWORD)(a))).word.LW; G1DPADRH = ((DWORD_VAL)((DWORD)(a))).word.HW; }
#define GFX_SetWorkArea1(a)                 { G1W1ADRL = ((DWORD_VAL)((DWORD)(a))).word.LW; G1W1ADRH = ((DWORD_VAL)((DWORD)(a))).word.HW; }
#define GFX_SetWorkArea2(a)                 { G1W2ADRL = ((DWORD_VAL)((DWORD)(a))).word.LW; G1W2ADRH = ((DWORD_VAL)((DWORD)(a))).word.HW; }
#define GFX_WaitForCommandQueue(n)      	while(GFX_GetFreeCommandSpace() < (n));
#define GFX_RCC_SetDestOffset(dstOffset)  	GFX_SetCommand(RCC_DESTADDR | (DWORD)(dstOffset));      /* Don't do error checking or error corrections */
#define GFX_RCC_SetSize(width, height)      GFX_SetCommand(RCC_RECTSIZE | (((DWORD)(width)) << 12) | (DWORD)height)     /* Don't do error checking or error corrections */
#define GFX_RCC_SetColor(color)             GFX_SetCommand(RCC_COLOR    | (color & GFX_COLOR_MASK)) /* Don't do error checking or error corrections */
#define GFX_RCC_StartCopy(type_of_copy, rop, src_addr_type, dest_addr_type)      GFX_SetCommand(RCC_STARTCOPY | type_of_copy | rop | src_addr_type | dest_addr_type)     /* Don't do error checking or error corrections */

// This is the calibration data from the touch screen module
/*extern volatile long   _trA;
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
}*/

WORD gColor;

void Bar(SHORT left, SHORT top, SHORT width, SHORT height)
{
    DWORD address;

    if(GFX_GetFreeCommandSpace() < 4)
    {
            GFX_WaitForCommandQueue(4);
    }

    address = (top * (DWORD)DISP_HOR_RESOLUTION) + left;

    GFX_SetWorkArea2(GFX_BUFFER_START_ADDRESS);

    GFX_RCC_SetColor(gColor);
    GFX_RCC_SetDestOffset(address);
    GFX_RCC_SetSize(width, height);
    GFX_RCC_StartCopy(RCC_SOLID_FILL, RCC_ROP_C, RCC_SRC_ADDR_DISCONTINUOUS, RCC_DEST_ADDR_DISCONTINUOUS);
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
    //pFileInUse = NULL;
    
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

    SD_CS = 1;                     //Initialize Chip Select line
    SD_CS_TRIS = OUTPUT;           //Card Select - output
   
    //MDD_SDSPI_InitIO(); // Initialize IO pins for SPI (SD CARD)

    //InitSerialComm();   // Initialize Serial Communication
    //SetCommDir(SERIAL_COMM_TRANSMIT_MODE);

    // Special GOL Timer
    //usGOLTimerReload = 0;
    //usGOLTimer = 1;

    //InitTimers();       // Initialize Timer module
    //GOLInit();          // Initialize Graphic Objects Layer

    //unsigned short usCountdown = 0;
    //while( SetFastCountdown(&usCountdown)); // Create a timer for the SD Card detection

    // Make sure that SD CARD is available
    // Loop until the filesystem is ready
    /*if (FSInit() == FALSE)
    {
        
        usCountdown = 100;
        while (usCountdown); // Delay, before we can draw

        // Display a warning for the SD CARD
        SetColor(RGBConvert(9, 58, 109)); // Dark blue background
        ClearDevice();

        SetFont((void *) &FONTDEFAULT); // Bright red text
        SetColor(RGBConvert(0xFF, 0, 0));
        while(!OutTextXY(90, 210, strSdMess));
        while(!OutTextXY(90, 240, strSdMess2));

        usCountdown = 100;
        while (usCountdown); // FREEZE! NO SD CARD!

        while (FSInit() == FALSE)
        {
            usCountdown = 1000;
            while (usCountdown); // FREEZE! NO SD CARD!
        }
    }*/

    //while( RemoveFastCountdown(&usCountdown)); // Remove the timer

    // Try to load the Calibration data from the SD CARD
    /*FSFILE * fpointer;
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
    }*/
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
/*BOOL PutImageFromSD(SHORT left, SHORT top, const char *pucFilename, BYTE stretch)
{
    if ( pFileInUse != NULL )
        return 0;
    
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
}*/

// *** Never call this function ***
// This function is the implemention used by GOL to draw a picture
// directly from the SD Card
/*WORD ExternalMemoryCallback(GFX_EXTDATA* memory, LONG offset, WORD nCount, void* buffer) {
    unsigned int i = 0;

    if ( pFileInUse )
        i = FSfread(buffer, nCount, 1, pFileInUse);
    
    // return the actual number of bytes retrieved
    return (i);
}*/

/*
 * Set the delay between two ticks of the GOL timer
 * which will create "timeout" events for the UI (for refreshing for example)
 * In - The time in millisecond between two ticks OR zero to disable
 */
/*void SetGOLTimer(unsigned short usTimerMS)
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
}*/

/*
 * This is a function for the UI message pump to get any events from the GOL timer
 * In - Pointer to the message structure receving the event informations
 */
/*void TimerGetMsg(GOL_MSG *pMsg)
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
}*/

void InitGraphics(void)
{
    /* Graphic Circuit Initialization */
    /* Set up the Graphics Module clock source and the GCLK frequency. */
    _G1CLKSEL = 1;  				// 96MHz Enable
    _GCLKDIV = GFX_GCLK_DIVIDER;	// value used is dependent on the display panel specification
    G1CON1   = 0; /* Switch off the module */
    G1CON2   = 0;
    G1CON3   = 0;
    G1IE     = 0;
    G1IR     = 0;
    G1CLUT   = 0;
    G1MRGN   = 0;
    G1CLUTWR = 0;
    G1CHRX   = 0;
    G1CHRY   = 0;
    G1CMDL   = 0;
    G1CMDH   = 0;
    // set the  processing unit bit per pixel
    _PUBPP   = GFX_BITS_PER_PIXEL;
    // set the  display controller bit per pixel
    _DPBPP   = GFX_BITS_PER_PIXEL;
    // set the LCD type used (TFT, MSTN or CSTN)
    _DPMODE  = GFX_LCD_TYPE;
    // set the display enable polarity
    _DPENPOL = GFX_DISPLAYENABLE_POLARITY;
    _DPENOE = 1;
    // set the HSYNC signal polarity
    _DPHSPOL = GFX_HSYNC_POLARITY;
    _DPHSOE = 1;
    // set the VSYNC signal polarity
    _DPVSPOL = GFX_VSYNC_POLARITY;
    _DPVSOE = 1;
    // set the display power (GPWR) signal polarity
    _DPPOWER = GFX_DISPLAYPOWER_POLARITY;
    _DPPWROE = 1;
    /* Display timing signal configurations */
    // set the clock polarity
    _DPCLKPOL = GFX_CLOCK_POLARITY;
    // set the display buffer dimension
    G1DPW = DISP_HOR_RESOLUTION;
    G1DPH = DISP_VER_RESOLUTION;
    // set the work area dimension
    G1PUW = DISP_HOR_RESOLUTION;
    G1PUH = DISP_VER_RESOLUTION;
    #define HT  (DISP_HOR_PULSE_WIDTH + DISP_HOR_BACK_PORCH + DISP_HOR_FRONT_PORCH + DISP_HOR_RESOLUTION)
    #define VT  (DISP_VER_PULSE_WIDTH + DISP_VER_BACK_PORCH + DISP_VER_FRONT_PORCH + DISP_VER_RESOLUTION)

    G1DPWT = HT;
    G1DPHT = VT;

	// set the horizontal pulse width
    _HSLEN = DISP_HOR_PULSE_WIDTH;
    _HSST  = 0;

	// set the verrizontal pulse width
    _VSLEN = DISP_VER_PULSE_WIDTH;
    _VSST  = 0;

	// set the horizontal & vertical start position
    _HENST = _HSST + DISP_HOR_PULSE_WIDTH + DISP_HOR_BACK_PORCH;
    _VENST = _VSST + DISP_VER_PULSE_WIDTH + DISP_VER_BACK_PORCH;

	// set the active pixel and active line start position
	_ACTPIX  = _HENST;
	_ACTLINE = _VENST;
	// initialize the work areas and display buffer base addresses global variables
    //_workArea1BaseAddr   = GFX_DISPLAY_BUFFER_START_ADDRESS;
    //_workArea2BaseAddr   = GFX_DISPLAY_BUFFER_START_ADDRESS;
    // Set the display buffer base address (SFR) (or the start addresses in RAM)
    GFX_SetDisplayArea(GFX_BUFFER_START_ADDRESS);
    /* Switch On the Graphics Module */
    _GDBEN = 0xFFFF;
    _DPPINOE = 1;
    _DPSTGER = 0;					// display data stagger (set to none)
    _GFX1IF = 0;					// clear graphics interrupt flag
    _GFX1IE = 0;					// graphics interrupt are not enabled
    _G1EN = 1;						// turn on the graphics module
    DelayMs(100);
    _DPPWROE = 1;					// enable the display power sequencer port to function as GPWR
    _DPPOWER = 1;					// turn on the display power sequencer

    // clear the screen to all black first to remove the noise screen
    gColor = 0;
    Bar(0,0,DISP_HOR_RESOLUTION,DISP_VER_RESOLUTION);
    DelayMs(100);
}
