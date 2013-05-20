

#define USART_Waiting_For_Free		while(USART_Busy){};

void USART_Init();
void USART_Transmit();

extern char USART_buffer[128];
extern unsigned char USART_Busy;


