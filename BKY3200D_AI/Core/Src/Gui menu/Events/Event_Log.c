#include "Event_Types_Public.h"
#include "Composite_Data_Types.h"
#include "Func_for_GUI_Public.h"
#include "Func_for_Log_Struct_Public.h"
#include "DIALOG.h"


//extern WM_HWIN CreateFramewinEventLogDetailedInfo(const uint16_t EventNum)     ;
//extern WM_HWIN CreateFramewinEventFiltr(void)                                  ;
//extern uint8_t Get_Active_Filtr (void)                                         ;
//extern uint8_t Chek_Event_in_Filtr (const uint16_t NumEvent)                   ;



WM_HWIN CreateFramewinEventLog(void)                                           ;
static void Add_String_Listview(WM_HWIN ListWiew ,uint8_t direct)              ;
static void Filing_Colors ( const WM_HWIN , const uint16_t , const IDEvent_t ) ;
static uint16_t Find_Next_Start_Event (const uint16_t CurEvent,uint8_t Par)    ;         
static uint16_t Find_Prev_Start_Event (const uint16_t CurEvent,uint8_t Par)    ;
//static void  Create_Window_With_Info (WM_HWIN hItem)  ;
void _cbEvetsLogTable(WM_MESSAGE * pMsg) ;







#define ID_FRAMEWIN_0   (GUI_ID_USER + 0x00) 
#define ID_LISTVIEW_0   (GUI_ID_USER + 0x01)
#define ID_TEXT_0       (GUI_ID_USER + 0x02)
#define ID_TIMER_TIMER (GUI_ID_USER + 0x03)

 
/******************************************************************************/
// direct = 0-в начало 1-вниз 2-вверх 3- обновить  
#define DIRECT_START_POS                                             (uint8_t)0U
#define DIRECT_DOWN                                                  (uint8_t)1U
#define DIRECT_UP                                                    (uint8_t)2U
#define DIRECT_REFRESH                                               (uint8_t)3U 
#define DIRECT_PGUP                                                  (uint8_t)4U
#define DIRECT_PGDOWN                                                (uint8_t)5U

#define QTY_STRING_IN_SCREEN                                        (uint8_t)14U

