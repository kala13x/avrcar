

#define Task_02__GoTo_Next_Step			Task_02_Step += 1
#define Task_02__Task_Stop			Task_02_Step  = 0
#define Task_02__Task_Start			Task_02_Step  = 1


extern unsigned char Task_02_Step ;



void Task_02(void);


