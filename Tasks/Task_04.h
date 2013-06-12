#define Task_04__GoTo_Next_Step			Task_04_Step += 1
#define Task_04__Task_Stop			Task_04_Step  = 0
#define Task_04__Task_Start			Task_04_Step  = 1


extern unsigned char Task_04_Step ;



void Task_04(void);
