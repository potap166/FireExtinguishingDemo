
#include "Func_for_KeyBoard_Public.h"
#include "Func_for_GUI_Public.h" 


 void Keyboard_Task(void  * argument) ;



/****************************************************************************
  * Имя функции   : Keyboard_Task()
  * Описание      : задача опроса клавиатуры
  * 
  *
  * Параметры     : void  * 
  * Возврат       : нет
  ****************************************************************************/
void  Keyboard_Task ( void  * argument )
{       
  Buttons_t key=0 , LastKey = 0 , Cnt = 0 ; 
  TOTAL_KEYPAD_PORT_INIT ; 
 // uint32_t IdCard ; 
  
  while (1) 
  {   
    key=Key_Pad_Keyboard () ;    
    if(!key)//если ноль нет нажатий на клавиатуре 
    {
      Cnt=0 ;
      LastKey= 0 ; 
      osDelay (10) ; 
      continue ; 
    }
    if ( ( key ) )   
    {   
      if ( LastKey != key )
      {
        LastKey = key ; 
      }
      else
      {
        if ( Cnt < 30 )
        {
          Cnt ++ ;
          osDelay (5) ; 
          continue ;
        }         
      }
      switch  (key)
      {
         case  KEY_AUTO_OFF     : break ;                                 
         case  KEY_LUNCH_STOP   : break ;         
         case  KEY_SOUND_OFF    : break ;
         case  KEY_RESET        : break ;         
         case  KEY_TEST         : break ; 
         case  KEY_DELAY        : break ;
         default :   Send_Button_Msq_to_GUI (key ) ;    
      } 
      osDelay (3) ;
    }
  } 
}
 /** end **/