static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { FRAMEWIN_CreateIndirect, (const char *)&TextString295, ID_FRAMEWIN_0, 25, 25, 775, 455, 0, 0x0, 0 },  //"Журнал событий"
  { LISTVIEW_CreateIndirect,  NULL,                        ID_LISTVIEW_0, 0, 0, 775, 377, 0, 0x0, 0 },
  { TEXT_CreateIndirect,     (const char *)TextString580,  ID_TEXT_0,     88, 383, 229, 55, 0, 0x0, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};
  

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg)
{
  WM_HWIN hItem;
  int     NCode;
  int     Id;
  uint32_t Val;
  // USER START (Optionally insert additional variables)
  // USER END
  switch (pMsg->MsgId)
  {
   case WM_TIMER: if( WM_GetTimerId(pMsg->Data.v) == ID_TIMER_TIMER)
                    {
                      if(WM_IsVisible(pMsg->hWin))
                      {   
                        Add_String_Listview( WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0),DIRECT_REFRESH);    
                      }                
                      WM_RestartTimer(pMsg->Data.v, 2000);
                    }  
                    break;        
  case WM_INIT_DIALOG:
    //
    // Initialization of 'Framewin'
    //  
    hItem = pMsg->hWin;
    FRAMEWIN_SetTitleVis(hItem, 1);
    FRAMEWIN_SetTitleHeight(hItem, 37);
    FRAMEWIN_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    FRAMEWIN_SetFont(hItem, &GUI_FontVerdana25);
    //
    // Initialization of 'Listview'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_0);
    TEXT_SetFont(hItem, &GUI_FontVerdana23);
    TEXT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_TOP);
    
    hItem = WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0);
    HEADER_SetBkColor(LISTVIEW_GetHeader(hItem), GUI_RED);
    HEADER_SetFont(LISTVIEW_GetHeader(hItem), &GUI_FontVerdana23);
    LISTVIEW_AddColumn(hItem, 60 , (const char *)&TextString85,GUI_TA_HCENTER);  //"ID"
    LISTVIEW_AddColumn(hItem, 220 ,(const char *)&TextString296,GUI_TA_HCENTER); //"время"
    LISTVIEW_AddColumn(hItem, 60 , (const char *)&TextString77,GUI_TA_HCENTER);  // "зона"             
    LISTVIEW_AddColumn(hItem, 105 ,(const char *)&TextString82,GUI_TA_HCENTER);  //"адрес"
    LISTVIEW_AddColumn(hItem, 180 ,(const char *)&TextString83 ,GUI_TA_HCENTER); //"тип"                       
    LISTVIEW_AddColumn(hItem, 40 , (const char *)&TextString297,GUI_TA_HCENTER); //"см"
    LISTVIEW_AddColumn(hItem, 100,(const char *)&TextString608,GUI_TA_HCENTER);  //"user"
    LISTVIEW_SetGridVis(hItem, 1);
    LISTVIEW_SetAutoScrollV(hItem, 1);
    LISTVIEW_SetRowHeight(hItem, 25);
    LISTVIEW_SetHeaderHeight(hItem, 25);
    LISTVIEW_SetFont(hItem, &GUI_FontVerdana23);
    Add_String_Listview( WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0),DIRECT_START_POS);   

    WM_SetFocus(hItem);
    //WM_CreateTimer(WM_GetClientWindow(pMsg->hWin), ID_TIMER_TIMER,2000,0);  
    //USER START (Optionally insert additional code for further widget initialization)
    //USER END
    break;
    case WM_KEY:switch(pMsg->Data.v)
                     {      
                       
                        case  GUI_KEY_F1_HAND    :  break ;  // CreateFramewinEventFiltr() ;
                        case GUI_KEY_PGUP_HAND   : if(WM_GetFocussedWindow() == WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0)) 
                                                   {                                                                                                                       
                                                      Add_String_Listview( WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0),DIRECT_PGUP);  
                                                   }                                                                                                                
                                                   break  ;  
                        case GUI_KEY_PGDOWN_HAND:  if(WM_GetFocussedWindow() == WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0)) 
                                                   {                                                                                                                       
                                                      Add_String_Listview( WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0),DIRECT_PGDOWN);  
                                                   }                                                               
                                                   break ;
                        case GUI_KEY_UP_HAND :    if(WM_GetFocussedWindow() == WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0)) 
                                                  {      
                                                    if(!LISTVIEW_GetSel( WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0)))
                                                    {                                                                            
                                                      Add_String_Listview( WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0),DIRECT_UP);  
                                                    }
                                                    LISTVIEW_DecSel( WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0)) ;                          
                                                  }                   
                                                  break ;                                        
                        case GUI_KEY_DOWN_HAND:   if(WM_GetFocussedWindow() == WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0)) 
                                                  {     
                                                     Val=LISTVIEW_GetNumRows( WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0)) ; 
                                                     if(LISTVIEW_GetSel( WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0))==--Val)
                                                     {                                                                                 
                                                       Add_String_Listview( WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0),DIRECT_DOWN);   
                                                     }
                                                     LISTVIEW_IncSel( WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0)) ;                                             
                                                  }                   
                                                  break ;                                         
                        case GUI_KEY_ENTER_HAND : if(WM_GetFocussedWindow() == WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0)) 
                                                  {
                                                    if(LISTVIEW_GetNumRows( WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0))>0)
                                                    {
                                                       char buf[5] ;
                                                       LISTVIEW_GetItemText(WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0),0,LISTVIEW_GetSel( WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0)),(char*)&buf,6) ;                  //беру id последнего события 
                                                       uint16_t IDEvent=atoi(buf);  
                                                       if(IDEvent>QTY_EVETS_IN_LOG)
                                                       {
                                                         break ;
                                                       }
                                                   //    CreateFramewinEventLogDetailedInfo (IDEvent) ;
                                                       //Note_as_Read_Event_Log_Table(IDEvent);
                                                     }
                                                   }
                                                   break ;                    
                         case  GUI_KEY_ESCAPE_HAND:GUI_EndDialog(pMsg->hWin,1)  ; break ;       
                        default: break ;
                     }   
                     break ;              
  case WM_PAINT :   
                     {
                       char Buf[8]                                              ;
                       GUI_DrawGradientV(0, 0, 800, 480, 0xFAE6E6, 0xEBCE87)    ; 
                      
                       GUI_SetTextMode(GUI_TM_TRANS);
                       GUI_SetFont(&GUI_FontVerdana25);
                       if (0)
                       {                         
                         GUI_SetColor(GUI_RED);                      
                         GUI_DispStringAt((const char *)&TextString598,200,383) ;   
                       }
                       GUI_SetColor(GUI_BLACK);
                       if ( Get_Cursor_Event_Log_Table() )
                  
                       GUI_DispStringAt("ID посл-го события ",450,383)                   ;   
                       GUI_DispString( Buf  )                                   ;  
                     }  
                      break ;
  case WM_POST_PAINT: if(!Cheak_Focus_Windows(WM_GetClientWindow(pMsg->hWin)))
                      {
                        if(Cheak_Cover_Windows_2(WM_GetClientWindow(pMsg->hWin)) )
                        {
                          WM_SetFocus(pMsg->hWin) ;   
                        }
                      }
                      break ;            
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_LISTVIEW_0: // Notifications sent by 'Listview'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_SEL_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_GOT_FOCUS :     
                Add_String_Listview( WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0),DIRECT_REFRESH);        
               break ;    
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    // USER START (Optionally insert additional code for further Ids)
    // USER END
    }
    break;
  // USER START (Optionally insert additional message handling)
  // USER END
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}
/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       CreateFramewin
*/
WM_HWIN CreateFramewinEventLog ( void )
{
  WM_HWIN hWin;

  if(Check_GUI_RAM())
  {
    hWin = GUI_CreateDialogBox(_aDialogCreate,GUI_COUNTOF(_aDialogCreate),_cbDialog, WM_HBKWIN, 0, 0);
  }
  return hWin;
}
/** end **/ 

  /****************************************************************************
  * Имя функции   : Add_String_Listview
  * Описание      : заполняю таблицу ,direct = 0-в начало 1-вниз 2-вверх 
  *                 3- обновить  
  * 
  *
  * Параметры     : WM_HWIN ,uint8_t 
  * Возврат       : нет
  ****************************************************************************/

