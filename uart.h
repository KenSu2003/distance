// uart.h 
// header file to accompany uart.c
// Written 4/21/22 D.McLaughlin

#include <avr/io.h>
#include <string.h>

/*
* Initialize the UART
*
* Enables the UART transmitter;Sets 8 bit character size
* Sets baud rate to 9600 for 16 MHz crystal
*
* Arguments: none
* Returns: none
*/
void uart_init(void);

/*
* Transmit a single character via UART
*
* Enables the UART transmitter;Sets 8 bit character size
* Sets baud rate to 9600 for 16 MHz crystal
*
* Arguments: 
*       letter - ASCII character to be transmitted
* Returns: none
*/
void uart_send(unsigned char letter);

/*
* Transmit a character string via UART
*
* Sends the string, char by char, to the UART
* via uart_send()
*
* Arguments: 
*       *stringAddress - pointer to the string
* Returns: none
*/
void send_string(char *stringAddress);
