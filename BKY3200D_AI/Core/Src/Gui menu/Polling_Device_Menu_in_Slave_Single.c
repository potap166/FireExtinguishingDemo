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
#include "Func_for_Polling_Device_Struct_Public.h"


extern WM_HWIN Create_Framewin_Polling_Device_Par_KL_Menu_in_Slave_Single ( const AdrDevice_t  ) ; 

static void  Fill  ( WM_HWIN hWin )  ; 
WM_HWIN Create_Framewin_Polling_Device_Menu_in_Slave_Single ( void );
/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_FRAMEWIN_0    (GUI_ID_USER + 0x00)
#define ID_LISTVIEW_0    (GUI_ID_USER + 0x01)


// USER START (Optionally insert additional defines)
// USER END




/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { FRAMEWIN_CreateIndirect,(const char *)&TextString333, ID_FRAMEWIN_0, 25, 25, 775, 455, 0, 0x0, 0 }, // "����������.������� ���������"
  { LISTVIEW_CreateIndirect, NULL, ID_LISTVIEW_0, 0, 0, 775, 377, 0, 0x0, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};
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



  switch (pMsg->MsgId) 
  {
  case WM_INIT_DIALOG:

    hItem = pMsg->hWin;
    FRAMEWIN_SetTitleVis(hItem, 1);
    FRAMEWIN_SetTitleHeight(hItem, 37);
    FRAMEWIN_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    FRAMEWIN_SetFont(hItem, &GUI_FontVerdana25);
    //
    // Initialization of 'Listview'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0);
    HEADER_SetBkColor(LISTVIEW_GetHeader(hItem), GUI_RED);
    HEADER_SetFont(LISTVIEW_GetHeader(hItem), &GUI_FontVerdana23);
    LISTVIEW_AddColumn(hItem, 80,(const char *)&TextString82, GUI_TA_HCENTER | GUI_TA_VCENTER);     // "�����"
    LISTVIEW_AddColumn(hItem, 120,(const char *)& TextString334, GUI_TA_HCENTER | GUI_TA_VCENTER);  //"��� ����."
    LISTVIEW_AddColumn(hItem, 50,(const char *)&TextString318, GUI_TA_HCENTER | GUI_TA_VCENTER);    //"���"
    LISTVIEW_AddColumn(hItem, 110,(const char *)&TextString540, GUI_TA_HCENTER | GUI_TA_VCENTER);   // "�������."
    LISTVIEW_AddColumn(hItem, 140,(const char *)&TextString335, GUI_TA_HCENTER | GUI_TA_VCENTER);   // "��������"
    LISTVIEW_AddColumn(hItem, 275,(const char *)&TextString273, GUI_TA_HCENTER | GUI_TA_VCENTER);   //"��������"
    LISTVIEW_SetGridVis(hItem, 1);
    LISTVIEW_SetAutoScrollV(hItem, 1);
    LISTVIEW_SetRowHeight(hItem, 25);
    LISTVIEW_SetHeaderHeight(hItem, 25);
    LISTVIEW_SetFont(hItem, &GUI_FontVerdana23);
    
    LISTVIEW_SetSel(hItem,0) ;
    break;
    case WM_KEY:    
                 switch (pMsg->Data.v)
                    {        
                      case GUI_KEY_ENTER_HAND: hItem = WM_GetDialogItem ( pMsg -> hWin , ID_LISTVIEW_0 );     
                                               if ( LISTVIEW_GetNumRows ( hItem ) )
                                                {  
                                                  char Buf [3] ;
                                                  AdrDevice_t AdrDevice ; 
                                                  AdrDevice.all=0 ; 
                                                  
                                                  LISTVIEW_GetItemText ( hItem , 0 , LISTVIEW_GetSel ( hItem ) , ( char * ) &Buf , 3 ) ;  
                                              
                                                  AdrDevice.BKY  =  1 ; 
                                                  AdrDevice.KL   =   atoi ( Buf ) ; 
                                                  Create_Framewin_Polling_Device_Par_KL_Menu_in_Slave_Single ( AdrDevice )  ; 
                                                                                       
                                                } 
                                               break ; 
                      case GUI_KEY_UP_HAND:    LISTVIEW_DecSel (WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0));break ;                                                                                        
                      case GUI_KEY_DOWN_HAND:  LISTVIEW_IncSel (WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0));break ; 
                      case GUI_KEY_LEFT_HAND:  break ;   
                      case GUI_KEY_RIGHT_HAND : hItem= WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0);    
                                                                             
                                               break ;                                    
                      case GUI_KEY_F3_HAND:    break ;   
                      case GUI_KEY_F2_HAND  :  break ; 
                      case GUI_KEY_ESCAPE_HAND: GUI_EndDialog(pMsg->hWin,1);                                                     
                                                break ;
                      default : break  ; 
                    }
                 break ;
  case WM_PAINT :// GUI_DrawGradientV(0, 0, 800, 480, 0xFAE6E6, 0xEBCE87);
                 // GUI_Clear() ;
                  GUI_DrawGradientV(0, 0, 755,455, 0xFAE6E6, 0xEBCE87) ; 
                  Print_Button_Row(500,379,1) ; 
                  break ;
  case WM_POST_PAINT:
                     if ( !Cheak_Focus_Windows ( WM_GetClientWindow ( pMsg->hWin ) ) )
                     {
                       if ( Cheak_Cover_Windows_2 ( WM_GetClientWindow ( pMsg->hWin ) ) )
                       {
                          WM_SetFocus ( pMsg->hWin ) ;   
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
                    Fill ( WM_GetDialogItem ( pMsg->hWin , ID_LISTVIEW_0 ) )  ;
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
*       Public code
**********************************************************************
*/
/*********************************************************************
*
*       
*/
WM_HWIN Create_Framewin_Polling_Device_Menu_in_Slave_Single ( void ) 
{
  WM_HWIN hWin;

  if(Check_GUI_RAM())
  {
    hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  }
  return hWin;
}
//
  /****************************************************************************
  * ��� �������   : Fill_Table
  * ��������      : �������� ������� 
  * 
  *
  * ���������     : WM_HWIN 
  * �������       : ���
  ****************************************************************************/
static void  Fill ( WM_HWIN hWin )   
{
 char *_aTable[6] ; 

  uint32_t Sel= LISTVIEW_GetSel(hWin) ;
  uint32_t Qty_Row= LISTVIEW_GetNumRows(hWin) ; 
  
  while ( Qty_Row -- )
  {
    LISTVIEW_DeleteRow ( hWin , Qty_Row ) ;       
  }  
   // Get_QtyAdr_PollingDevStruct () ;
  for ( uint8_t i = 0 ; i <   Get_QtyAdr_PollingDevStruct () ; ++i )
  {
    if ( GUI_ALLOC_GetNumFreeBytes ( ) < GUI_STEK_MIN_CURENT_VALUE )
    {
       break  ; 
    }
       
  CLEAR_GuiCharArray ; 
  //
  sprintf ( GuiCharArray [0] ,"%u" , Get_AdrPollingDev_PollingDevStruct (i) ) ;
  _aTable[0]= ( char * )&GuiCharArray [ 0 ]; 
   //   
   switch ( Get_TypeDev_PollingDevStruct ( i ) )     
   {
     case KL_AI_td :strcpy ( ( char * ) &GuiCharArray [ 1 ] , ( const char * )&TextString631 ); //"�� ��"                    
                    break ;                  
     default : break ; 
   }
   _aTable[1]= (char*)&GuiCharArray[1];    
    
   //
   switch ( Get_CondPollingDev_PollingDevStruct( i ) . ExludeFromPolling )
   {
     case 1  :  strcpy ( ( char * ) &GuiCharArray [ 2 ] , ( const char * )&PunctuationMark6 );  break ;    // " " 
     case 0  :  strcpy ( ( char * ) &GuiCharArray [ 2 ] , ( const char * )&PunctuationMark9 );  break ;    //"X" 
     default : break ;
   }                          
   _aTable[2]= (char*)&GuiCharArray[2]; 
   
   //        
   if( !Get_CondPollingDev_PollingDevStruct( i ) . InitOn )   
   {
     strcpy ((char*) &GuiCharArray[3],(const char *)&TextString338);    //"���"
   }
   else
   {
     strcpy ((char*) &GuiCharArray[3],(const char *)&TextString339);    //"��" 
   }                    
   _aTable[3]= (char*)&GuiCharArray[3]; 
   
   ///
   if ( !Get_CondPollingDev_PollingDevStruct( i ) . Respond )
   {
     strcpy ((char*) &GuiCharArray[4],(const char *)&TextString338);    //"���"
   }
   else
   {
     strcpy ((char*) &GuiCharArray[4],(const char *)&TextString339);    //"��" 
   }          
   _aTable[4]= (char*)&GuiCharArray[4];    
  //����� �������� ���������� �� ������ 
  // FullAdressDev_t AdrFull ;
  // AdrFull.all=0 ;
  // AdrFull.AdrBky = BKY ;
  // AdrFull.AdrKL  = KL  ;
  // AdrFull.AdrYU  = YO  ;
   _aTable[5]= "";       
   LISTVIEW_AddRow ( hWin, _aTable ) ;     
  }
 // Set_Sel_emWin(hWin ,Sel) ;  
}
   /** end **/
/*************************** End of file ****************************/