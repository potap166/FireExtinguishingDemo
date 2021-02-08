

void Polling_Task (  void  * argument ) ;






/****************************************************************************
  * Имя функции   : Polling_Task()
  * Описание      : задача опроса подчиненных устройств
  * 
  *
  * Параметры     : void  * 
  * Возврат       : нет
  ****************************************************************************/

void Polling_Task (  void  * argument )
{       
 // Create_Que_Msg_Add_Event_OS () ; 
  //     
   
  while (1) 
  {
   // проверяю в каком режиме БКУ МАСТЕр слейв , один в системе 
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


