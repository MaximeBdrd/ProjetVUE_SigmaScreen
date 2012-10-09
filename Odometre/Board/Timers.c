/******************************************************************************
 * Timer controls
 * All rights reserved to G-Tek Inc
 * 
 * by Maxime Bedard - 12/02/2012
 * ****************************************************************************/

#include <p24FJ256DA210.h>

#include "Timers.h"
#include "HardwareProfile.h"


#define SAMPLE_PERIOD   1000 // us
#define TICK_PERIOD	((GetPeripheralClock()) * SAMPLE_PERIOD) / 4000000

#define MAX_NUMBER_FAST_COUNDOWNS   8
#define MAX_NUMBER_FAST_FUNCTIONS   8

typedef void (*ptFunction)(void);

// Private global variables
volatile unsigned long  timer4_timestamp __attribute__ ((near));        // tick counter

volatile unsigned char  ucFastListLength __attribute__ ((near)) = 0;        // Lenth of the fast countdown list
volatile unsigned short* aFastListTimers[MAX_NUMBER_FAST_COUNDOWNS];

volatile unsigned char  ucFastFunctionLength __attribute__ ((near)) = 0;        // Lenth of the fast function list
volatile ptFunction aFastListFunctions[MAX_NUMBER_FAST_FUNCTIONS];

/*
 * Initialization and start of the timer module
 * All previouly defined timer will be stopped and timestamp will be reseted
 */
void InitTimers(void)
{
    // Initialize Timer4
    IEC1bits.T4IE = 0;  // Make sure Timer 4 is disabled
    ucFastListLength = 0;
    ucFastFunctionLength = 0;
    timer4_timestamp = 0;
    T4CON = 0;
    TMR4 = 0;
    PR4 = 16000;
    IFS1bits.T4IF = 0;  //Clear flag
    IPC6bits.T4IP = 7;  //Set high priority    
    IEC1bits.T4IE = 1;  //Enable interrupt
    T4CONbits.TON = 1;  //Run timer
}

/*
 * Get a system wide timestamp (period is around 1 ms)
 * Out - 32 bits timestamp (will overflow every 49 days)
 */
unsigned long GetTimestamp(void)
{
    return timer4_timestamp;
}

/*
 * Register a fast inverse coundown timer (1 ms period)
 * In - Address of the variable to register (has to be unsigned short)
 * Out -  0 = success
 * Note: The countdown will stop when the variable reaches zero
 */
unsigned char SetFastCountdown(volatile unsigned short* pusCountdown)
{
    /// Make sure there is space in the list
    if ( ucFastListLength != MAX_NUMBER_FAST_COUNDOWNS && pusCountdown != 0 )
    {
        // Check if the pointer is already there
        unsigned char i;
        for ( i = 0; i < ucFastListLength; i++ )
        {
            if ( aFastListTimers[i] == pusCountdown )
                return 0;
        }

        // Add the pointer to the list
        IEC1bits.T4IE = 0; // Disable the Timer interrupt
        aFastListTimers[ucFastListLength] = pusCountdown;
        ucFastListLength += 1;
        IEC1bits.T4IE = 1; // Reenable the Timer interrupt

        return 0;
    }
    else
        return 1;
}

/*
 * Unregister a fast inverse coundown timer (1 ms period)
 * In - Addresse of the variable to unregister (has to be unsigned short)
 * Out -  0 = success
 */
unsigned char RemoveFastCountdown(volatile unsigned short* pusCountdown)
{
    // Try to find the pointer in the list
    unsigned char i;
    unsigned char pos = MAX_NUMBER_FAST_COUNDOWNS + 1;
    for ( i = 0; i < ucFastListLength; i++ )
    {
        if ( aFastListTimers[i] == pusCountdown )
        {
            // Found it!
            pos = i;
            break;
        }
    }

    if ( pos == i )
    {
        // Remove the pointer from the list, may need to move the other ones
        IEC1bits.T4IE = 0; // Disable the Timer interrupt
        i += 1;
        while ( i < ucFastListLength )
        {
            aFastListTimers[pos] = aFastListTimers[i];
            pos += 1;
            i += 1;
        }
        aFastListTimers[pos] = 0; // NULL pointer
        ucFastListLength -= 1;
        IEC1bits.T4IE = 1; // Reenable the Timer interrupt
        return 0;
    }
    else
        return 1;
}

/*
 * Register a function pointer called every ms
 * In - Address of the function pointer to register (has to be (void)*p(void))
 * Out -  0 = success
 * Note: The pointed function should never call another function!
 */
unsigned char SetFastFunctor(void (*pFunc)(void))
{
    /// Make sure there is space in the list
    if ( ucFastFunctionLength != MAX_NUMBER_FAST_FUNCTIONS && pFunc != 0 )
    {
        // Check if the pointer is already there
        unsigned char i;
        for ( i = 0; i < ucFastFunctionLength; i++ )
        {
            if ( aFastListFunctions[i] == pFunc )
                return 0;
        }
        
        // Add the pointer to the list
        IEC1bits.T4IE = 0; // Disable the Timer interrupt
        aFastListFunctions[ucFastFunctionLength] = pFunc;
        ucFastFunctionLength += 1;
        IEC1bits.T4IE = 1; // Reenable the Timer interrupt

        return 0;
    }
    else
        return 1;
}

/*
 * Unregister a function pointer
 * In - Address of the function pointer to unregister
 * Out -  0 = success
 */
unsigned char RemoveFunctor(void (*pFunc)(void))
{
    // Try to find the pointer in the list
    unsigned char i;
    unsigned char pos = MAX_NUMBER_FAST_FUNCTIONS + 1;
    for ( i = 0; i < ucFastFunctionLength; i++ )
    {
        if ( aFastListFunctions[i] == pFunc )
        {
            // Found it!
            pos = i;
            break;
        }
    }

    if ( pos == i )
    {
        // Remove the pointer from the list, may need to move the other ones
        IEC1bits.T4IE = 0; // Disable the Timer interrupt
        i += 1;
        while ( i < ucFastFunctionLength )
        {
            aFastListFunctions[pos] = aFastListFunctions[i];
            pos += 1;
            i += 1;
        }
        aFastListFunctions[pos] = 0; // NULL pointer
        ucFastFunctionLength -= 1;
        IEC1bits.T4IE = 1; // Reenable the Timer interrupt
        return 0;
    }
    else
        return 1;
}

/*********************************************************************************
*
*	_T4Interrupt - Main timing timer interrupt
*
**********************************************************************************/
void __attribute__((interrupt, no_auto_psv)) _T4Interrupt(void)
{
    IFS1bits.T4IF = 0;      // Clear flag
    
    TMR4 = 0;               // Reset timer4
    
    timer4_timestamp++;     // Increment timestamp

    // Decrement fast countdowns
    unsigned char i;
    for ( i = 0; i < ucFastListLength; i++ )
    {
        if ( aFastListTimers[i] && *(aFastListTimers[i]) )
            *(aFastListTimers[i]) -= 1;
    }

    // Execute functors
    for ( i = 0; i < ucFastFunctionLength; i++ )
    {
        (*(aFastListFunctions[i]))();
    }
}

