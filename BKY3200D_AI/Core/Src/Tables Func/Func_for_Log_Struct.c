

#include "Func_for_Log_Struct.h"
#include "Func_for_Log_Struct_Public.h"



//osMutexId osMutexForLogTable;
static  RTC_TimeTypeDef   RTC_Time @ "SDRAM_DATA";
static  RTC_DateTypeDef   RTC_Date @ "SDRAM_DATA";
static  TimeDate_t        TimeDate @ "SDRAM_DATA";



//#include "Func_for_Log_Table.h"


//extern void Put_in_Que_Trans_Event_Down (const uint16_t Event)                    ;
//extern void Add_Event_Bufer_Alarms(const uint8_t TypeEvent ,const uint16_t EventNum,const uint8_t Event)  ;
//extern uint8_t Return_Type_Event (const uint8_t type)                             ;              
//extern void Reload_Log (void)                                                     ;
//extern void Set_Changes_Buf_Alarms(void)                                          ;

void Clear_Log_Table (void)                                                       ;

  /****************************************************************************
  * Имя функции   : Get_Event_Type_Log_Struct
  * Описание      :  проверяю существует  такой тип события 
  * 
  *
  * Параметры     : const IDEvent_t
  * Возврат       : FireBooL_t   1 
                    1 -ID существует 
                    0 -нет   
  ****************************************************************************/

FireBooL_t Check_ID_Event_Type_Log_Struct ( const IDEvent_t IDEvent ) 
{ 
   switch ( Get_Event_Type_Log_Struct ( IDEvent ) )
   {
     case TYPE_EVENT_SEVICE :  
     case TYPE_EVENT_NORMA : 
     case TYPE_EVENT_FAULT : 
     case TYPE_EVENT_ALARM :
     case TYPE_EVENT_TIMER :
     case TYPE_EVENT_LUNCH :return True; 
     default :  return False ;
   }
}
  /** end **/
  


  /****************************************************************************
  * Имя функции   : Get_Event_Type_Log_Struct
  * Описание      : по ID  события вернуть тип 
  * 
  *
  * Параметры     : const IDEvent_t
  * Возврат       : TypeEvents_t
  ****************************************************************************/

TypeEvents_t Get_Event_Type_Log_Struct ( const IDEvent_t IDEvent ) 
{ 
  return EventTypeTable [ IDEvent ] ;   
}
  /** end **/




  /****************************************************************************
  * Имя функции   : Get_Event_Descr_Log_Struct
  * Описание      : по ID  события вернуть описание  события 
  * 
  *
  * Параметры     : const IDEvent_t
  * Возврат       : const char *
  ****************************************************************************/

const char * Get_Event_Descr_Log_Struct ( const IDEvent_t IDEvent ) 
{ 
  return TextDescriptionOfEvents [ IDEvent ] ;   
}
  /** end **/




  /****************************************************************************
  * Имя функции   : Clear_Struct_Event_Log_Struct
  * Описание      : очистить структуру с событиями  
  * 
  *
  * Параметры     : нет
  * Возврат       : нет
  ****************************************************************************/

void Clear_Struct_Event_Log_Struct ( void ) 
{ 
  CLEAR_EventLog ; 
}
  /** end **/



 /****************************************************************************
  * Имя функции   : Get_Cursor_Event_Log_Table()
  * Описание      : Вернуть курсор 
  * 
  *
  * Параметры     : нет
  * Возврат       : uint16_t
  ****************************************************************************/

uint16_t Get_Cursor_Event_Log_Table (void)
{
 return EventLog.CurrentStrLogStruct ;
}
/** end **/



 /****************************************************************************
  * Имя функции   : Add_Event_Log_Struct()
  * Описание      : добавить новое событие  
  * 
  *
  * Параметры     : const  EventLogStr_t  * const 
  * Возврат       : osStatus_t
  ****************************************************************************/


