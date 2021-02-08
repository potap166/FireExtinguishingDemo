
#include  "Trace_Tools.h"
#include <stdio.h>


#define OS_TRACE(TaskName,... ) do { \
                 printf("OS: ����� %s ������� %s \r\n ������ ��������: %s \r\n " , TaskName , ##__VA_ARGS__ ); \
                   } while (0);


 /*
#define OS_TRACE(TaskName, ElemName , ...) do { \
                  printf("OS: ����� " TaskName "\r\n", ##__VA_ARGS__); \
                   } while (0)
*/                    



 /****************************************************************************
  * ��� �������   : Trace_OS_Messege()
  * ��������      : ����������� ������� ��
  * 
  *
  * ���������     : const osStatus_t  , const char * 
  * �������       : ���
  ****************************************************************************/


void Trace_OS_Messege(const osStatus_t osStatus , const char * Elem )
{
  switch (osStatus)
  {
     case  osOK             : break ;
     case osError           : break ;        
     case osErrorTimeout    : OS_TRACE ( osThreadGetName ( osThreadGetId ()) , Elem ,"�������")     ;   break ;      
     case osErrorResource   : OS_TRACE ( osThreadGetName ( osThreadGetId ()) , Elem ,"������� ����");   break ;           
     case osErrorParameter  : break ;    
     case osErrorNoMemory   : break ;   
     case osErrorISR        : break ; 
     default : break  ;  
  }
}
/** end **/ 
