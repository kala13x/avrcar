
#define Task_05__GoTo_Next_Step			Task_05_Step += 1
#define Task_05__Task_Stop			Task_05_Step  = 0
#define Task_05__Task_Start			Task_05_Step  = 1


extern unsigned char Task_05_Step ;



void Task_05(void);
