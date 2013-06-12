
#include "../ROOT.h"
#include <string.h>


unsigned char Task_03_Step		= 0;

char SAVE;

void Task_03(void)
{
	switch(Task_03_Step )
	{
		case 0 :
		{
				if (USART2_Vel == 'x'){
					Task_03__GoTo_Next_Step;
				}

			break;
		}

		//################################################################################

		case 1 :
		{
				if (USART2_Vel == 'y'){
					Task_03__GoTo_Next_Step;
				}else{
					if(USART2_Vel != 'x'){
						Task_03__Task_Stop;
					}

				}
			break;
		}
		case 2 :
		{
				if (USART2_Vel == '1') {
					Task_03_Step = 3;
				} else if (USART2_Vel == '2') {
					Task_03_Step = 4;
				} else {
					Task_03__Task_Stop;
				}

			break;
		}
		case 3 :
		{

			Task_02__Task_Start;
			Task_03__Task_Stop;
			break;
		}

		case 4 :
		{

			//UDR0 = USART2_Vel;
			SAVE = USART2_Vel;
			Task_04__Task_Start;
			Task_03__Task_Stop;


			//USART2_Waiting_For_Free ;
			//sprintf(USART2_buffer,"yyyyyyyyyyy \n\r");
			//USART2_Transmit();

			break;
		}

		case 5 :
		{
			Task_03__Task_Stop;
			break;
		}


		case 6 :
		{

			Task_03__Task_Stop;
			break;

		}




	}
}
