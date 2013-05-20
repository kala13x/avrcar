
#include "ROOT.h"


int main(void) {

	gamura_init();
	USART_Init();
	USART2_Init();

	 Task_01__Task_Stop;
	 Task_02__Task_Stop;
	 Task_03__Task_Stop;
	while (1) {

		Task_02();
		Task_01();
		//Task_03();
	}
}
