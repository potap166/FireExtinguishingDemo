
#include "Func_for_GUI.h"
#include "Func_for_GUI_Public.h"


static void  Print_Button_Tunung (void)    ;
static const GUI_POINT aPointsRowRight[] = {
{ 11,0 },{27,11 },{ 11,22 },{ 11,17 },{ 0,17 },{ 0,5 },{ 11,5 },
}; 
static const GUI_POINT aPointsRowRight1[] = {
{ 13,4 },{ 23,11 },{ 13,18 },{ 13,15 },{ 2,15 },{ 2,7 },{ 13,7 },
};

static const GUI_POINT aPointsRowLeft[] = {
{ 16,0 },{16,5 },{ 27,5 },{ 27,17 },{ 15,17 },{16,22 },{ 0,11 },
}; 
static const GUI_POINT aPointsRowLeft1[] = {
{ 14,4 },{ 14,7 },{ 25,7 },{ 25,15 },{ 14,15 },{ 14,18 },{ 4,11 },
};

typedef union //структура  командного регистра 
{
 uint32_t   all;
 struct
 {
   unsigned  R     /**/          : 8;                             
   unsigned  G    /**/           : 8;                         
   unsigned  B   /**/            : 8;                                // 
               
 } ;  
}
Color_t;


  /****************************************************************************
  * Имя функции   : Show_Message_Box()
  * Описание      :  вывожу message box
  * 
  *
  * Параметры     :  const char * const , const char * const ,
                     const char * const  ,const char * const )
  * Возврат       : нет
  ****************************************************************************/


void Show_Message_Box(const char * const Str1, const char * const Str2,
                      const char * const Str3 ,const char * const TopStr)   
{
  MessageBox_t MessageBox                                             ;
  
   MessageBox.String1 = Str1                          ;                                              
   MessageBox.String2 = Str2                                          ; 
   MessageBox.String3 = Str3                                          ; 
   MessageBox.TopString = TopStr                                      ;
   CreateFramewinMessageDialog ( ( MessageBox_t const *)&MessageBox ) ; 
}
/** end **/


  /****************************************************************************
  * Имя функции   : Set_Sel_emWin()
  * Описание      :  установить на курсор на нужную строку
  * 
  *
  * Параметры     : const WM_HWIN  , const uint32_t 
  * Возврат       : нет
  ****************************************************************************/


void Set_Sel_emWin ( const WM_HWIN hWin , const uint32_t Sel )
{ 
  uint32_t Sels=Sel;
  uint32_t Qty_Row = LISTVIEW_GetNumRows ( hWin )     ; 
  if ( Qty_Row < Sel )
  {
    if ( ( Sels - Qty_Row ) == 1 )
    {
      Sels = Qty_Row ; 
    }
    else
    {
      Sels =0 ; 
    } 
  }
  LISTVIEW_SetSel ( hWin , Sels )            ;  
}
/** end **/


  /****************************************************************************
  * Имя функции   : Cheak_Cover_Windows_2()
  * Описание      : проверяю накрыто ли окно  
  * 
  *
  * Параметры     : const WM_HWIN 
  * Возврат       : FireBooL_t
  ****************************************************************************/


