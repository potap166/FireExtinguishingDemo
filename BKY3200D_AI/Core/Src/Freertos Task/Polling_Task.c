

void Polling_Task (  void  * argument ) ;






/****************************************************************************
  * ��� �������   : Polling_Task()
  * ��������      : ������ ������ ����������� ���������
  * 
  *
  * ���������     : void  * 
  * �������       : ���
  ****************************************************************************/

void Polling_Task (  void  * argument )
{       
 // Create_Que_Msg_Add_Event_OS () ; 
  //     
   
  while (1) 
  {
   // �������� � ����� ������ ��� ������ ����� , ���� � ������� 
    switch (1) 
    {
      case 0: break ;
      //uint8_t hh =65 ; 
      case 1: Polling_In_Slave () ;  break ;
      case 2: break ;
    default : break ;
    } 
  } 
}
 /** end **/


