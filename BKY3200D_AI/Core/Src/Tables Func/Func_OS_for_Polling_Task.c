
#include "Func_OS_for_Polling_Task.h"
#include "Func_OS_for_Polling_Task_Public.h"



 /****************************************************************************
  * ��� �������   : Change_Priority_Polling_Task_OS()
  * ��������      : ������� ��������� � ������ ������ ���������  
  *                 0-������ 1-������� 
  * 
  *
  * ���������     : const uint8_t 
  * �������       : ���
  ****************************************************************************/

void  Change_Priority_Polling_Task_OS  ( const uint8_t Low_Hight )              //0-������ 1-�������
{  
  if(Low_Hight)
  {
    osThreadSetPriority ( PollingTaskHandle , osPriorityRealtime ) ;
  }
  else 
  {
    osThreadSetPriority ( PollingTaskHandle , osPriorityNormal ) ;
  }
}
/** end **/



 /****************************************************************************
  * ��� �������   : Polling_Task_Create_OS()
  * ��������      : ������ ������  
  * 
  *
  * ���������     : ��� 
  * �������       : ���
  ****************************************************************************/

void Polling_Task_Create_OS ( void )
{
  PollingTaskHandle =  osThreadNew ( Polling_Task , NULL , &PollingTask_attributes );
}
/** end **/
