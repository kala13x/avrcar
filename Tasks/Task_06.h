
#define Task_06__GoTo_Next_Step			Task_06_Step += 1
#define Task_06__Task_Stop			Task_06_Step  = 0
#define Task_06__Task_Start			Task_06_Step  = 1


extern unsigned char Task_06_Step ;



void Task_06(void);

