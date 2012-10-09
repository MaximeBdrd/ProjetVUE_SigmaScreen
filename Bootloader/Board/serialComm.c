/******************************************************************************
 * Serial Communication Driver
 * for half-duplex RS-485
 * All rights reserved to G-Tek Inc
 * 
 * by Maxime Bedard - 12/02/2012
 * ****************************************************************************/

// Important information
// The communication is half-duplex, which means that collisions are possible.
// On collision (both end devices transmitting at the same time), the driver
// will stop to avoid making to situation worse and giving garbage to the
// application. Make sure to handle these error by re-initializing the driver.
// The best way to avoid that is to design a good communication protocol.

// Also, note that you will receive the data you send as it appears on the
// network. This is usefull for error detection.

#include "serialComm.h"

#define RECEIVE_BUFFER_SIZE 150
#define SEND_BUFFER_SIZE 150

volatile unsigned short uart2_err_flag;            // Error flag for UART2
unsigned char receiveBuffer[RECEIVE_BUFFER_SIZE+1];
volatile unsigned short usRxPos, usRxLenth;
unsigned char sendBuffer[SEND_BUFFER_SIZE+1];
volatile unsigned short usTxPos, usTxLenth;

/*
 * Initialization of the serial communication driver
 * Any data not sent or read will be lost
 */
void InitSerialComm(void)
{
    // Reset buffers
    usRxPos = 0;
    usRxLenth = 0;
    usTxPos = 0;
    usTxLenth = 0;
    uart2_err_flag = 0;
    
    // Initialize device (8 bits data, no parity, 1 stop bit)
    U2MODE = 0;
    U2STA = 0;
    TRISDbits.TRISD8 = 0;
    TRISEbits.TRISE9 = 1;
    TRISAbits.TRISA5 = 0;
    PORTAbits.RA5 = 0; // 1 = Mode transmission
    U2BRG = 16; // 9600 baud/s = 103  57600 = 16

    //********************************************************************************
    //  Flow Control Mode, No Loop-Back
    // 	No Auto-Baud, No Rx-Inversion
    //	Low BaudRate, 1 Stop-bit
    //	8-bit, no parity 
    //********************************************************************************/
    U2MODE = 0x8200;

    //********************************************************************************
    //  Tx Interrupt to interrupt when at least one location is free in Tx buffer
    //	No Tx Inversion, Disable Sync Break
    //	Enable Transmit, Disable Address Detect
    //	Interrupt on every receive. 
    //********************************************************************************/
    U2STA = 0x0400;

    IFS1bits.U2RXIF = 0;	// Clear U2RX_Int flag
    IPC7bits.U2RXIP = 7;        // Low priority
    IEC1bits.U2RXIE = 1;	// Enable Uart2 RX Interrupts
}

/*
 * Set the transmission direction on the half-duplex canal
 * In - 1 = Transmit mode, 0 = Receive mode
 * Note : the mode should not be changed when the device isn't idle
 * Note2 : The device will still receive the outputed data in transmit mode
 */
void SetCommDir(unsigned char ucDir)
{
    if ( ucDir )
        PORTAbits.RA5 = 1;
    else
        PORTAbits.RA5 = 0;
}

/*
 * Read a bytes from the receive buffer
 * In - The number of bytes requested
 * In - Address of a buffer big enough
 * Out - Number of bytes written to the buffer (may be less than requested)
 */
unsigned short GetRxData(unsigned short usReq, unsigned char* pcBuffer)
{
    unsigned char ucSizeCopied, ucSize;

    IEC1bits.U2RXIE = 0;	// Disable Uart2 RX interrupts

    // Check the available number of bytes
    if (usRxLenth < usReq)
        ucSize = ucSizeCopied = usRxLenth;
    else
        ucSize = ucSizeCopied = usReq;

    // Copy the received bytes to the buffer
    while ( ucSizeCopied > 0 )
    {
        pcBuffer[0] = receiveBuffer[usRxPos];
        pcBuffer += 1;
        ucSizeCopied -= 1;
        usRxPos += 1;
        if ( usRxPos == RECEIVE_BUFFER_SIZE ) usRxPos = 0;        
    }
    usRxLenth -= ucSize;

    IEC1bits.U2RXIE = 1;	// Enable Uart2 RX Interrupts

    return ucSize;
}

/*
 * Get the received data count
 * Out - Number of bytes available in the receive buffer
 */
unsigned short GetRxCount(void)
{
    return usRxLenth;
}

