/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.28                          *
*        Compiled Jan 30 2015, 16:41:06                              *
*        (c) 2015 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END

#include "DIALOG.h"
#include "Func_for_GUI_Public.h"
#include "Modbus_Info.h"

WM_HWIN Create_Framewin_Polling_Device_Parametrs_IO_Menu_in_Slave_Single ( const uint32_t Adres );

//extern WM_HWIN Create_Framewin_Polling_Device_Parametrs_IO_Menu_in_Slave_Single ( uint32_t Adr ) ;
/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_FRAMEWIN_0        (GUI_ID_USER + 0x01)
#define ID_CHECKBOX_0        (GUI_ID_USER + 0x02)
#define ID_BUTTON_0          (GUI_ID_USER + 0x03)
#define ID_EDIT_0            (GUI_ID_USER + 0x04)
#define ID_BUTTON_1          (GUI_ID_USER + 0x05)
#define ID_BUTTON_2          (GUI_ID_USER + 0x06)

// USER START (Optionally insert additional defines)
// USER END
/*********************************************************************
*
*       Static data
*
**********************************************************************
*/
//static FullAdressDev_t AdresGlAI ; 
static uint8_t ThresholdTemOld   ;
// USER START (Optionally insert additional static data)
// USER END
/*********************************************************************
*
*       _aDialogCreate
*/

  
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
{ FRAMEWIN_CreateIndirect, (const char *)&TextString632, ID_FRAMEWIN_0, 216, 50, 328, 300, 0, 0x0, 0 },
{ CHECKBOX_CreateIndirect, NULL,                         ID_CHECKBOX_0, 42,  34, 258, 29,  0, 0x0, 0 },
{ EDIT_CreateIndirect,     NULL,                         ID_EDIT_0,     18,  90, 59,  28,  0, 0x64,0 },
{ BUTTON_CreateIndirect, "�������� ����� ",              ID_BUTTON_0,   95,  87, 211, 37,  0, 0x0, 0 },
{ BUTTON_CreateIndirect ,"���������" ,                   ID_BUTTON_1  , 46, 139, 223, 37,  0, 0x0, 0 },
{ BUTTON_CreateIndirect, (const char *)&TextString242 ,  ID_BUTTON_2  , 46, 191, 223, 37,  0, 0x0, 0 },

  // USER START (Optionally insert additional widgets)
  // USER END

};
static GuiForMB_t GuiForMB ;
/*********************************************************************
*
*       Static code
*
**********************************************************************
*/
// USER START (Optionally insert additional static code)
// USER END
/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;
  int     NCode;
  int     Id;
  // USER START (Optionally insert additional variables)
  // USER END

  
 switch (pMsg->MsgId) 
 {
   case WM_USER_ANSWER_MB :if(GuiForMB.Result && !GuiForMB.Error)
                           {
                                                   
                             if (GuiForMB.CodofFunc == CodOfFuncModbusSingleWrite     )
                             {   
                               Show_Message_Box( (char *)&TextString235,(char *)&PunctuationMark5,(char *)&PunctuationMark5,(char*)TextString234);  // ""   ""                              
                             }                               
                           }
                           else
                           {
                             if( GuiForMB.CodofFunc == CodOfFuncModbusSingleWrite     )
                             {
                            //   Set_ThresholdTemp_KLAI (  AdresGlAI.AdrKL , AdresGlAI.AdrYU , ThresholdTemOld )     ;
                               Show_Message_Box((char *)&TextString332,(char *)&PunctuationMark5,(char *)&PunctuationMark5,(char*)TextString234);  // ""   "" 
                             }
                             else
                             {
                              // Put_in_Que_GUI_MB ((GuiForMB_t *)&GuiForMB) ;      // �������� ��������� ������                              
                             }
                           }
                           break;   
  case WM_INIT_DIALOG:
    //
    // Initialization of '�������������� �� ��'
    //
    hItem = pMsg->hWin;
    FRAMEWIN_SetFont(hItem, &GUI_FontVerdana23);
    FRAMEWIN_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    //
    // Initialization of 'Dropdown'
    //
    hItem = WM_GetDialogItem(pMsg->hWin,ID_CHECKBOX_0);
    CHECKBOX_SetFont(hItem, &GUI_FontVerdana23);
    CHECKBOX_SetText(hItem,(const char *)&TextString616);
  //  switch(Return_Cond_Use_Full_Adr_Dev_t_Total_Info_BKY_KL(AdresGlAI.all))
    {
   //   case ActiveDev_OFF : CHECKBOX_SetState (hItem,0) ; break ;
   //   case ActiveDev_ON  : CHECKBOX_SetState (hItem,1)  ; break ;
    //  default : break  ; 
    } 
    //
    // Initialization of 'Edit'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);
    EDIT_SetFont(hItem, &GUI_FontVerdana23);
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    EDIT_EnableBlink(hItem,150,1);
    EDIT_SetMaxLen(hItem, 2);
    EDIT_SetInsertMode(hItem, 1);
    EDIT_SetDecMode(hItem ,54,54,100,0,GUI_EDIT_NORMAL);
    
    //
    // Initialization of '��������� '
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_0);
    BUTTON_SetFont(hItem, &GUI_FontVerdana18);
    
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_1);
    BUTTON_SetFont(hItem, &GUI_FontVerdana23);
    
       
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_2);
    BUTTON_SetFont(hItem, &GUI_FontVerdana23);
    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
   case WM_KEY:    
                 switch (pMsg->Data.v)
                    {        
                      case GUI_KEY_ENTER_HAND :/* if(WM_GetDialogItem(pMsg.hWin,ID_BUTTON_1)==WM_GetFocussedWindow())                                             
                                               { 
                                                  CreateFramewinMenuDeviceTableofRespondDevCondAdrKLAI (AdresGlAI.all) ;                                                
                                               } 
                                               else
                                               if(WM_GetDialogItem(pMsg.hWin,ID_BUTTON_2)==WM_GetFocussedWindow())                                             
                                               { 
                                                  switch(CHECKBOX_GetState(WM_GetDialogItem(pMsg.hWin,ID_CHECKBOX_0)))  
                                                  {
                                                    case  0  :Change_Activ_Deactiv_Condition_Device_KL(AdresGlAI,ActiveDev_OFF ) ; break ;
                                                    case  1  :Change_Activ_Deactiv_Condition_Device_KL(AdresGlAI,ActiveDev_ON)   ; break ; 
                                                    default : break  ;   
                                                  }
                                                  GUI_EndDialog(pMsg.hWin,1)           ;                                                 
                                               } 
                                               else
                                               if(WM_GetDialogItem(pMsg.hWin,ID_BUTTON_0)==WM_GetFocussedWindow())                                             
                                               {
                                                 if(Get_Master_Slave()==BKY_SLAVE || Get_Master_Slave() == BKY_SLAVE_ONE_IN_SYSTEM )  
                                                 { 
                                                   uint8_t ThresholdTem = EDIT_GetValue(WM_GetDialogItem ( pMsg.hWin,ID_EDIT_0 ) ) ;
                                                   ThresholdTemOld = Get_ThresholdTemp_KLAI(  AdresGlAI.AdrKL , AdresGlAI.AdrYU )   ;
                                                   // Set_ThresholdTemp_For_All_KLAI ( AdresGlAI.AdrKL  , ThresholdTem )            ;
                                                   Set_ThresholdTemp_KLAI (  AdresGlAI.AdrKL , AdresGlAI.AdrYU , ThresholdTem )     ;
                                                   
                                                //   if ( !( AdresGlAI.AdrYU % 2 ) )
                                                //   {// ������
                                                //      GuiForMB.AdresMB   = 0x1388 + ( ( AdresGlAI.AdrYU/2)-1 )  ;
                                                //   }
                                                //   else
                                                //   {// ��������
                                                //      GuiForMB.AdresMB   = 0x1388 + ( AdresGlAI.AdrYU/2 )  ;
                                                //   }
                                                  GuiForMB.AdresMB = Get_Adr_MB_for_Adr_KLAI ( 0x1388 , AdresGlAI.AdrYU )  ;  
                                                   
                                                  // GuiForMB.AdresMB   = 0x1388+(AdresGlAI.AdrYU/2)  ;
                                                   GuiForMB.CodofFunc = COD_OF_FUNC_MB_WRITE_SINGLE_OF_ADR  ;
                                                   // {
                                                   //   uint8_t Val  = ThresholdTem & 0x00ff;
                                                   //   ThresholdTem = ThresholdTem >> 8 ;
                                                   //   ThresholdTem = ThresholdTem | ((Val <<8)&0xff00) ;
                                                   // }
                                                   GuiForMB.Ptr       = Get_Ptr_Adr_ThresholdTemp_KLAI ( AdresGlAI.AdrKL , AdresGlAI.AdrYU )  ;
                                                   GuiForMB.Size      = 2   ;
  
                                                   GuiForMB.Adres     = AdresGlAI.AdrKL                  ;
                                                   GuiForMB.Error     = 0                                ;  
                                                   GuiForMB.htem      = WM_GetClientWindow(pMsg.hWin)   ;
                                                   GuiForMB.Result    = 0                                ; 
                                                   Put_in_Que_GUI_MB ((GuiForMB_t *)&GuiForMB)           ;
                                                   
                                                 }
                                               }
                                               else
                                               if(WM_GetDialogItem(pMsg.hWin,ID_CHECKBOX_0)==WM_GetFocussedWindow())                                             
                                               {
                                                  GUI_StoreKeyMsg (GUI_KEY_SPACE,1)    ; 
                                               }        */                                       
                                               break ;                                                 
                      case GUI_KEY_LEFT_HAND  :if(WM_GetCallback(WM_GetDialogItem(pMsg->hWin, ID_EDIT_0)) == EDIT_Callback)
                                               {
                                                 Edit_Cursor_Move_Action(WM_GetDialogItem(pMsg->hWin, ID_EDIT_0),GUI_KEY_LEFT_HAND) ; 
                                               }                                            
                                               break ;   
                      case GUI_KEY_RIGHT_HAND :if(WM_GetCallback(WM_GetDialogItem(pMsg->hWin, ID_EDIT_0)) == EDIT_Callback)
                                               {
                                                 Edit_Cursor_Move_Action(WM_GetDialogItem(pMsg->hWin, ID_EDIT_0),GUI_KEY_RIGHT_HAND) ; 
                                               }                                                                                                                                                                                                                                                                       
                                               break ;                                                    
                    case GUI_KEY_UP_HAND   :GUI_StoreKeyMsg(GUI_KEY_BACKTAB,1)    ;                                                                                     
                                               break ;                                                                                        
                    case GUI_KEY_DOWN_HAND: GUI_StoreKeyMsg(GUI_KEY_TAB,1)    ;
                                               break ;                           
                    case GUI_KEY_ZERO_HAND:  if(WM_GetDialogItem(pMsg->hWin, ID_EDIT_0)==WM_GetFocussedWindow())   
                                               {       
                                                 Add_Key (WM_GetDialogItem(pMsg->hWin, ID_EDIT_0),0x30) ;
                                               }                                                  
                                               break ;                                                 
                    case GUI_KEY_ONE_HAND  : if(WM_GetDialogItem(pMsg->hWin, ID_EDIT_0)==WM_GetFocussedWindow())   
                                               {       
                                                  Add_Key (WM_GetDialogItem(pMsg->hWin, ID_EDIT_0),0x31) ;
                                               }                                               
                                               break ; 
                    case GUI_KEY_TWO_HAND:   if(WM_GetDialogItem(pMsg->hWin, ID_EDIT_0)==WM_GetFocussedWindow())   
                                               {       
                                                 Add_Key (WM_GetDialogItem(pMsg->hWin, ID_EDIT_0),0x32) ;
                                               }                                              
                                               break ; 
                    case GUI_KEY_THREE_HAND:  if(WM_GetDialogItem(pMsg->hWin, ID_EDIT_0)==WM_GetFocussedWindow())   
                                               {       
                                                 Add_Key (WM_GetDialogItem(pMsg->hWin, ID_EDIT_0),0x33) ;
                                               }                                               
                                               break ;     
                    case GUI_KEY_FOUR_HAND:   if(WM_GetDialogItem(pMsg->hWin, ID_EDIT_0)==WM_GetFocussedWindow())   
                                               {       
                                                 Add_Key (WM_GetDialogItem(pMsg->hWin, ID_EDIT_0),0x34) ;
                                               }                                            
                                               break ;                    
                    case GUI_KEY_FIVE_HAND:  if(WM_GetDialogItem(pMsg->hWin, ID_EDIT_0)==WM_GetFocussedWindow())   
                                               {       
                                                  Add_Key (WM_GetDialogItem(pMsg->hWin, ID_EDIT_0),0x35) ;
                                               }                                                  
                                               break ;                    
                    case GUI_KEY_SIX_HAND:   if(WM_GetDialogItem(pMsg->hWin, ID_EDIT_0)==WM_GetFocussedWindow())   
                                               {       
                                                 Add_Key (WM_GetDialogItem(pMsg->hWin, ID_EDIT_0),0x36) ;
                                               }                                              
                                               break ;                    
                    case GUI_KEY_SEVEN_HAND:   if(WM_GetDialogItem(pMsg->hWin, ID_EDIT_0)==WM_GetFocussedWindow())   
                                               {       
                                                 Add_Key (WM_GetDialogItem(pMsg->hWin, ID_EDIT_0),0x37) ;
                                               }                                                                                            
                                               break ;                    
                    case GUI_KEY_EIGHT_HAND:  if(WM_GetDialogItem(pMsg->hWin, ID_EDIT_0)==WM_GetFocussedWindow())   
                                               {       
                                                 Add_Key (WM_GetDialogItem(pMsg->hWin, ID_EDIT_0),0x38) ;
                                               }                                                
                                               break ;                                            
                     case GUI_KEY_NINE_HAND:  if(WM_GetDialogItem(pMsg->hWin, ID_EDIT_0)==WM_GetFocussedWindow())   
                                               {       
                                                 Add_Key (WM_GetDialogItem(pMsg->hWin, ID_EDIT_0),0x39) ;
                                               }                                                                                                
                                              break ;                          
                      case GUI_KEY_ESCAPE_HAND :GUI_EndDialog(pMsg->hWin,1)           ;
                                               break ;
                      default: break ;                        
                    }
                 break ;  
   case WM_PAINT : 
                   GUI_DrawGradientV  (0, 0, 328, 400, 0xE6E6FA, 0x87CEEB)  ;   
                   GUI_SetColor       (GUI_BLACK)                           ;
                   GUI_SetTextMode    (GUI_TEXTMODE_TRANS)                  ;
                   GUI_SetFont        (&GUI_FontVerdana25)                  ;                 
                   break ;      
   case WM_POST_PAINT:  
                      if(!Cheak_Focus_Windows(WM_GetClientWindow(pMsg->hWin)))
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
    case ID_BUTTON_0: // Notifications sent by '��������� '
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
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
*    
*/
WM_HWIN Create_Framewin_Polling_Device_Parametrs_IO_Menu_in_Slave_Single ( const uint32_t Adres ) 
{
  WM_HWIN hWin; 
  
  if(Check_GUI_RAM())
  {
    //AdresGlAI.all=Adres; 
    hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate),_cbDialog, WM_HBKWIN,0,0);
  }
  return hWin;
}
// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