FireBooL_t  Cheak_Cover_Windows_2 ( const WM_HWIN hWin )
{
  WM_HWIN htem ,hChild;
  FireBooL_t ReturnVal=False ;

  htem = WM_GetFirstChild ( hWin ) ;
  if(htem)
  { 
    WM_CALLBACK *pCb;
    for ( hChild = htem ; hChild ; hChild = WM_GetNextSibling ( htem ) ) 
    {
     pCb = WM_GetCallback ( hChild )  ;
     if ( pCb == FRAMEWIN_Callback )
     {
       htem = hChild ;
       continue ;
     }
     WM_HideWindow ( hChild ) ;
     htem = hChild ;
    }
    if ( WM_IsCompletelyVisible ( hWin ) )
    {
      ReturnVal = True ;
    }
    else
    {
      ReturnVal = False ;
    }
    
    htem = WM_GetFirstChild ( hWin ) ;
    for ( hChild = htem ; hChild ; hChild = WM_GetNextSibling ( htem ) ) 
    {
      WM_ShowWindow ( hChild ) ;
      htem = hChild ;
    }
   return ReturnVal ; 
  }
  else 
  {
     if ( !WM_IsCompletelyVisible ( hWin ) )
      {
        return False ;
      }
  }
 return True ;     
}
/** end **/


  /****************************************************************************
  * Имя функции   : Cheak_Cover_Windows()
  * Описание      : проверяю накрыто ли окно 
  * 
  *
  * Параметры     : const WM_HWIN
  * Возврат       : FireBooL_t
  ****************************************************************************/


FireBooL_t Cheak_Cover_Windows ( const WM_HWIN hWin )
{
  WM_HWIN htem ,hChild;
  uint8_t TempVal ;
  
  htem = WM_GetFirstChild ( hWin ) ;
  
  if ( htem )
  { 
    for ( hChild = htem ; hChild ; hChild = WM_GetNextSibling ( htem ) ) 
    {
      TempVal = WM_IsCompletelyVisible ( hChild ) ;
      if( !TempVal )
      {
        return False ;
      }
     htem = hChild ;
    }
  }
  else 
  {
     if(!WM_IsCompletelyVisible(hWin))
     {
       return False ;
     }
  }
 return True ;     
}
/** end **/


  /****************************************************************************
  * Имя функции   : Cheak_Focus_Windows()
  * Описание      : проверяю стоит ли фокус сейчас на окне  
  * 
  *
  * Параметры     : const WM_HWIN
  * Возврат       : FireBooL_t
  ****************************************************************************/


FireBooL_t Cheak_Focus_Windows ( const WM_HWIN hWin )
{
  WM_HWIN htem ,hChild ,CurFocus;
  
  CurFocus = WM_GetFocussedWindow () ;

  if ( CurFocus == hWin )
  {
    return True ;
  }    
  htem = WM_GetFirstChild(hWin) ;
  if ( htem )
  { 
    for ( hChild = htem ; hChild ; hChild = WM_GetNextSibling ( htem ) ) 
    {
      if ( CurFocus == hChild )
      {
        return True ;
      }
      htem = hChild ;
    }
  }
  else
  {
     return False ; 
  }
 return False ;     
}
/** end **/


  /****************************************************************************
  * Имя функции   : Compare_Values()
  * Описание      : сравниваю значение  с минимумом и максимумом  если  значение больше 
  *                 выставляю максимальное  и наоборот 
  *                 только EDIT_Handle !!!!!!!!!!!!!!!!!!!!!!
  * 
  *
  * Параметры     :  No
  * Возврат       : osStatus_t
  ****************************************************************************/


FireBooL_t Compare_Values ( uint16_t MaxVal , uint16_t MinVal , EDIT_Handle EditWin, WM_HWIN hWinParant )  
{ 
  uint32_t Val , NumChar;
  FireBooL_t way = False; 
  char buf  [10] ; 
  char buf1 [10] ;
 
   Clear_Tabl_Num((uint8_t *)&buf,sizeof(buf)) ;
   NumChar= EDIT_GetNumChars (EditWin) ;
   EDIT_GetText (EditWin,(char*)&buf,(NumChar+1)) ; 
   Val=atoi(buf);
   
   if(Val>MaxVal)
    {      
      Val=MaxVal ;
      way=True   ;         
    }
   else if (Val<MinVal)
    {
      Val=MinVal ; 
      way=True   ; 
    }
   if (way)
   {      
      strcat( buf1,"MIN-");     
      sprintf(buf,"%u",MinVal )     ;
      strcat( buf1,(char*)&buf);    
      strcat( buf1,"  MAX-");  
      sprintf(buf,"%u",MaxVal )     ; 
      strcat( buf1,(char*)&buf);          
      Show_Message_Box((char *)&TextString522,(char*)&buf1,(char *)&PunctuationMark5,(char *)&TextString391)  ;     //"некорректное значение"    ""      "Ошибка"
      sprintf(buf,"%u",Val )     ;
      EDIT_SetText(EditWin,buf) ; 
   }    
  return  way ; 
}
/** end **/


  /****************************************************************************
  * Имя функции   : Add_Key()
  * Описание      :  добавить кнопку
  * 
  *
  * Параметры     : const WM_HWIN  , const uint8_t 
  * Возврат       : нет
  ****************************************************************************/


