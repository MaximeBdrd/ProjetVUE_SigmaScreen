/******************************************************************************
 * Board support drivers
 * for initialisation and board specific functions
 * All rights reserved to G-Tek Inc
 *
 * by Maxime Bedard - 12/02/2012
 * ****************************************************************************/

#ifndef _BOARD_H_
#define _BOARD_H_

#include "GenericTypeDefs.h"

// For developpement, it is very usufull to be able to freeze the application for debugging
// But on the field, it's better to restart the device (datalogging would be welcome...)
#ifdef __DEBUG
    #define FREEZE() while(1);
#elif defined(__RELEASE)
    #define FREEZE() asm("reset");
#else
    #warning "Unknown build type"
#endif

/*
 * Initialize the board
 * TouchScreen, Timers, Communication, Graphical layer, Filesystem, etc
 * Note : Should only be called once at the begginning of the main
 * Also, this function will freeze if there is no SD Card
 */
void InitBoard(void);

/*
 * Print a picture from a file on the SD Card
 * This is a wrapper function to simplify printing
 * pictures from the SD Card
 * In - Left and top position of the picture
 * In - A pointer to the filename
 * In - Stretch factor, 1 or 2 allowed
 * Out - Always 1, since this is a blocking function
 */
//BOOL PutImageFromSD(SHORT left, SHORT top, const char *pucFilename, BYTE stretch);

/*
 * Set the delay between two ticks of the GOL timer
 * which will create "timeout" events for the UI (for refreshing for example)
 * In - The time in millisecond between two ticks OR zero to disable
 */
//void SetGOLTimer(unsigned short usTimerMS);

/*
 * This is a function for the UI message pump to get any events from the GOL timer
 * In - Pointer to the message structure receving the event informations
 */
//void TimerGetMsg(GOL_MSG *pMsg);

void InitGraphics(void);

#endif

