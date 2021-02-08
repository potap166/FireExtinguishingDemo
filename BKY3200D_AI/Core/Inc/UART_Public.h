#ifndef  __UART_PUBLIC_H
#define  __UART_PUBLIC_H


 void UARTs_Init(void)  ; 
 void UART_Transmit_IT ( const uint8_t  ,  uint8_t * , const uint16_t   ) ;
 uint16_t  Get_RxXferCount_UART ( const uint8_t NumUart )         ;
#endif 