static void Add_String_Listview(WM_HWIN ListWiew ,uint8_t direct) 
{
  static uint32_t CurentStartRow=0;
  uint16_t OldSel ;
  char *_aTable[1][7] ;  // количество полей в таблице 
  
  //
  uint32_t QtyRows=LISTVIEW_GetNumRows(ListWiew);
  switch (direct)
  {
      case DIRECT_START_POS :  CurentStartRow=0 ; break ;
      case DIRECT_DOWN      :  CurentStartRow=Find_Next_Start_Event(CurentStartRow,0);
                               break ;                        
      case DIRECT_UP        :  CurentStartRow=Find_Prev_Start_Event(CurentStartRow,0);
                               break ;
     case DIRECT_REFRESH    :  OldSel=LISTVIEW_GetSel(ListWiew); break ;
     case DIRECT_PGDOWN     :  CurentStartRow=Find_Next_Start_Event(CurentStartRow,(QTY_STRING_IN_SCREEN-1));
                               break ;                        
      case DIRECT_PGUP      :  CurentStartRow=Find_Prev_Start_Event(CurentStartRow,(QTY_STRING_IN_SCREEN-1));
                               break ;
     default : break ;                          
  }  
 // стираю все строки 
  if(QtyRows)
  {
    while(QtyRows-->0)
    {
       LISTVIEW_DeleteRow(ListWiew,QtyRows) ;       
    }
  }        
     // очищаю массив с указателями      
   /*
      в Curent_Row хранится ID  первого события  которое будет лежать в первой строке    
   */   
    uint8_t sh =0 ;
    uint32_t CurentRow=CurentStartRow ;
    for (  CurrentStrLogStruct_t i = 0 ; i < QTY_EVETS_IN_LOG ; ++i )//отмеряю 16 строк которые влазят на экран 
    {            
       EventLogStr_t * EventLogStr =  Get_Event_Log_Struct ( CurentRow ) ; 
       if ( !Check_ID_Event_Type_Log_Struct ( EventLogStr->IDEvent) )
       {
          CurentRow++ ;           
          if ( CurentRow >= QTY_EVETS_IN_LOG )
          {
            CurentRow=0 ;
          }
          continue ;
        }        
         //проверяю колличество свобоной памяти  если оно меньше порога прекращаю запись в таблицу           
          if ( GUI_ALLOC_GetNumFreeBytes ( ) < GUI_STEK_MIN_CURENT_VALUE )
          {
             break ;
          }     
          char  Buf[10]         ; 
        
          CLEAR_GuiCharArray    
          //вывожу ID события   0     
          sprintf(Buf,"%u",CurentRow )                   ;
          strcat(GuiCharArray[0], (char*)&Buf)       ;
          _aTable[0][0]= (char*)&GuiCharArray[0];
           Buf[0]=0 ;
                      
          //вывожу времяи дату в одно поле    1      
                       
           /////////////////////////////////////////////////   
          sprintf (Buf ,"%u", EventLogStr -> TimeDate.Day )                         ;
          if ( EventLogStr -> TimeDate.Day < 10 )
          {
             strcat ( GuiCharArray [1] , "0")    ;
          }
          strcat ( GuiCharArray[1] , (char*)&Buf )       ;
          
                    
          ///////////////////////////////////////////////////
          strcat ( GuiCharArray[1] , "." )              ;
          sprintf ( Buf,"%u", EventLogStr -> TimeDate.Month )                        ; 
          if ( EventLogStr -> TimeDate.Month < 10 )
          {
            strcat ( GuiCharArray [1], "0" )    ;
          }
          strcat ( GuiCharArray[1] , (char*)&Buf )       ;
          
          
          //////////////////////////////////////////////////// 
          strcat ( GuiCharArray[1] , "." )              ; 
          uint16_t year = START_YEAR + EventLogStr -> TimeDate.Year ;
          sprintf ( Buf,"%u",year )        ;
          strcat ( GuiCharArray[1] , (char*)&Buf )       ;     
          strcat ( GuiCharArray[1]," " )   ; 
           
          
          ////////////////////////////////////////////////////  
          sprintf ( Buf ,"%u" , EventLogStr -> TimeDate.Hour )  ;
          if ( EventLogStr -> TimeDate.Hour < 10 )
          {
             strcat ( GuiCharArray[1] ,"0" )    ;
          }
          strcat ( GuiCharArray[1] , (char*)&Buf )       ;
          ///////////////////////////////////////////////////////
          
          
          strcat ( GuiCharArray[1] , ":" )              ;
          sprintf( Buf ,"%u" ,  EventLogStr -> TimeDate.Minets )                        ; 
          if ( EventLogStr -> TimeDate.Minets < 10 )
          {
             strcat(GuiCharArray[1],"0")    ;
          } 
          strcat(GuiCharArray[1], (char*)&Buf)               ;    
          ////////////////////////////////////////////////////
          
          
          strcat ( GuiCharArray [1] , ":" )                      ;  
          sprintf ( Buf, "%u" ,EventLogStr -> TimeDate.Second )  ; 
          if ( EventLogStr -> TimeDate.Second < 10 )
          {
             strcat ( GuiCharArray [1] , "0" )                   ;
          }
          strcat ( GuiCharArray [1] , (char*)&Buf )               ; 
                       
          _aTable[0][1]= (char*)&GuiCharArray[1];
          ////////////////////////////////////////////////////////
                             
          //вывожу зону 2
           Buf[0]=0 ;
          if ( ! EventLogStr -> Zone || EventLogStr -> Zone > MAX_QTY_OF_ZONE )  
          {
            strcat(Buf,(char*)&PunctuationMark4)                       ;
          }
          else
          {
            sprintf ( Buf ,"%u" , EventLogStr -> Zone )                ;
          }
        
          strcat ( GuiCharArray [2] , (char*)&Buf )                     ;
          Buf[0]=0 ; 
          _aTable[0][2]= (char*)&GuiCharArray[2]                        ;
          /////////////////////////////////////////////////////////////////////
          
                    
          //вывожу адрес 3
              
      
             sprintf ( Buf ,"%u", EventLogStr->Adres.BKY )     ;
             strcat ( GuiCharArray [3] , (char*)&Buf )         ;
             Buf[0]=0                                          ;              
             strcat ( GuiCharArray [3] , ".")                  ;
             sprintf ( Buf ,"%u" , EventLogStr->Adres.KL )     ;
             strcat ( GuiCharArray [3] , (char*)&Buf )         ;
             Buf[0]=0                                          ;    
             strcat ( GuiCharArray [3], ".")                   ;
             sprintf ( Buf ,"%u", EventLogStr->Adres.Sensor )  ;
             strcat ( GuiCharArray [3] , (char*)&Buf )         ;
            Buf[0]=0 ;   
          _aTable[0][3]= (char*)&GuiCharArray [3];
                  
          //вывожу тип 4
          switch( Get_Event_Type_Log_Struct ( EventLogStr -> IDEvent ) )
          {
            case TYPE_EVENT_NORMA: strcat(GuiCharArray[4], (const char *)&TextString11);  break ;   //"Норма"
            case TYPE_EVENT_FAULT:strcat(GuiCharArray[4], (const char *)&TextString12);  break ;    //"Неисправность"
            case TYPE_EVENT_ALARM: strcat(GuiCharArray[4], (const char *)&TextString13); break;     //"Тревога"
            case TYPE_EVENT_SEVICE: strcat(GuiCharArray[4], (const char *)&TextString15); break;    //"Служебные"
            case TYPE_EVENT_LUNCH: strcat(GuiCharArray[4], (const char *)&TextString298); break;    //"Сработка"
            case TYPE_EVENT_TIMER: strcat(GuiCharArray[4], (const char *)&TextString299)  ; break ; //"Отсчёт"
            default : break  ;
          }   
          _aTable[0][4]= (char*)&GuiCharArray[4]; 
         
          //отметка 5
          if (EventLogStr -> Cond2Event & EVENT_CONDITION_2_HasBeenWached)
          {
             strcat ( GuiCharArray [5] , "X")  ; 
          }
          _aTable[0][5]= (char*)&GuiCharArray[5];                  
          //вывожу пользователя 6
          _aTable[0][6]= (char*)&GuiCharArray[6];                 
          LISTVIEW_AddRow (ListWiew, _aTable[0]) ;
          Filing_Colors( ListWiew , sh , EventLogStr -> IDEvent ) ;         
          CurentRow++ ;           
          if(CurentRow>=QTY_EVETS_IN_LOG)
          {
             CurentRow=0 ;
          }
          sh++ ;
          if(sh>=QTY_STRING_IN_SCREEN)
          {
             break ;
          }        
    } 
    //выбираю куда поставить sel  
    switch (direct)
    {
      case DIRECT_START_POS :  LISTVIEW_SetSel(ListWiew,0) ;
                               break ;
      case DIRECT_DOWN      :  LISTVIEW_SetSel(ListWiew,LISTVIEW_GetNumRows(ListWiew)) ;
                               break ;                        
      case DIRECT_UP        :  LISTVIEW_SetSel(ListWiew,0) ;
                               break ;
      case DIRECT_REFRESH   :  LISTVIEW_SetSel(ListWiew,OldSel) ;      
                               break ;
     
      case DIRECT_PGDOWN    :  LISTVIEW_SetSel(ListWiew,0) ;
                               break ;                        
      case DIRECT_PGUP      :  LISTVIEW_SetSel(ListWiew,0) ;
                               break ;
      default : break ;                          
    }  
    
}
/** end **/


  /****************************************************************************
  * Имя функции   :  Filing_Colors
  * Описание      :   заполняю  цветом строку
  * 
  *
  * Параметры     : const WM_HWIN , const uint16_t , const IDEvent_t 
  * Возврат       : нет
  ****************************************************************************/