void  Add_Key ( const WM_HWIN hWin , const uint8_t Key )  
{ 
    EDIT_AddKey(hWin , Key) ; 
}
/** end **/


  /****************************************************************************
  * Имя функции   : Check_GUI_RAM()
  * Описание      : проверяю необходимое наличие  видео памяти  
  * 
  *
  * Параметры     : нет
  * Возврат       : FireBooL_t
  ****************************************************************************/


FireBooL_t Check_GUI_RAM (void)  
{ 
  if(GUI_ALLOC_GetNumFreeBytes() < GUI_STEK_MIN_CURENT_VALUE)
  {
    Show_Message_Box((char *)&TextString523,(char *)&TextString524,NULL,(char *)&TextString525)  ; //"Недостаточно"   "Видео памяти"     "ошибка системы"
    return False ;
  } 
  else
  {
    return True ;
  }
}
/** end **/


  /****************************************************************************
  * Имя функции   : List_Take_Val()
  * Описание      : прнинимаю значение  
  * 
  *
  * Параметры     : const LISTVIEW_Handle ,const uint8_t 
  * Возврат       : uint32_t
  ****************************************************************************/


uint32_t  List_Take_Val (const LISTVIEW_Handle hObj ,const uint8_t NumField )   
{
  char  buf[6] ;  

   Clear_Tabl_Num((uint8_t *)&buf,sizeof(buf)) ;  
   LISTVIEW_GetItemText(hObj,NumField, LISTVIEW_GetSel(hObj),(char*)&buf,sizeof (buf)) ;
   return atoi(buf) ; 
}
/** end **/


  /****************************************************************************
  * Имя функции   : Return_Bit_Number()
  * Описание      : возвращает кол-во разрядов 
  * 
  *
  * Параметры     : const uint16_t
  * Возврат       : uint8_t
  ****************************************************************************/


uint8_t Return_Bit_Number (const uint16_t val)
{
  if(val<10)
  {
    return 1 ;      
  }
  else 
  if(val<100)
  {
    return 2 ;      
  }
  else
  if(val<1000)
  {
    return 3 ;    
  } 
  else 
   if(val<10000)
   {
     return 4 ;
   }
  else
  if(val>9999)
   {
    return 5 ;
   }
  return 1;
}
/** end **/ 


  /****************************************************************************
  * Имя функции   : Send_Broadcast_Messege()
  * Описание      : посылает сообшение во все открытые окна
  * 
  *
  * Параметры     : const uint32_t
  * Возврат       : нет
  ****************************************************************************/


void Send_Broadcast_Messege  (const uint32_t Messg)
{
 static WM_MESSAGE  pMsg ;
  
    pMsg.Data.v= 0        ;
    pMsg.hWin=0           ;
    pMsg.hWinSrc=0        ;
    pMsg.MsgId =Messg     ; 
    
    WM_BroadcastMessage(&pMsg) ;  
}
/** end **/


  /****************************************************************************
  * Имя функции   : Edit_Cursor_Move_Action()
  * Описание        учитывает положение курсора в  EDIT  направление перемешени 
  *                 и выполняет  действия 
  * 
  *
  * Параметры     : const WM_HWIN  , const uint32_t 
  * Возврат       : нет
  ****************************************************************************/


