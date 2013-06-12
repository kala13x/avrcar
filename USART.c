#include "ROOT.h"
#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>


//###################################################################


#define BAUDRATE 9600									//set desired baud rate
//#define UBRRVAL ((F_CPU/(BAUDRATE*16UL))-1)			//calculate UBRR value
#define UBRRVAL ((7372800/(BAUDRATE*16UL))-1)			//calculate UBRR value

char USART_buffer[128];
unsigned char USART_Positone=0;
unsigned char USART_Busy=0;
char USART0_Vel;
void USART_Init();
void USART_Transmit();


//###################################################################

void USART_Init()
{
	UBRR0L= UBRRVAL; 					//	Set baud rate, low byte
	UBRR0H=(UBRRVAL>>8);				//	Set baud rate, high byte

	UCSR0C=(0<<UMSEL0)|					//
		  (0<<UPM01) |					//
		  (0<<UPM00) |					//
		  (0<<USBS0) |					//
		  (1<<UCSZ01)|					//
		  (1<<UCSZ00)|					//
		  (0<<UCPOL0);					//
	UCSR0B=(0<<RXEN) |					//	Enable USART Receiver
	      (1<<TXEN) |					//	Enable USART Transmitter
		  (0<<RXCIE)|					//	Enable USART Interrupt on receive complete
		  (0<<TXCIE);

	//sei();
}

/*void USART_Transmit()
{
	USART_Positone = 0 ;
	if (USART_buffer[USART_Positone]!=0)
	{
		USART_Busy = 1 ;
		UDR0=USART_buffer[USART_Positone];
	} else {
		USART_Busy = 0 ;
	}
}

ISR(USART0_TX_vect)
{
	USART_Positone ++;
	if (USART_buffer[USART_Positone]!=0)  {
		UDR0=USART_buffer[USART_Positone];
	} else {
		USART_Busy = 0;
	}
}

ISR(USART0_RX_vect) {

	USART0_Vel = UDR0;
	Task_03();

}*/




