

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
  * ��� �������   : Get_Event_Type_Log_Struct
  * ��������      :  �������� ����������  ����� ��� ������� 
  * 
  *
  * ���������     : const IDEvent_t
  * �������       : FireBooL_t   1 
                    1 -ID ���������� 
                    0 -���   
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
  * ��� �������   : Get_Event_Type_Log_Struct
  * ��������      : �� ID  ������� ������� ��� 
  * 
  *
  * ���������     : const IDEvent_t
  * �������       : TypeEvents_t
  ****************************************************************************/

TypeEvents_t Get_Event_Type_Log_Struct ( const IDEvent_t IDEvent ) 
{ 
  return EventTypeTable [ IDEvent ] ;   
}
  /** end **/




  /****************************************************************************
  * ��� �������   : Get_Event_Descr_Log_Struct
  * ��������      : �� ID  ������� ������� ��������  ������� 
  * 
  *
  * ���������     : const IDEvent_t
  * �������       : const char *
  ****************************************************************************/

const char * Get_Event_Descr_Log_Struct ( const IDEvent_t IDEvent ) 
{ 
  return TextDescriptionOfEvents [ IDEvent ] ;   
}
  /** end **/




  /****************************************************************************
  * ��� �������   : Clear_Struct_Event_Log_Struct
  * ��������      : �������� ��������� � ���������  
  * 
  *
  * ���������     : ���
  * �������       : ���
  ****************************************************************************/

void Clear_Struct_Event_Log_Struct ( void ) 
{ 
  CLEAR_EventLog ; 
}
  /** end **/



 /****************************************************************************
  * ��� �������   : Get_Cursor_Event_Log_Table()
  * ��������      : ������� ������ 
  * 
  *
  * ���������     : ���
  * �������       : uint16_t
  ****************************************************************************/

uint16_t Get_Cursor_Event_Log_Table (void)
{
 return EventLog.CurrentStrLogStruct ;
}
/** end **/



 /****************************************************************************
  * ��� �������   : Add_Event_Log_Struct()
  * ��������      : �������� ����� �������  
  * 
  *
  * ���������     : const  EventLogStr_t  * const 
  * �������       : osStatus_t
  ****************************************************************************/


void Add_Event_Log_Struct ( const  EventLogStr_t  * const EventLogStr)
{     
  //���� ����� 
  k_GetTime(&RTC_Time) ; 
  // ���� ���� 
  k_GetDate(&RTC_Date);                
   // 
  if(EventLog.CurrentStrLogStruct >= QTY_EVETS_IN_LOG)  //���� ��� ������ ������ 
  {
    EventLog.CurrentStrLogStruct=0 ;
  }               
          if ( EventLogStr-> Cond2Event ) // ���� Cond2Event ��������� ��� ����� , ��� ������� ������� ���� ������� 
            // ������� ������ �� ���  ���� ������ ���� ����� 
          {                                                                     
            TimeDate.all = 0 ; 
            TimeDate.Second =RTC_Time.Seconds ;
            TimeDate.Minets =RTC_Time.Minutes ;
           // if(RTC_Time.TimeFormat) ; // ��������  ����� 
            TimeDate.Hour   =RTC_Time.Hours   ;                   
           //     EventLog.Events[ EventLog.CurrentStrLogStruct].TimeThenEventCame.all= TimeDate.all;                   //����� ����� ������ ������� 
           //    EventLog.Events[ EventLog.CurrentStrLogStruct].Time= StructOfQueElemntEventLog.SrtingEventLog.Time;//����� �������                 
           //
           // DateVal.all =0 ;
            TimeDate.Day   =  RTC_Date.Date;
            TimeDate.Month =  RTC_Date.Month ;
            TimeDate.Year  =  RTC_Date.Year ; 
           // 
                     
          
            EventLog.Events[EventLog.CurrentStrLogStruct].Cond1Event=0  ;                 //�������������� ���������� ������� 
         
            EventLog.Events[EventLog.CurrentStrLogStruct].Cond2Event  =  EventLogStr->Cond2Event  ;                        
            EventLog.Events[EventLog.CurrentStrLogStruct].Cond1Event|=EVENT_CONDITION_1_EventCameFromBottom ; 
            // EventLog.Events[EventLog.CurrentStrLogStruct].Slovosost1|=EVENT_CONDITION_1_SynFlag ;  //���� � ��� ��� ������� �� ���� ����������������� 
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
         if ( !EventLogStr-> Cond2Event )  // ������� �� ���� ���
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
                      
            EventLog.Events[EventLog.CurrentStrLogStruct].IndentificationCode.Adr = /*����� ���*/2     ; 
            EventLog.Events[EventLog.CurrentStrLogStruct].IndentificationCode.Num  =  EventLog.CurrentStrLogStruct ;
            srand ((unsigned int) HAL_GetTick()+ /*����� ���*/2) ;  
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
  * ��� �������   : Get_Event_Log_Struct()
  * ��������      : ������� ��������� �� �������  
  * 
  *
  * ���������     : ���
  * �������       : EventLogStr_t
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