void Edit_Cursor_Move_Action  ( const WM_HWIN Edit , const uint32_t Action )
{
  if(WM_GetCallback(Edit) == EDIT_Callback)
  {
    switch(Action)
    {
      case GUI_KEY_LEFT_HAND  :  if(!EDIT_GetCursorCharPos(Edit))
                                 {
                                   GUI_StoreKeyMsg(GUI_KEY_BACKTAB,1) ;
                                   EDIT_SetCursorAtChar(Edit,0)       ;
                                 }
                                 else                                
                                 {
                                   GUI_StoreKeyMsg(GUI_KEY_LEFT,1)    ;
                                 }
                                 break ;
      case GUI_KEY_RIGHT_HAND :  if((EDIT_GetCursorCharPos (Edit)+1) == EDIT_GetNumChars (Edit))
                                 {
                                   GUI_StoreKeyMsg(GUI_KEY_TAB,1)     ;
                                   EDIT_SetCursorAtChar(Edit,0)       ;
                                 }
                                 else
                                 {
                                   GUI_StoreKeyMsg(GUI_KEY_RIGHT,1)   ;
                                 }
        break ;
      default: break ;
    }   
  } 
}
/** end **/


  /****************************************************************************
  * Имя функции   : Print_Button_Tunung()
  * Описание      : настраивает печать 
  * 
  *
  * Параметры     : нет
  * Возврат       : нет
  ****************************************************************************/


static void  Print_Button_Tunung (void)
{
  GUI_SetColor(GUI_BLACK);
  GUI_SetTextMode(GUI_TEXTMODE_TRANS);
 // GUI_SetFont(&GUI_FontVerdana25);
}
/** end **/


  /****************************************************************************
  * Имя функции   : Print_Button_F()
  * Описание      : печатает F     1-f1 2-f2 3-f3
  * 
  *
  * Параметры     : const uint32_t  , const uint32_t , const uint8_t 
  * Возврат       : нет
  ****************************************************************************/


void  Print_Button_F (const uint32_t x , const uint32_t y, const uint8_t Val)
{
  Print_Button_Tunung() ;  
                
  GUI_DrawGradientRoundedV(x, y, x+45, y+30, 4, 0x4F4F2F, 0x000000); 
  GUI_DrawGradientRoundedV(x+2, y+2, x+43, y+28, 4, 0x696969, 0xA9A9A9);
  switch(Val)
  {
    case 1 : GUI_DispStringAt ("F1", x+10, y+3); break ;
    case 2 : GUI_DispStringAt ("F2", x+10, y+3); break ;
    case 3 : GUI_DispStringAt ("F3", x+10, y+3); break ; 
    default: break ;
  }
}
/** end **/



  /****************************************************************************
  * Имя функции   : Print_Button_Row()
  * Описание      : печатает стрелку  0 - влево 1 -вправо 
  *
  *
  * Параметры     : const uint32_t  , const uint32_t , const uint8_t 
  * Возврат       : нет
  ****************************************************************************/


void  Print_Button_Row (const uint32_t x , const uint32_t y, const uint8_t Val) 
{ 
  GUI_SetDrawMode(GUI_DM_NORMAL);
  GUI_SetColor(GUI_BLACK);
  GUI_DrawGradientRoundedV(x,   y,   x+45, y+30, 4, 0x4F4F2F, 0x000000); 
  GUI_DrawGradientRoundedV(x+2, y+2, x+43, y+28, 4, 0x696969, 0xA9A9A9);
  if(!Val)
  {
    GUI_FillPolygon(aPointsRowLeft , GUI_COUNTOF(aPointsRowLeft),  x+10, y+4);
    GUI_SetColor(0xA9A9A9);
    GUI_FillPolygon(aPointsRowLeft1, GUI_COUNTOF(aPointsRowLeft1), x+10, y+4);
    Print_Button_Tunung () ;
    GUI_DispStringAt ((const char *)&TextString617, x+60, y);
  }
  else
  {
    GUI_FillPolygon(aPointsRowRight , GUI_COUNTOF(aPointsRowRight),  x+10, y+4);
    GUI_SetColor(0xA9A9A9);
    GUI_FillPolygon(aPointsRowRight1, GUI_COUNTOF(aPointsRowRight1), x+10, y+4);
    Print_Button_Tunung () ;
    GUI_DispStringAt ((const char *)&TextString618, x+60, y); 
  }
}
/** end **/


  /****************************************************************************
  * Имя функции   : Send_Button_Msq_to_GUI()
  * Описание      : поочерёдное включение рядов  
  * 
  *
  * Параметры     : const Buttons_t
  * Возврат       : нет
  ****************************************************************************/



