

#include "ROOT.h"
#include <string.h>






unsigned char Task_01_Step		= 0;



void Task_01(void)
{
	switch(Task_01_Step )
	{
		case 0 :
		{
			break;
		}

		//################################################################################

		case 1 :
		{
			if (USART2_Busy == 0) {
				sprintf(USART2_buffer,"xxxxxxxxxxxxxxxxxxxxx\n\r");
				USART2_Transmit();
				Task_01__Task_Stop;
			}

			break;
		}
		case 2 :
		{


			Task_01__Task_Stop;
			break;
		}
		case 3 :
		{


			Task_01__Task_Stop;
			break;
		}

		case 4 :
		{


			Task_01__Task_Stop;
			break;
		}

		case 5 :
		{

			Task_01__Task_Stop;
			break;
		}




	}
}
