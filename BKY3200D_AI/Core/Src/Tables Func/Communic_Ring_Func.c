

#include "Communic_Ring_Func.h"
#include "Communic_Ring_Func_Public.h"


 /****************************************************************************
  * Имя функции   : Trace_OS_Messege()
  * Описание      : инициализирую порт переключающую направление
  * 
  *
  * Параметры     : нет
  * Возврат       : нет
  ****************************************************************************/


void Init_Port_Ring_Direction (void)
{ 
  GPIO_InitTypeDef GPIO_InitStruct;
  GPIO_InitStruct.Pin = DIRECTION_RING_LEFT_PIN|DIRECTION_RING_RIGHT_PIN ;                                 //направление передачиTX1 по кольцу 
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
 
  HAL_GPIO_Init(GPIOF,&GPIO_InitStruct);
   
  Set_Ring_Direction ( LeftRingDir ) ;
}
/** end **/



 /****************************************************************************
  * Имя функции   : Get_Ring_Direction()
  * Описание      : функция возвращает RingDirection
  * 
  *
  * Параметры     : нет
  * Возврат       : RingDir_t
  ****************************************************************************/

RingDir_t Get_Ring_Direction (void)
{ 
  return RingDirection ;
}
/** end **/


 /****************************************************************************
  * Имя функции   : Get_Last_Working_Direction()
  * Описание      :  устанавливает направление  по кольцу по
  *                  которому последний раз была связь с устройством
  * 
  *
  * Параметры     : const uint8_t 
  * Возврат       : RingDir_t
  ****************************************************************************/

RingDir_t Get_Last_Working_Direction ( const uint8_t num )// num -номер  элемента массива из таблицы опроса 
{ 
 // if ( !num || num >= TOTAL_QTY_ADR_KL_BKY )
 // {
 //   return False ;
 // }
 // if ( num == ERROR_INDEX )
 {
  //    return False ;    
  }
 // if ( AnswerDeviceofRing.LeftDir[num] && AnswerDeviceofRing.RightftDir[num] )
   {
      return  currentDir; 
   }
 // if ( AnswerDeviceofRing.LeftDir[num] )
  {
//    return False ;       
  }
  //else 
  {
//    return True ;     
  }
}
/** end **/


 /****************************************************************************
  * Имя функции   : Return_Direction()
  * Описание      : функция возвращает текушее направление по кольцу 
  * 
  *
  * Параметры     : uint8_t
  * Возврат       : нет
  ****************************************************************************/
/******************************************************************************/
//функция возвращает текушее направление по кольцу 
/******************************************************************************/
uint8_t Return_Direction (void)
{ 
  if(currentDir!=RingDirection)
  {  
   return   RingDirection ;    
  }
 return  currentDir ; 
}
/** end **/



 /****************************************************************************
  * Имя функции   : Trace_OS_Messege()
  * Описание      : меняет направление опроса
  * 
  *
  * Параметры     : нет
  * Возврат       : нет
  ****************************************************************************/


void Togle_Ring_Direction ( void )
{ 
   if(RingDirection == LeftRingDir)
   {
     RingDirection=RightRingDir ;
     RIGHT_DIRECTION_OF_RING ;                
   }
   else 
   {      
     RingDirection=LeftRingDir ;  
     LEFT_DIRECTION_OF_RING ;    
   }   
}
/** end **/



 /****************************************************************************
  * Имя функции   : Set_Ring_Direction()
  * Описание      : устанвливаетобщее направление по кольц
  * 
  *
  * Параметры     :  const RingDir_t
  * Возврат       : нет
  ****************************************************************************/


void Set_Ring_Direction ( const RingDir_t RingDir )
{ 
   if(!RingDir == LeftRingDir)
   {
     RingDirection=RingDir ;  
     LEFT_DIRECTION_OF_RING ;               
   }
   else 
   {      
     RingDirection=RingDir ;
     RIGHT_DIRECTION_OF_RING ;  
   }   
}
/** end **/



 /****************************************************************************
  * Имя функции   : Set_Current_Ring_Direction()
  * Описание      : устанвливает нужное направление по кольцу без изменения RingDirection
  * 
  *
  * Параметры     : uint8_t
  * Возврат       : нет
  ****************************************************************************/

void Set_Current_Ring_Direction(uint8_t RequiredDir)
{ 
   if ( !RequiredDir )
   { 
     LEFT_DIRECTION_OF_RING ;               
   }
   else 
   {      
     RIGHT_DIRECTION_OF_RING ;  
   }   
}
/** end **/