void  Send_Button_Msq_to_GUI ( const Buttons_t  Key )
{
   WM_MESSAGE  pMsg ;
  
    pMsg.Data.v=0       ;
    pMsg.hWin=0         ;
    pMsg.hWinSrc=0      ;
    pMsg.MsgId =WM_KEY  ; 
 
       switch  (Key)
       {
          case  KEY_F1           : pMsg.Data.v= GUI_KEY_F1_HAND    ;  break ; 
          case  KEY_F2           : pMsg.Data.v= GUI_KEY_F2_HAND    ;  break ;    
          case  KEY_F3           : pMsg.Data.v= GUI_KEY_F3_HAND    ;  break ; 
          case  KEY_UP           : pMsg.Data.v=GUI_KEY_UP_HAND     ;  break ;
          case  KEY_DOWN         : pMsg.Data.v=GUI_KEY_DOWN_HAND   ;  break ;
          case  KEY_LEFT         : pMsg.Data.v=GUI_KEY_LEFT_HAND   ;  break ; 
          case  KEY_RIGHT        : pMsg.Data.v=GUI_KEY_RIGHT_HAND  ;  break ;
          case  KEY_1            : pMsg.Data.v=GUI_KEY_ONE_HAND    ;  break ;                            
          case  KEY_2            : pMsg.Data.v=GUI_KEY_TWO_HAND    ;  break ;
          case  KEY_3            : pMsg.Data.v=GUI_KEY_THREE_HAND  ;  break ;
          case  KEY_4            : pMsg.Data.v=GUI_KEY_FOUR_HAND   ;  break ;
          case  KEY_5            : pMsg.Data.v=GUI_KEY_FIVE_HAND   ;  break ;
          case  KEY_6            : pMsg.Data.v=GUI_KEY_SIX_HAND    ;  break ;
          case  KEY_7            : pMsg.Data.v=GUI_KEY_SEVEN_HAND  ;  break ;
          case  KEY_8            : pMsg.Data.v=GUI_KEY_EIGHT_HAND  ;  break ;
          case  KEY_9            : pMsg.Data.v=GUI_KEY_NINE_HAND   ;  break ;
          case  KEY_0            : pMsg.Data.v=GUI_KEY_ZERO_HAND   ;  break ;
          case  KEY_PAGE_UP      : pMsg.Data.v=GUI_KEY_PGUP_HAND   ; break ;  
          case  KEY_PAGEDOWN     : pMsg.Data.v=GUI_KEY_PGDOWN_HAND ; break ;                                    
          case  KEY_ENTER        : pMsg.Data.v=GUI_KEY_ENTER_HAND  ; break ;
          case  KEY_CANCELLATION : pMsg.Data.v=GUI_KEY_ESCAPE_HAND ; break ;             
          default : return  ;
       }
    
        int gg1 =  WM_GetFocussedWindow ( ) ; 
        int gg =  WM_GetParent ( WM_GetFocussedWindow ( )) ;
       
           WM_SendMessage ( WM_GetParent ( WM_GetFocussedWindow ( ) ) , &pMsg ) ;        
        // }
       gg++ ;
        gg1++ ;
       
}
/** end **/