static void Filing_Colors ( const WM_HWIN ListWiew, const uint16_t num_Row, const IDEvent_t IDEvent)
{
  uint32_t Color =0 ;
  
   //по типу события  определяю цвет 
    switch ( Get_Event_Type_Log_Struct ( IDEvent ))
    {
      case  TYPE_EVENT_NORMA   : Color = GUI_GREEN   ;break ;  // норма 
      case  TYPE_EVENT_FAULT   : Color = GUI_YELLOW  ;break ;  // неисправность               
      case  TYPE_EVENT_ALARM   : Color = GUI_RED     ;break ;  // тревога                                      
      case  TYPE_EVENT_SEVICE  : Color = GUI_WHITE   ;break ; 
      case  TYPE_EVENT_TIMER   : Color = GUI_GRAY    ;break ;  
      case  TYPE_EVENT_LUNCH   : Color = GUI_MAGENTA ;break ;  
      default : break ;                                                        
    }
    if(Color)
    {
      for(uint8_t i=0 ;i<7;++i)
      {
         LISTVIEW_SetItemBkColor ( ListWiew , i , num_Row , LISTVIEW_CI_UNSEL , Color) ;
      } 
     }
}
/** end **/

  /****************************************************************************
  * Имя функции   :  Find_Next_Start_Event
  * Описание      :  найти следующий стартовый номер  
  * 
  *
  * Параметры     : const uint16_t ,uint8_t  
  * Возврат       : uint16_t
  ****************************************************************************/

static uint16_t Find_Next_Start_Event (const uint16_t CurEvent,uint8_t Par) 
{
 uint16_t j=0,i=CurEvent;
   
  while( j++ <QTY_EVETS_IN_LOG) 
  {
    i++ ;
    if ( i>= QTY_EVETS_IN_LOG )
    {
      i=0 ;
    }

    if(!Par--)
    {
      return i ;
    }
  } 
 return CurEvent ; 
}
/** end **/


  /****************************************************************************
  * Имя функции   :  Find_Prev_Start_Event
  * Описание      :  найти предидущий стартовый номер
  * 
  *
  * Параметры     : const uint16_t ,uint8_t 
  * Возврат       : uint16_t
  ****************************************************************************/


static uint16_t Find_Prev_Start_Event (const uint16_t CurEvent,uint8_t Par)
{
 uint16_t j=0,i=CurEvent;
   
  while(j++<QTY_EVETS_IN_LOG) 
  {  
    if(!i)
    {
      i=(QTY_EVETS_IN_LOG-1) ;
    }
    else
    {
      i--;
    }
    if(!Par--)
    {
      return i ;
    }
  } 
 return CurEvent ; 
}
/** end **/








