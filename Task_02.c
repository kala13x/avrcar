

#include "ROOT.h"
#include <string.h>


unsigned char Task_02_Step		= 0;

//#################################################################################
//#
		#include <util/delay.h>
		#include <avr/interrupt.h>
		#include <avr/sleep.h>

		void gamura(void);

		#define DD_HCRS04_Trig_Out			DDRD |=  (1 << 4);		// Test
		#define DD_HCRS04_Trig_In			DDRD &= ~(1 << 4);		// Test
		#define DD_HCRS04_Echo_Out			DDRD |=  (1 << 5);		// Test
		#define DD_HCRS04_Echo_In			DDRD &= ~(1 << 5);		// Test

		#define HCRS04_Trig_1				PORTD |=  (1 << 4);		// Test
		#define HCRS04_Trig_0				PORTD &= ~(1 << 4);		// Test


		union
		{   unsigned long _long;
			unsigned short _short;
			unsigned char  _char[4];
		} MyVel;


		union
		{
			unsigned long _a1;
			unsigned char  _a4[4];

		} all;
//#
//#################################################################################

void Task_02(void)
{
	switch(Task_02_Step )
	{
		case 0 :
		{
			break;
		}

		//################################################################################

		case 1 :
		{
			/////////////////////////////

			/////////////////////////////
			gamura();

			Task_02__GoTo_Next_Step;

			break;
		}
		case 2 :
		{


			if (USART2_Busy == 0) {
				sprintf(USART2_buffer,"Distance is: %lu\n\r", MyVel._long);
				USART2_Transmit();
				Task_02__Task_Stop;
			}



			break;
		}
		case 3 :
		{


			Task_02__Task_Stop;
			break;
		}

		case 4 :
		{


			Task_02__Task_Stop;
			break;
		}

		case 5 :
		{

			Task_02__Task_Stop;
			break;
		}




	}
}

//#################################################################
void gamura_init(void) {

	DD_HCRS04_Trig_Out;
	DD_HCRS04_Echo_In;

}
void gamura(void) {

		char x1 = 0;
		//########################################
		HCRS04_Trig_1;
		_delay_ms(200);
		HCRS04_Trig_0;
		//########################################

		x1 = PIND & 0b00100000;



			// velodebi ertians
			while(1){
				x1 = PIND & 0b00100000;
				if (x1!=0) break;
			}
			//########################################

			MyVel._long =  0;

			// ertianis xangdzlivobis gansazgvra
			while(1){
				MyVel._long++;
				x1 = PIND & 0b00100000;
				if (x1==0) break;
			}
			//########################################


			//########################################

}
