#ifndef  __TOTAL_TOOLS_H
#define  __TOTAL_TOOLS_H

#include <stdint.h>
#include "Simple_Data_Types.h"

void      Clear_Data ( uint8_t *p ,uint32_t size)  ;
uint16_t  crc_16( uint8_t *ptr,uint8_t len )           ;
uint32_t  Crc32( uint8_t * buf, uint32_t len)          ; 
//uint8_t   Check_TypeTime(TimeDate_t  *Time)              ;
void      Set_R (uint8_t num,uint8_t* pointer)         ; 
void      Clear_R (uint8_t num,uint8_t* pointer)       ;
uint8_t   Compare_Arrays (uint8_t* Ptr1,uint8_t* Ptr2, const uint32_t Lengh)  ;

#endif