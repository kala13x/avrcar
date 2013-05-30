
#include "ROOT.h"
#include <util/delay.h>


int main(void) {

	int xxx=0;

	gamura_init();
	USART_Init();
	USART2_Init();

	 Task_01__Task_Stop;
	 Task_02__Task_Stop;
	 Task_03__Task_Stop;
	/*while (1){
			xxx++;
			USART2_Waiting_For_Free
			sprintf(USART2_buffer,"%d\n\r0123456789ABCDEF 0123456789ABCDEF 0123456789ABCDEF\n\r0123456789ABCDEF 0123456789ABCDEF 0123456789ABCDEF\n\r0123456789ABCDEF 0123456789ABCDEF 0123456789ABCDEF\n\r0123456789ABCDEF 0123456789ABCDEF 0123456789ABCDEF\n\r",xxx);
			USART2_Transmit();
			_delay_ms(1000);
			UDR0='U';
	}*/
	while (1) {

		Task_02();
		Task_01();
		//Task_03();
	}
}
