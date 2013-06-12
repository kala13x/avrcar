

#include <avr/io.h>
#include <stdio.h>
#include <stdint.h>
#include "USART.h"
#include "USART_2.h"
#include "Tasks/Task_01.h"
#include "Tasks/Task_02.h"
#include "Tasks/Task_03.h"
#include "Tasks/Task_04.h"
#include "Tasks/Task_05.h"

extern char USART0_Vel;
extern char USART2_Vel;
extern char SAVE;
unsigned long mtvleli;
union
		{   unsigned long _long;
			unsigned short _short;
			unsigned char  _char[4];
		} MyVel;



