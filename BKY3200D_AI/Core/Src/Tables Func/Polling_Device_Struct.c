
#include "Func_for_Polling_Device_Struct.h"
#include "Func_for_Polling_Device_Struct_Public.h"



 /****************************************************************************
  * ��� �������   : Fill_PollingDevStruct_Slave()
  * ��������      : ��������  ���������  ������������ ��������� ������� ������ 
  * 
  *
  * ���������     : ��� 
  * �������       : ���
  ****************************************************************************/

 void Fill_PollingDevStruct_Slave ( void )
{
  Clear_Data ((uint8_t *)&PollingDevStruct ,sizeof(PollingDevStruct))  ;  
  // 
  POLL_DEV_STR [0].CondPollingDev.all = 0  ;
  POLL_DEV_STR [0].AdrPollingDev      = 1  ; 
  POLL_DEV_STR [0].TypeDev            = KL_AI_td  ; 
  POLL_DEV_STR [0].IOTempCond         = ( IOTempCond_t * ) pvPortMalloc ( sizeof ( IOTempCond_t ) ) ; 
  for ( uint8_t i = 1  ; i < MAX_QTY_ADR_IO ; ++ i )
  {
    POLL_DEV_STR [0].IOTempCond -> condDev [i] = 0 ; 
  } 
  PollingDevStruct.QtyAdr            = 1  ;  
}
/** end **/


 /****************************************************************************
  * ��� �������   : Waiting_Log_Struct_OS()
  * ��������      : ������� ����� ����� ������������ ���������  
  * 
  *
  * ���������     : ���
  * �������       : uint8_t
  ****************************************************************************/


uint8_t Get_QtyAdr_PollingDevStruct ( void ) 
{ 
  return  PollingDevStruct . QtyAdr   ;  
}
/** end **/


 /****************************************************************************
  * ��� �������   : Waiting_Log_Struct_OS()
  * ��������      :  ������� ���������  
  * 
  *
  * ���������     : const uint8_t
  * �������       : CondPollingDev_t
  ****************************************************************************/

CondPollingDev_t Get_CondPollingDev_PollingDevStruct ( const uint8_t Ind  ) 
{ 
  return   POLL_DEV_STR [ Ind ] . CondPollingDev   ;  
}
/** end **/


 /****************************************************************************
  * ��� �������   : Set_CondPollingDev_PollingDevStruct
  * ��������      : ���������� ��� ���������  
  * 
  *
  * ���������     : const uint8_t  ,  const CondPollingDev_t 
  * �������       : ���
  ****************************************************************************/

void Set_CondPollingDev_PollingDevStruct ( const uint8_t Ind ,  const CondPollingDev_t CondPollingDev  ) 
{ 
  POLL_DEV_STR [ Ind ] . CondPollingDev = CondPollingDev   ;  
}
/** end **/


 /****************************************************************************
  * ��� �������   : Get_AdrPollingDev_PollingDevStruct()
  * ��������      : ������� ����� ����� ������������ ���������  
  * 
  *
  * ���������     : const uint8_t
  * �������       : uint8_t
  ****************************************************************************/

uint8_t Get_AdrPollingDev_PollingDevStruct ( const uint8_t Ind  ) 
{ 
  return  POLL_DEV_STR [ Ind ] . AdrPollingDev  ;  
}
/** end **/


 /****************************************************************************
  * ��� �������   : Get_TypeDev_PollingDevStruct()
  * ��������      :  ������� ��� ����������
  * 
  *
  * ���������     : const uint8_t
  * �������       : DeviceTypes_t
  ****************************************************************************/

DeviceTypes_t Get_TypeDev_PollingDevStruct ( const uint8_t Ind  ) 
{ 
  return  POLL_DEV_STR [ Ind ] . TypeDev  ;  
}
/** end **/