/*
 * Erase all data in the receive buffer
 * Note : If a byte is not completely received yet it won't be erased
 */
void FlushAllRx(void)
{
    IEC1bits.U2RXIE = 0;	// Disable Uart2 RX interrupts
    usRxPos = 0;
    usRxLenth = 0;
    IEC1bits.U2RXIE = 1;	// Enable Uart2 RX Interrupts
}

/*
 * Send data to the serial interface
 * In - The number of bytes to send
 * In - The Address of the data to send
 * Out - The number of bytes copied in the FIFO (may be 0 if the queue is full)
 * Condition - The driver must be in SEND mode
 */
unsigned short SetTxData(unsigned short usSend, unsigned char* pcBuffer)
{
    unsigned short usSizeCopied, usSize, usFree;

    IEC1bits.U2TXIE = 0;	// Disable Uart2 TX interrupts

    // Check the available number of bytes
    usFree = SEND_BUFFER_SIZE - usTxLenth;
    if ( usFree < usSend)
        usSize = usSizeCopied = usFree;
    else
        usSize = usSizeCopied = usSend;

    // Copy the received bytes to the buffer
    unsigned short pos = usTxPos + usTxLenth;

    while ( usSizeCopied > 0 )
    {
        if ( pos >= SEND_BUFFER_SIZE ) pos -= SEND_BUFFER_SIZE;
        sendBuffer[pos] = pcBuffer[0];
        pcBuffer += 1;
        usSizeCopied -= 1;
        pos += 1;
    }
    usTxLenth += usSize;

    if ( !U2STAbits.UTXBF )
    {
        IFS1bits.U2TXIF = 1;    // Set TX interupt flag
    }
    IEC1bits.U2TXIE = 1;	// Enable Uart2 TX Interrupts

    return usSize;
}

/*
 * Get the available space in the send queue
 * Out - Number of bytes free in the send queue
 */
unsigned short GetTxCount(void)
{
    return SEND_BUFFER_SIZE - usTxLenth;
}

/*
 * Check the Serial Communication working state
 * Out - 0 if the device is idle
 * This is usuful to check if the device is sending or receiving data
 * even if the queues are empty
 */
unsigned short GetCommState(void)
{
    return !U2STAbits.TRMT || !U2STAbits.RIDLE;
}

/*
 * Check for communication errors
 * Out - Return 1 if there was communication errors, 0 otherwise
 * You will have to reinitialize the driver to restart the communication
 */
unsigned short GetCommError(void)
{
    uart2_err_flag |= U2STA & 0x000E;
    return uart2_err_flag;
}

/*********************************************************************************
*
*	_U2RXInterrupt - RS-485 Reception interrupt
*
**********************************************************************************/
// shadow attribute is used here to reduce interrupt save and restore overhead
void __attribute__((interrupt, shadow, no_auto_psv)) _U2RXInterrupt()
{
	IFS1bits.U2RXIF = 0; // Clear interupt flag

        if ( U2STAbits.OERR )
        {
            uart2_err_flag |= RECEIVE_BYTE_OVERRUN_FLAG;
            U2STAbits.OERR = 0;
        }

        char C = U2RXREG; // Read rx buffer

        if ( usRxLenth == RECEIVE_BUFFER_SIZE )
        {
            // Error if the buffer is overrun
            uart2_err_flag |= RECEIVE_BUFFER_OVERRUN_FLAG;
        }
        else if ( usRxLenth < RECEIVE_BUFFER_SIZE)
        {
            unsigned short pos = usRxPos + usRxLenth;
            if ( pos >= RECEIVE_BUFFER_SIZE ) pos -= RECEIVE_BUFFER_SIZE;
            receiveBuffer[pos] = C;
            usRxLenth += 1;
        }
}

/*********************************************************************************
*
*	_U2TXInterrupt - RS-485 Transmission interrupt
*
**********************************************************************************/
void __attribute__((interrupt, shadow, no_auto_psv)) _U2TXInterrupt()
{
	IFS1bits.U2TXIF = 0; // Clear interupt flag

        if ( usTxLenth == 0 )
        {
            // No more data to send, disable the interrupt
            IEC1bits.U2TXIE = 0;	// Disable Uart2 TX interrupts
        }
        else
        {
            while(U2STAbits.UTXBF); // Safety check, block if the device is still busy

            U2TXREG = sendBuffer[usTxPos];
            usTxPos += 1;
            if ( usTxPos == SEND_BUFFER_SIZE ) usTxPos = 0;
            usTxLenth -= 1;
        }
}


