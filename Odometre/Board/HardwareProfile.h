/******************************************************************************
 * Hardware Profile Definitions
 *
 * All rights reserved to G-Tek Inc
 *
 * by Maxime Bedard - 12/02/2012
 * ****************************************************************************/

#ifndef _HARDWAREPROFILE_H_
#define _HARDWAREPROFILE_H_

/*********************************************************************
* GetSystemClock() returns system clock frequency.
*
* GetPeripheralClock() returns peripheral clock frequency.
*
* GetInstructionClock() returns instruction clock frequency.
*
********************************************************************/

/*********************************************************************
* Macro: #define	GetSystemClock()
*
* Overview: This macro returns the system clock frequency in Hertz.
*			* value is 8 MHz x 4 PLL for PIC24
*			* value is 8 MHz/2 x 18 PLL for PIC32
*
********************************************************************/
    #if defined(__PIC24F__)
        #define GetSystemClock()    (32000000ul)
    #elif defined(__PIC32MX__)
        #define GetSystemClock()    (80000000ul)
    #elif defined(__dsPIC33F__) || defined(__PIC24H__)
        #define GetSystemClock()    (80000000ul)
    #elif defined(__dsPIC33E__) || defined(__PIC24E__)
    	#define GetSystemClock()    (120000000ul)
    #endif

/*********************************************************************
* Macro: #define	GetPeripheralClock()
*
* Overview: This macro returns the peripheral clock frequency
*			used in Hertz.
*			* value for PIC24 is <PRE>(GetSystemClock()/2) </PRE>
*			* value for PIC32 is <PRE>(GetSystemClock()/(1<<OSCCONbits.PBDIV)) </PRE>
*
********************************************************************/
    #if defined(__PIC24F__) || defined(__PIC24H__) || defined(__dsPIC33F__) || defined(__dsPIC33E__) || defined(__PIC24E__)
        #define GetPeripheralClock()    (GetSystemClock() / 2)
    #elif defined(__PIC32MX__)
        #define GetPeripheralClock()    (GetSystemClock() / (1 << OSCCONbits.PBDIV))
    #endif

/*********************************************************************
* Macro: #define	GetInstructionClock()
*
* Overview: This macro returns instruction clock frequency
*			used in Hertz.
*			* value for PIC24 is <PRE>(GetSystemClock()/2) </PRE>
*			* value for PIC32 is <PRE>(GetSystemClock()) </PRE>
*
********************************************************************/
    #if defined(__PIC24F__) || defined(__PIC24H__) || defined(__dsPIC33F__) || defined(__dsPIC33E__) || defined(__PIC24E__)
        #define GetInstructionClock()   (GetSystemClock() / 2)
    #elif defined(__PIC32MX__)
        #define GetInstructionClock()   (GetSystemClock())
    #endif

// ********* GPU CONFIG **********
#define USE_16BIT_PMP
#define GFX_USE_DISPLAY_CONTROLLER_MCHP_DA210
#define GFX_GCLK_DIVIDER 50
#define GFX_DISPLAY_BUFFER_START_ADDRESS 0x00020000ul
#define GFX_DISPLAY_BUFFER_LENGTH 0x0003FC00ul
#define GFX_EPMP_CS1_BASE_ADDRESS 0x00020000ul
#define GFX_EPMP_CS1_MEMORY_SIZE 0x160000ul
#define USE_TOUCHSCREEN_RESISTIVE
#define USE_GFX_EPMP

// based on the IS61LV25616AL RAM Device
#define EPMPCS1_ENABLE                              // use this to enable the use of EPMP CS1
#define EPMPCS1_ADDRESS_LINE_COUNT          (17)    // use 18 address lines (PMA[0:17]
#define EPMPCS1_DATA_SETUP_TIME             (4)	    //
#define EPMPCS1_DATA_WAIT_TIME		        (15)    // Time in ns
#define EPMPCS1_DATA_HOLD_TIME		        (4)	//
#define EPMPCS1_CS_POLARITY	GFX_ACTIVE_LOW
#define EPMPCS1_WR_POLARITY	GFX_ACTIVE_LOW
#define EPMPCS1_RD_POLARITY	GFX_ACTIVE_LOW
#define EPMPCS1_BE_POLARITY	GFX_ACTIVE_LOW
#define EPMPCS1_ACCESS_TIME                 (20)		// chip select 1 Alternate Master access time.

// Definitions for POWER ON pin
#define DisplayPowerConfig()
#define DisplayPowerOn()
#define DisplayPowerOff()

// Definitions for backlight control pin
#define DisplayBacklightConfig()
#define DisplayBacklightOn()
#define DisplayBacklightOff()

// Dummy definitions
// Definitions for reset pin
#define DisplayResetConfig()
#define DisplayResetEnable()
#define DisplayResetDisable()

// Definitions for RS pin
#define DisplayCmdDataConfig()
#define DisplaySetCommand()
#define DisplaySetData()

// Definitions for CS pin
#define DisplayConfig()
#define DisplayEnable()
#define DisplayDisable()

// ADC Input Channel Selector
#define TOUCH_ADC_INPUT_SEL   AD1CHS

// ADC Sample Start
#define TOUCH_ADC_START   AD1CON1bits.SAMP

