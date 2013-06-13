#include "../ROOT.h"
#include <string.h>


unsigned char Task_06_Step		= 0;
unsigned short b=0;


void Task_06(void)
{



	switch(Task_06_Step )

	{
			case 0 :
			{

				break;
			}

			//################################################################################

			case 1 :
			{

				switch (Servo_Pos_Step)
				{
					case 1 :
					{
						OCR1A = 600;
						break;
					}
					case 2 :
					{
						OCR1A = 1200;
						break;
					}
					case 3 :
					{
						OCR1A = 2100;
						break;
					}
				}



				OCR1A = 2100;//1430;//540;
				b=0;
				Task_06__GoTo_Next_Step	;

				break;

			}
			case 2 :
			{
				b++;

				if(b  == 60000)
				{

					Task_06__GoTo_Next_Step	;

				}


				break;


			}
			case 3 :
			{

				OCR1A = 600;//1500;
				b=0;
				Task_06__GoTo_Next_Step	;


					break;
			}
			case 4 :
			{
				b++;

				if(b  == 60000)
				{

					Task_06__Task_Start	;

				}


				break;
			}

			/*case 5 :
			{

				Task_03__Task_Stop;
				break;
			}




		}*/
	}





}
