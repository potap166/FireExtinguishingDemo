
#include  "Trace_Tools.h"
#include <stdio.h>


#define OS_TRACE(TaskName,... ) do { \
                 printf("OS: поток %s элемент %s \r\n статус операций: %s \r\n " , TaskName , ##__VA_ARGS__ ); \
                   } while (0);


 /*
#define OS_TRACE(TaskName, ElemName , ...) do { \
                  printf("OS: поток " TaskName "\r\n", ##__VA_ARGS__); \
                   } while (0)
*/                    



 /****************************************************************************
  * Имя функции   : Trace_OS_Messege()
  * Описание      : трассировка событий ос
  * 
  *
  * Параметры     : const osStatus_t  , const char * 
  * Возврат       : нет
  ****************************************************************************/


void Trace_OS_Messege(const osStatus_t osStatus , const char * Elem )
{
  switch (osStatus)
  {
     case  osOK             : break ;
     case osError           : break ;        
     case osErrorTimeout    : OS_TRACE ( osThreadGetName ( osThreadGetId ()) , Elem ,"таймаут")     ;   break ;      
     case osErrorResource   : OS_TRACE ( osThreadGetName ( osThreadGetId ()) , Elem ,"Ресурсы ерор");   break ;           
     case osErrorParameter  : break ;    
     case osErrorNoMemory   : break ;   
     case osErrorISR        : break ; 
     default : break  ;  
  }
}
/** end **/ 
