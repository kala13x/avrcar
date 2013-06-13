#include "../ROOT.h"
#include <string.h>

#define Servo_L_45					OCR1A = 800
#define Servo_Centre				OCR1A = 1300
#define Servo_R_45					OCR1A = 1800


unsigned char Task_06_Step		= 0;
unsigned short b=0;
unsigned char Servo_Pos_Step     = 0;
unsigned short Servo_Motor_Delay = 0;
unsigned char  Servo_Motor_Dir   = 0;
unsigned char Servo_Pos          = 0;
unsigned long Gamura_Vel[2];


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
					case 0 :
					{
						Servo_L_45;
						Servo_Pos=0;
						break;
					}
					case 1 :
					{
						Servo_Centre;
						Servo_Pos=1;
						break;
					}
					case 2 :
					{
						Servo_R_45;
						Servo_Pos=2;
						break;
					}
				}




				if(Servo_Motor_Dir==0)
				{
					if(Servo_Pos_Step==2)
					{
						Servo_Motor_Dir =1;
						Servo_Pos_Step--;
					}
					else
					{
						Servo_Pos_Step++;
					}
				}
				else
				{

					if(Servo_Pos_Step==0)
					{
						Servo_Motor_Dir =0;
						Servo_Pos_Step++;
					}
					else
					{
						Servo_Pos_Step--;
					}
				}



				Servo_Motor_Delay = 0;

				//OCR1A = 2100;//1430;//540;
				//b=0;
				Task_06__GoTo_Next_Step	;

				break;

			}
			case 2 :
			{
				Servo_Motor_Delay++;

				if(Servo_Motor_Delay == 25000)
				{

					Task_06__GoTo_Next_Step	;

				}


				break;


			}
			case 3 :
			{
				Task_02__Task_Start;


				Task_06__GoTo_Next_Step	;
				break;
			}
			case 4 :
			{
				if(Task_02_Step  == 0)
				{
					Gamura_Vel[Servo_Pos]=MyVel._long;
					Task_06__GoTo_Next_Step	;
				}
				break;
			}

			case 5 :
			{
				USART2_Waiting_For_Free ;
				sprintf(USART2_buffer,"%lu  %lu  %lu\n\r", Gamura_Vel[0], Gamura_Vel[1], Gamura_Vel[2]);
				USART2_Transmit();
				Task_06__Task_Start;

				break;
			}





	}





}
