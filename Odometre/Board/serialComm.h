/******************************************************************************
 * Serial Communication Driver
 * for half-duplex RS-485
 * All rights reserved to G-Tek Inc
 * 
 * by Maxime Bedard - 12/02/2012
 * ****************************************************************************/

#ifndef _SERIALCOMM_H_
#define _SERIALCOMM_H_

#include <p24FJ256DA210.h>

#define RECEIVE_BUFFER_OVERRUN_FLAG 0x1000
#define RECEIVE_BYTE_OVERRUN_FLAG 0x2000

#define SERIAL_COMM_TRANSMIT_MODE 1
#define SERIAL_COMM_RECEIVE_MODE 0


// Important information
// The communication is half-duplex, which means that collisions are possible.
// On collision (both end devices transmitting at the same time), the driver
// will stop to avoid making to situation worse and giving garbage to the
// application. Make sure to handle these error by re-initializing the driver.
// The best way to avoid that is to design a good communication protocol.

// Also, note that you will receive the data you send as it appears on the
// network. This is usefull for error detection.

void __attribute__((interrupt, shadow, no_auto_psv)) _U2RXInterrupt(void);
void __attribute__((interrupt, shadow, no_auto_psv)) _U2TXInterrupt();

/*
 * Initialization of the serial communication driver
 * Any data not sent or read will be lost
 */
void InitSerialComm(void);

/*
 * Set the transmission direction on the half-duplex canal
 * In - 1 = Transmit mode, 0 = Receive mode
 * Note : the mode should not be changed when the device isn't idle
 * Note2 : The device will still receive the outputed data in transmit mode
 */
void SetCommDir(unsigned char ucDir);

/*
 * Read a bytes from the receive buffer
 * In - The number of bytes requested
 * In - Address of a buffer big enough
 * Out - Number of bytes written to the buffer (may be less than requested)
 */
unsigned short GetRxData(unsigned short ucReq, unsigned char* pcBuffer);

/*
 * Get the received data count
 * Out - Number of bytes available in the receive buffer
 */
unsigned short GetRxCount(void);

/*
 * Erase all data in the receive buffer
 * Note : If a byte is not completely received yet it won't be erased
 */
void FlushAllRx(void);

/*
 * Send data to the serial interface
 * In - The number of bytes to send
 * In - The Address of the data to send
 * Out - The number of bytes copied in the FIFO (may be 0 if the queue if full)
 * Condition - The driver must be in SEND mode
 */
unsigned short SetTxData(unsigned short ucSend, unsigned char* pcBuffer);

/*
 * Get the available space in the send queue
 * Out - Number of bytes free in the send queue
 */
unsigned short GetTxCount(void);

/*
 * Check the Serial Communication working state
 * Out - 0 if the device is idle
 * This is usuful to check if the device if sending or receiving data
 * even if the queues are empty
 */
unsigned short GetCommState(void);

/*
 * Check for communication errors
 * Out - Return something if there was communication errors, 0 otherwise
 * You will have to reinitialize the driver to restart the communication
 * and remove the error flags
 */
unsigned short GetCommError(void);

#endif
