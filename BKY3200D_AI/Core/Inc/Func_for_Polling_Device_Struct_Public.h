#ifndef  __FUNC_FOR_POLLING_DEVICE_STRUCT_PUBLIC_H
#define  __FUNC_FOR_POLLING_DEVICE_STRUCT_PUBLIC_H


 void Fill_PollingDevStruct_Slave                            ( void )  ;
 uint8_t Get_QtyAdr_PollingDevStruct                         ( void )  ;
 CondPollingDev_t Get_CondPollingDev_PollingDevStruct        ( const uint8_t  )  ; 
 uint8_t Get_AdrPollingDev_PollingDevStruct                  ( const uint8_t  )  ; 
 DeviceTypes_t Get_TypeDev_PollingDevStruct                  ( const uint8_t  )  ;  
 void Set_CondPollingDev_PollingDevStruct                   ( const uint8_t , const CondPollingDev_t ); 
 
 
 
 
 
//#define     CondPollingDev_t
 /*
      unsigned  InitOn                    : 1;                              //������ �� ���������� ������������� 1-�� 0-���(���� ����� ��������� ���� ����� ���� ��� ������ ������� �� ������ ����������)
      unsigned  InitTry                   : 1;                              //���� �� ������� ������� ������������� 1-�� 0 ��� 
      unsigned  Direction                  : 1;                             //����������� �������� �� ������    
      unsigned  Respond                  : 1;                             // �������� �� ������� 1 - �� 0-��� 
      
      unsigned  DisableAdr              : 1;                              //���� �� �������� ������� ����������� ��������� 1-�� 0-���
      unsigned  ErrorNoConectDuringWork   : 1;                             //���� ������ 
      unsigned  InitMessege             : 1;                              //������ ��� ��������� ��������� �������� ����� ����� ��������� ������������� ���� ����� ���� ������������ � ��������� ���� ������ � ������ 
      unsigned  ReplyOkSmtWrong          : 1;                             // ����� ���   �� ��������� ������ ��������� ��� ��� ��� �� ������ �������� �������� �� ������� ����������� 
      
      unsigned  MemoryError              : 1;  
      unsigned  ResProgError               : 1;    
      unsigned  FirstReading           : 1;                             //������ ������ �������    
      //������ ������ ��������� 
      unsigned  ExludeFromPolling       : 1;                              //0 �� ������� �� ������ 1 - ��������   
*/
   
 
#endif 
