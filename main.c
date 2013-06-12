
#include "ROOT.h"
#include <util/delay.h>


int main(void) {

	int xxx=0;

	gamura_init();
	USART_Init();
	USART2_Init();

	 Task_01__Task_Stop;
	 Task_02__Task_Stop;
	 //Task_02__Task_Start;
	 Task_03__Task_Stop;
	 Task_04__Task_Stop;
	 Task_05__Task_Start;
	while (1) {

		Task_02();
		Task_01();
		//Task_04();
		Task_05();
		//Task_03();
	}
}
