
#include "ROOT.h"
#include <util/delay.h>
#define DD_SERVO_Out			DDRB |=  (1 << 5);


int main(void) {

	DD_SERVO_Out;

	OCR1AH = 0x05;
	OCR1AL = 0xDC;
	ICR1H  = 0xFF;
	ICR1L  = 0xFF;
	TCCR1C =    0;
	TCCR1A = 0x82;
	TCCR1B = 0x1A;



	int xxx=0;

	gamura_init();
	USART_Init();
	USART2_Init();

	 Task_01__Task_Stop;
	 Task_02__Task_Stop;
	 //Task_02__Task_Start;
	 Task_03__Task_Stop;
	 Task_04__Task_Stop;
	 Task_05__Task_Stop;
	 Task_06__Task_Start;
	while (1) {

		Task_02();
		Task_01();
		//Task_04();
		Task_05();
		Task_06();
		//Task_03();
	}
}
