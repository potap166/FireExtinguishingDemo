

#ifndef  __FUNC_FOR_INFO_KL_AI_ADR_H
#define  __FUNC_FOR_INFO_KL_AI_ADR_H

#include "stdint.h"
#include "Simple_Data_Types.h"


typedef struct   //структура для хранения и отображения  информаций 1 Адреса АИ
{       
  AdrDevice_t            AdrDevice                    ;            
  uint8_t                Type                         ; //тип МА
  uint8_t                Ver                          ; //версия прошивки
  uint8_t                AnalogVal                    ; //аналоговое значение  темпиратура  задымлённогсть
  uint8_t                FireLabel                    ; //находится ли алрес в пожаре
  uint8_t                OpenLabel                    ; //находится ли алрес во вскрытом состояний
  uint8_t                CondOuts                     ; //состояние ключей МА 0 бит левый 1 бит правый  
  uint8_t                CurrentTableFirstBit         ; //таблица токов первого стартового бита  
  uint8_t                CurrentMediumAnswer          ; //таблица средних токов ответа  
}
InfoStructKLAIAdr_t ;


static InfoStructKLAIAdr_t InfoStructKLAIAdr @"SDRAM_STATIC_VAR" ;

#endif