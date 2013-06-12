#include "../ROOT.h"
#include <string.h>



unsigned char Task_04_Step		= 0;

unsigned short a=0;


void Task_04(void)
{



	switch(Task_04_Step )

	{
			case 0 :
			{

				break;
			}

			//################################################################################

			case 1 :
			{

				a=0;
				Task_04__GoTo_Next_Step	;
				UDR0 = 0;


				//Task_04__Task_Stop;

				break;
			}
			case 2 :
			{

				a++;

				if (a == 500)
				{
					UDR0 = SAVE;
					a=0;
					Task_04__GoTo_Next_Step	;
				}

				break;
			}
			case 3 :
			{
				a++;

				if (a == 30000)
				{
					UDR0 = 0x00;
					Task_04__Task_Stop;
					Task_02__Task_Start;
				}

				break;
			}

			/*case 4 :
			{

				UDR0 = USART2_Vel;
				Task_04__Task_Start;
				Task_03__Task_Stop;
				break;
			}

			case 5 :
			{

				Task_03__Task_Stop;
				break;
			}




		}*/
	}





}


