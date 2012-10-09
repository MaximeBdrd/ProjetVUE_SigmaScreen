/******************************************************************************
 * Timer controls
 * All rights reserved to G-Tek Inc
 *
 * by Maxime Bedard - 12/02/2012
 * ****************************************************************************/

#ifndef _TIMERS_H_
#define _TIMERS_H_


/*
 * Initialization and start of the timer module
 * All previouly defined timer will be stopped and timestamp will be reseted
 */
void InitTimers(void);

/*
 * Get a system wide timestamp (period is around 1 ms)
 * Out - 32 bits timestamp (will overflow every 49 days)
 */
unsigned long GetTimestamp(void);

/*
 * Register a fast inverse coundown timer (1 ms period)
 * In - Address of the variable to register (has to be unsigned short)
 * Out -  0 = success
 * Note: The countdown will stop when the variable reaches zero
 *       and restart at the moment you assign another value
 */
unsigned char SetFastCountdown(volatile unsigned short* pusCountdown);

/*
 * Unregister a fast inverse coundown timer (1 ms period)
 * In - Address of the variable to unregister (has to be unsigned short)
 * Out -  0 = success
 */
unsigned char RemoveFastCountdown(volatile unsigned short* pusCountdown);

/*
 * Register a function pointer called every ms
 * In - Address of the function pointer to register (has to be (void)*p(void))
 * Out -  0 = success
 * Note: The pointed function should never call another function!
 */
unsigned char SetFastFunctor(void (*pFunc)(void));

/*
 * Unregister a function pointer
 * In - Address of the function pointer to unregister
 * Out -  0 = success
 */
unsigned char RemoveFunctor(void (*pFunc)(void));

// Main timing timer interrupt
void __attribute__((interrupt, no_auto_psv)) _T4Interrupt(void);

#endif

