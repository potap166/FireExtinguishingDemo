
#include "Func_for_Polling_Task.h"
#include "Func_for_Polling_Task_Public.h"






/****************************************************************************
  * ��� �������   : Get_Mes_ArrayStructMesFromKL_Polling_Task
  * ��������      : ������� �������   
  * 
  *
  * ���������     :  const uint32_t
  * �������       :  ��� 
  ****************************************************************************/

uint8_t Get_Cnt_ArrayStructMesFromKL_Polling_Task ( void )
{
  return   CntMes  ; 
}
 /** end **/


/****************************************************************************
  * ��� �������   : Get_Mes_ArrayStructMesFromKL_Polling_Task
  * ��������      : ������� �������   
  * 
  *
  * ���������     :  const uint32_t
  * �������       :  ��� 
  ****************************************************************************/

StructMesFromKL_t Get_Mes_ArrayStructMesFromKL_Polling_Task ( const uint8_t Cnt )
{  
  return  ArrayStructMesFromKL [ Cnt ] ; 
}
 /** end **/



/****************************************************************************
  * ��� �������   : Add_Mes_ArrayStructMesFromKL_Polling_Task
  * ��������      : ��������� ������� � ������������� ����� ��� ��  
  * 
  *
  * ���������     :  const StructMesFromKL_t 
  * �������       :  ��� 
  ****************************************************************************/

void Add_Mes_ArrayStructMesFromKL_Polling_Task ( const StructMesFromKL_t StructMesFromKL )
{
  ArrayStructMesFromKL [ CntMes ++ ] = StructMesFromKL ; 
}
 /** end **/




/****************************************************************************
  * ��� �������   : Clear_ArrayStructMesFromKL_Polling_Task
  * ��������      :  ������  ��������� � �����������  �� ��
  * 
  *
  * ���������     :  ���
  * �������       :  ��� 
  ****************************************************************************/

void Clear_ArrayStructMesFromKL_Polling_Task ( void )
{
  Clear_Data ( ( uint8_t *)&ArrayStructMesFromKL ,sizeof ( ArrayStructMesFromKL ) ) ;
  CntMes = 0  ; 
}
 /** end **/




/****************************************************************************
  * ��� �������   : Get_Ptr_Buf_Polling_Task
  * ��������      : 
  * 
  *
  * ���������     :  ���
  * �������       : uint8_t
  ****************************************************************************/

uint8_t * Get_Ptr_Buf_Polling_Task ( void )
{
  return ( uint8_t *)&PollingTaskBuffer ; 
}
 /** end **/



/****************************************************************************
  * ��� �������   : Clear_Ptr_Buf_Polling_Task
  * ��������      :  
  * 
  *
  * ���������     : ���
  * �������       : ���
  ****************************************************************************/

void Clear_Ptr_Buf_Polling_Task ( void )
{
  Clear_Data ( ( uint8_t *)&PollingTaskBuffer ,sizeof ( PollingTaskBuffer ) ) ;
}
 /** end **/



/****************************************************************************
  * ��� �������   : Polling_In_Slave
  * ��������      :  
  * 
  *
  * ���������     :  ���
  * �������       :  ���
  ****************************************************************************/

void Polling_In_Slave (void)
{ 
  Fill_PollingDevStruct_Slave ( ) ;
  
  while (1) 
  {
    while (1)
    {
      Togle_Ring_Direction () ; 
      for ( uint8_t ArrayAdr = 0 ; ArrayAdr < Get_QtyAdr_PollingDevStruct () ; ++ ArrayAdr )
      {
        // ������������� 
        if ( ! Get_CondPollingDev_PollingDevStruct ( ArrayAdr ) . InitOn )
        {
           if ( Init_KL_AI ( Get_AdrPollingDev_PollingDevStruct ( ArrayAdr ) , Get_TypeDev_PollingDevStruct ( ArrayAdr ) ) )
           {
             CondPollingDev_t CondPollingDev  =  Get_CondPollingDev_PollingDevStruct ( ArrayAdr )  ;
             CondPollingDev.InitOn = 1                                                             ;  
             Set_CondPollingDev_PollingDevStruct (ArrayAdr ,  CondPollingDev )                     ;          
           }
        }
        else
        {
          // ���� �����           
          if ( Read_Event_KL_AI (  Get_AdrPollingDev_PollingDevStruct ( ArrayAdr ) ) )
          {
            CondPollingDev_t CondPollingDev  =  Get_CondPollingDev_PollingDevStruct ( ArrayAdr )  ;
            CondPollingDev.Respond = 1                                                            ;  
            Set_CondPollingDev_PollingDevStruct (ArrayAdr ,  CondPollingDev )                     ;
          }
          else 
          {
            CondPollingDev_t CondPollingDev  =  Get_CondPollingDev_PollingDevStruct ( ArrayAdr )  ;
            CondPollingDev.Respond = 0                                                            ;  
            Set_CondPollingDev_PollingDevStruct (ArrayAdr ,  CondPollingDev )                     ; 
          }          
          //Read_Addition_Info_Adr_KL_AI ( Get_AdrPollingDev_PollingDevStruct ( ArrayAdr ) ,0 ) ; 
        }
      }
    }
  }
}
 /** end **/ 


