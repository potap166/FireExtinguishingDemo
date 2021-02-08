
#ifndef  __GUITYPEDATA_H
#define  __GUITYPEDATA_H

#include "GUI.h"
#include "DIALOG.h"

typedef struct  
{
  WM_HWIN          htem        ; //куда возвращать
  uint8_t        * Ptr         ; //куда записывать или откуда читать
  uint8_t          Size        ; //сколько записывать или читать в байтах 
  uint16_t         AdresMB     ; //адрес модбаса
  
  uint8_t          Adres       ; //адрес устройства
  uint8_t          CodofFunc   ; //код функций 
  uint8_t          Result      ; //0 - запрос не был обработан 1 - был  
  uint8_t          Error       ; //  не 0 была ошибка 
}
GuiForMB_t;

void Put_in_Que_GUI_MB (GuiForMB_t  * GuiForMBIn) ;

#endif