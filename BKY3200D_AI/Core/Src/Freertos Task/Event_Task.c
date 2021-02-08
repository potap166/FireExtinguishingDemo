
#include "main.h"
//#include "TotalConst.h"
#include "Func_for_Log_Struct_Public.h"




static EventLogStr_t       EventLogStr     @ "SDRAM_STATIC_VAR"                  ; 

void Event_Task(void  * argument) ;

 
/****************************************************************************
  * Имя функции   : Event_Task()
  * Описание      : задача опроса обработки событий
  * 
  *
  * Параметры     : void  * 
  * Возврат       : нет
  ****************************************************************************/
 
void Event_Task(void  * argument)
{       
  Create_Que_Msg_Log_Struct_OS () ; 
      
  while (1) 
  {
     if ( !Wait_Msq_from_osQueueEventAdd_Log_Struct_OS ( &EventLogStr ) )
     {    
         Add_Event_Log_Struct( &EventLogStr )   ;   
     }
    osDelay (1000) ; 
  }
}
/** end **/