// ADC Status
#define TOUCH_ADC_DONE   AD1CON1bits.DONE
#define ADC_XPOS		1
#define ADC_YPOS		0

// ADC Port Control Bits
#define ADPCFG_XPOS		ANSBbits.ANSB1
#define ADPCFG_YPOS		ANSBbits.ANSB0

// Y port definitions
#define LAT_XPOS    LATBbits.LATB1
#define TRIS_XPOS   TRISBbits.TRISB1
#define LAT_XNEG    LATAbits.LATA2
#define TRIS_XNEG   TRISAbits.TRISA2

// X port definitions
#define LAT_YPOS    LATBbits.LATB0
#define TRIS_YPOS   TRISBbits.TRISB0
#define LAT_YNEG    LATAbits.LATA1
#define TRIS_YNEG   TRISAbits.TRISA1

#define ADDRESS_RESISTIVE_TOUCH_VERSION	0
#define ADDRESS_RESISTIVE_TOUCH_ULX     0
#define ADDRESS_RESISTIVE_TOUCH_ULY     1
#define ADDRESS_RESISTIVE_TOUCH_URX     2
#define ADDRESS_RESISTIVE_TOUCH_URY     3

#define ADDRESS_RESISTIVE_TOUCH_LLX     4
#define ADDRESS_RESISTIVE_TOUCH_LLY     5
#define ADDRESS_RESISTIVE_TOUCH_LRX     6
#define ADDRESS_RESISTIVE_TOUCH_LRY     7
#define NVMSectorErase			((void *)0)
#define NVMWrite 			((void *)0)
#define NVMRead 			((void *)0)

// Description: Macro used to enable the SD-SPI physical layer (SD-SPI.c and .h)
#define USE_SD_INTERFACE_WITH_SPI

/*********************************************************************/
/******************* Pin and Register Definitions ********************/
/*********************************************************************/

/* SD Card definitions: Change these to fit your application when using
   an SD-card-based physical layer                                   */

// Description: SD-SPI Chip Select Output bit
//#define SD_CS   PORTFbits.RF3
#define SD_CS   PORTAbits.RA0

// Description: SD-SPI Chip Select TRIS bit
#define SD_CS_TRIS  TRISAbits.TRISA0

// Registers for the SPI module you want to use
// Description: The main SPI control register
#define SPICON1 SPI1CON1

// Description: The SPI status register
#define SPISTAT SPI1STAT

// Description: The SPI Buffer
#define SPIBUF  SPI1BUF

// Description: The receive buffer full bit in the SPI status register
#define SPISTAT_RBF SPI1STATbits.SPIRBF

// Description: The bitwise define for the SPI control register (i.e. _____bits)
#define SPICON1bits SPI1CON1bits

// Description: The bitwise define for the SPI status register (i.e. _____bits)
#define SPISTATbits SPI1STATbits

// Description: The enable bit for the SPI module
#define SPIENABLE   SPISTATbits.SPIEN

#define SPICON2  SPI2CON2

// Tris pins for SCK/SDI/SDO lines
// Description: The TRIS bit for the SCK pin RP26
#define SPICLOCK    TRISGbits.TRISG7
// Description: The TRIS bit for the SDI pin RPI41
#define SPIIN       TRISCbits.TRISC4
// Description: The TRIS bit for the SDO pin RP19   // Different from Seresco
#define SPIOUT      TRISGbits.TRISG8

// Will generate an error if the clock speed is too low to interface to the card
#if (GetSystemClock() < 100000)
#error Clock speed must exceed 100 kHz
#endif    

// UART configuration for RS-485
//#define BAUDRATE2       57600UL
//#define BRG_DIV2        4
//#define BRGH2           1

// From the screen data sheet
#define DISP_ORIENTATION		0
#if DISP_ORIENTATION == 180
    #define TOUCHSCREEN_RESISTIVE_FLIP_Y
    #define TOUCHSCREEN_RESISTIVE_SWAP_XY
#elif DISP_ORIENTATION == 0
    #define TOUCHSCREEN_RESISTIVE_SWAP_XY
#endif

#define DISP_HOR_RESOLUTION		480
#define DISP_VER_RESOLUTION		272
#define DISP_DATA_WIDTH			24
#define DISP_INV_LSHIFT
#define DISP_HOR_PULSE_WIDTH    41
#define DISP_HOR_BACK_PORCH     2
#define DISP_HOR_FRONT_PORCH    2
#define DISP_VER_PULSE_WIDTH    10
#define DISP_VER_BACK_PORCH     2
#define DISP_VER_FRONT_PORCH    2
#define GFX_LCD_TYPE            GFX_LCD_TFT

#define GFX_DISPLAYENABLE_ENABLE
#define GFX_HSYNC_ENABLE
#define GFX_VSYNC_ENABLE
#define GFX_DISPLAYPOWER_ENABLE
#define GFX_CLOCK_POLARITY                  GFX_ACTIVE_LOW
#define GFX_DISPLAYENABLE_POLARITY          GFX_ACTIVE_HIGH
#define GFX_HSYNC_POLARITY                  GFX_ACTIVE_LOW
#define GFX_VSYNC_POLARITY                  GFX_ACTIVE_LOW
#define GFX_DISPLAYPOWER_POLARITY           GFX_ACTIVE_HIGH


#endif