void Add_Event_Log_Struct ( const  EventLogStr_t  * const EventLogStr)
{     
  //беру время 
  k_GetTime(&RTC_Time) ; 
  // беру дату 
  k_GetDate(&RTC_Date);                
   // 
  if(EventLog.CurrentStrLogStruct >= QTY_EVETS_IN_LOG)  //если это первая запись 
  {
    EventLog.CurrentStrLogStruct=0 ;
  }               
          if ( EventLogStr-> Cond2Event ) // поле Cond2Event использую для метки , где текушее событие было создано 
            // событие пришло из вне  либо сверху либо снизу 
          {                                                                     
            TimeDate.all = 0 ; 
            TimeDate.Second =RTC_Time.Seconds ;
            TimeDate.Minets =RTC_Time.Minutes ;
           // if(RTC_Time.TimeFormat) ; // доделать  время 
            TimeDate.Hour   =RTC_Time.Hours   ;                   
           //     EventLog.Events[ EventLog.CurrentStrLogStruct].TimeThenEventCame.all= TimeDate.all;                   //время когда пришло событие 
           //    EventLog.Events[ EventLog.CurrentStrLogStruct].Time= StructOfQueElemntEventLog.SrtingEventLog.Time;//время события                 
           //
           // DateVal.all =0 ;
            TimeDate.Day   =  RTC_Date.Date;
            TimeDate.Month =  RTC_Date.Month ;
            TimeDate.Year  =  RTC_Date.Year ; 
           // 
                     
          
            EventLog.Events[EventLog.CurrentStrLogStruct].Cond1Event=0  ;                 //словосостояние пришедшего события 
         
            EventLog.Events[EventLog.CurrentStrLogStruct].Cond2Event  =  EventLogStr->Cond2Event  ;                        
            EventLog.Events[EventLog.CurrentStrLogStruct].Cond1Event|=EVENT_CONDITION_1_EventCameFromBottom ; 
            // EventLog.Events[EventLog.CurrentStrLogStruct].Slovosost1|=EVENT_CONDITION_1_SynFlag ;  //флаг о том что событие не было синхронизированно 
            //                 
            
            EventLog.Events[EventLog.CurrentStrLogStruct].UserId                =   EventLogStr->UserId                  ;
            EventLog.Events[EventLog.CurrentStrLogStruct].IndentificationCode   =   EventLogStr->IndentificationCode     ;    
            EventLog.Events[EventLog.CurrentStrLogStruct].IDEvent               =   EventLogStr->IDEvent               ;       
          
            EventLog.Events[EventLog.CurrentStrLogStruct].Adres                 =   EventLogStr->Adres                   ;                           
            EventLog.Events[EventLog.CurrentStrLogStruct].Zone                  =   EventLogStr->Zone                    ;    
            EventLog.Events[EventLog.CurrentStrLogStruct].Service               =   EventLogStr->Service                 ;                         

             //Put_Mess_in_Sound_Buf(StructOfQueElemntEventLog.SrtingEventLog.Type_Event);                     
         }
        else
         if ( !EventLogStr-> Cond2Event )  // создано на этом БКУ
         {                                                          
           
            TimeDate.all = 0 ; 
            TimeDate.Second =RTC_Time.Seconds ;
            TimeDate.Minets =RTC_Time.Minutes ;
            TimeDate.Hour   =RTC_Time.Hours   ;                   
                                      
            TimeDate.Day   =  RTC_Date.Date;
            TimeDate.Month =  RTC_Date.Month ;
            if ( RTC_Date.Year < 63 )
            {
              TimeDate.Year = RTC_Date.Year;
            }
            else 
            {
              TimeDate.Year = 63;
            }
            //TimeDate.Year  =  RTC_Date.Year                                     ;             
            EventLog.Events[ EventLog.CurrentStrLogStruct].TimeDate.all= TimeDate.all     ;               
            EventLog.Events[EventLog.CurrentStrLogStruct].TimeDateThenEventCame.all=0     ;               
          
                      
            EventLog.Events[EventLog.CurrentStrLogStruct].UserId                =   EventLogStr->UserId                  ;
            // EventLog.Events[EventLog.CurrentStrLogStruct].IndentificationCode   =   EventLogStr.IndentificationCode     ;    
            EventLog.Events[EventLog.CurrentStrLogStruct].IDEvent                =   EventLogStr->IDEvent               ;       
          
            EventLog.Events[EventLog.CurrentStrLogStruct].Adres                 =   EventLogStr->Adres                   ;                           
            EventLog.Events[EventLog.CurrentStrLogStruct].Zone                  =   EventLogStr->Zone                    ;    
            EventLog.Events[EventLog.CurrentStrLogStruct].Service               =   EventLogStr->Service                 ;  
                      
            EventLog.Events[EventLog.CurrentStrLogStruct].IndentificationCode.Adr = /*адрес БКУ*/2     ; 
            EventLog.Events[EventLog.CurrentStrLogStruct].IndentificationCode.Num  =  EventLog.CurrentStrLogStruct ;
            srand ((unsigned int) HAL_GetTick()+ /*адрес БКУ*/2) ;  
            EventLog.Events[EventLog.CurrentStrLogStruct].IndentificationCode.RandomCode = (uint16_t)(((float)(rand ())/RAND_MAX )* 2047)  ;                    
         }
        
          EventLog.CurrentStrLogStruct++ ;
          if ( EventLog.CurrentStrLogStruct >= QTY_EVETS_IN_LOG )  
          {
            EventLog.CurrentStrLogStruct=0 ;
          }
  
}
/** end **/



 /****************************************************************************
  * Имя функции   : Get_Event_Log_Struct()
  * Описание      : вернуть указатель на событие  
  * 
  *
  * Параметры     : нет
  * Возврат       : EventLogStr_t
  ****************************************************************************/

EventLogStr_t *  Get_Event_Log_Struct ( const CurrentStrLogStruct_t  CurrentStrLogStruct )
{
  if ( CurrentStrLogStruct < QTY_EVETS_IN_LOG )
  {
   return ( EventLogStr_t * )&EventLog.Events [ CurrentStrLogStruct ] ; 
  }  
  return ( EventLogStr_t * )NULL ; 
}
/** end **/ 


