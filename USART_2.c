#include "ROOT.h"
#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>


//###################################################################


#define BAUDRATE2 9600									//set desired baud rate
//#define UBRRVAL ((F_CPU/(BAUDRATE*16UL))-1)			//calculate UBRR value
#define UBRRVAL2 ((7372800/(BAUDRATE2*16UL))-1)			//calculate UBRR value

char USART2_buffer[250];
unsigned char USART2_Positone=0;
unsigned char USART2_Busy=0;
char USART2_Vel;
void USART2_Init();
void USART2_Transmit();


//###################################################################

void USART2_Init()
{
	UBRR1L= UBRRVAL2; 					//	Set baud rate, low byte
	UBRR1H=(UBRRVAL2>>8);				//	Set baud rate, high byte

	UCSR1C=(0<<UMSEL1)|					//
		  (0<<UPM11) |					//
		  (0<<UPM10) |					//
		  (0<<USBS1) |					//
		  (1<<UCSZ11)|					//
		  (1<<UCSZ10)|					//
		  (0<<UCPOL1);					//
	UCSR1B=(1<<RXEN1) |					//	Enable USART Receiver
	      (1<<TXEN1) |					//	Enable USART Transmitter
		  (1<<RXCIE1)|					//	Enable USART Interrupt on receive complete
		  (1<<TXCIE1);

	sei();
}

void USART2_Transmit()
{
	USART2_Positone = 0 ;
	if (USART2_buffer[USART2_Positone]!=0)
	{
		USART2_Busy = 1 ;
		UDR1=USART2_buffer[USART2_Positone];
	} else {
		USART2_Busy = 0 ;
	}
}

ISR(USART1_TX_vect)
{
	USART2_Positone ++;
	if (USART2_buffer[USART2_Positone]!=0)  {
		UDR1=USART2_buffer[USART2_Positone];
	} else {
		USART2_Busy = 0;
	}
}

ISR(USART1_RX_vect) {

	USART2_Vel = UDR1;
	Task_03();

}







