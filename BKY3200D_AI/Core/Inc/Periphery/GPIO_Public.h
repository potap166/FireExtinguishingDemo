

#ifndef  __GPIO_PUBLIC_H
#define  __GPIO_PUBLIC_H


#include <stdint.h>


#define  TX_ENABLE                                                  (uint8_t) 1U
#define  RX_ENABLE                                                   !TX_ENABLE 

  void MX_GPIO_Init      ( void )          ;
   void TX_RX_Enable_Down ( const uint8_t ) ;

#endif