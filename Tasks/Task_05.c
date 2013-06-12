#include "../ROOT.h"
#include <string.h>


unsigned char Task_05_Step		= 0;


void Task_05(void)
{



	switch(Task_05_Step )

	{
			case 0 :
			{

				break;
			}

			//################################################################################

			case 1 :
			{

				Task_02__Task_Start;
				//USART2_Waiting_For_Free ;

				//sprintf(USART2_buffer,"xxxxxxxxxx \n\r");
				//USART2_Transmit();

				Task_05__GoTo_Next_Step	;

				//Task_05__Task_Stop;
				break;

			}
			case 2 :
			{
				if(Task_02_Step  == 0)
				{



				     if(MyVel._long < 800 )
				     {


				    	 UDR0 = 0;

						 USART2_Waiting_For_Free ;
						 sprintf(USART2_buffer,"y");
						 USART2_Transmit();
						 USART2_Waiting_For_Free ;
						 UDR0 = 0x58;
						 //Task_05__Task_Stop;
						 //Task_05__GoTo_Next_Step;
						 //Task_05__Task_Start;
					  }
				     else //if(MyVel._long > 900)
					 {
				    	 UDR0 = 0x18;

				    	 USART2_Waiting_For_Free ;
				    	 sprintf(USART2_buffer," xxxxxxxx %lu\n\r", MyVel._long);
				    	 USART2_Transmit();
				    	 //Task_05__Task_Stop;
				    	 //Task_05__GoTo_Next_Step;

					 }
                   Task_05__Task_Start;

				}


				break;


			}
			case 3 :
			{
				UDR0=0x26;
				Task_02__Task_Start;

				if(MyVel._long > 800)
				{
					UDR0 = 0x00;
					UDR0 = 0x17;
					Task_05__Task_Start;
				}
				//Task_05__Task_Start;

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
