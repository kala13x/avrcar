

#define USART2_Waiting_For_Free		while(USART2_Busy){};

void USART2_Init();
void USART2_Transmit();

extern char USART2_buffer[250];
extern unsigned char USART2_Busy;





