
#define Task_01__GoTo_Next_Step			Task_01_Step += 1
#define Task_01__Task_Stop			Task_01_Step  = 0
#define Task_01__Task_Start			Task_01_Step  = 1


extern unsigned char Task_01_Step ;



void Task_01(void);

