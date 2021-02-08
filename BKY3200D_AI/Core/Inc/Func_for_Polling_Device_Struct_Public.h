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
      unsigned  InitOn                    : 1;                              //прошло ли устройство инициализацию 1-да 0-нет(либо после включения либо после того как пришла позиция на данное устройство)
      unsigned  InitTry                   : 1;                              //была ли попытка сделать инициализацию 1-да 0 нет 
      unsigned  Direction                  : 1;                             //направление передачи по кольцу    
      unsigned  Respond                  : 1;                             // отвечает на запросы 1 - да 0-нет 
      
      unsigned  DisableAdr              : 1;                              //была ли записана таблица выключенных устройств 1-да 0-нет
      unsigned  ErrorNoConectDuringWork   : 1;                             //если произо 
      unsigned  InitMessege             : 1;                              //данный бит позволяет отследить ситуацию когда после неудачной инициализаций устр связь была востоновлена и сообшение было выдано в журнал 
      unsigned  ReplyOkSmtWrong          : 1;                             // ответ был   но произошла ошибка адресаций рег или что то другое смотрите регистры на которые обращаетесь 
      
      unsigned  MemoryError              : 1;  
      unsigned  ResProgError               : 1;    
      unsigned  FirstReading           : 1;                             //первое чтение событий    
      //сверху старые состояния 
      unsigned  ExludeFromPolling       : 1;                              //0 не ислючён из опроса 1 - исключён   
*/
   
 
#endif 
