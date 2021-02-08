
#include "Composite_Data_Types.h"
#include "Total_Tools.h"
#include "Func_OS_for_GUI_MB_Task_Public.h"
#include "Func_OS_for_Modbus_Polling_Task_Public.h"


static uint8_t usartLineBufferForDisplayTask[264] ;                
static GuiForMB_t  GuiForMB ; 
void GUI_Task_MB(void * argument) ; 




 /****************************************************************************
  * »м€ функции   : GUI_Task_MB()
  * ќписание      : создать задачу GUI дл€ получени€ информаций  по модбасу
  * 
  *
  * ѕараметры     : void  * 
  * ¬озврат       : нет
  ****************************************************************************/


void GUI_Task_MB(void  * argument)
{
 Create_Que_Msg_GUI_MB_Task_OS () ; 


 while(1)
 {  
   if ( !Wait_Msq_from_osQueueEventAdd_GUI_MB_Task_OS ( &GuiForMB ) )
   {
     
     GuiForMB.Error   =0    ;
     if ( GuiForMB.Adres && GuiForMB.Adres < 21 )                //провер€ю адрес       
     {
       GuiForMB.Error=0     ;
     }   
     else
     {
       GuiForMB.Error=1     ;
     }
     if(GuiForMB.Size%2)                                                       // провер€ю что бы кол-во байт было чЄтным
     {
       GuiForMB.Error=1     ;
     }
     Clear_Data ((uint8_t *)&usartLineBufferForDisplayTask ,sizeof(usartLineBufferForDisplayTask))  ;
   
     switch (GuiForMB.CodofFunc)
     {
       case CodOfFuncModbusRead            :    break ;                        
       case CodOfFuncModbusSingleWrite     :                                                                 
       case CodOfFuncModbusBurstWrite      :    Clear_Data ((uint8_t *)&usartLineBufferForDisplayTask ,sizeof(usartLineBufferForDisplayTask))  ;
                                                 for(uint8_t i=0;i<GuiForMB.Size;i++)
                                                 {
                                                   usartLineBufferForDisplayTask[i] = *GuiForMB.Ptr++;                                                  
                                                 }
                                                 break ;                
       default : GuiForMB.Error=1 ;break ;
     }
     if(!GuiForMB.Error)
     {    
       TaskRequestModbusPolingMsq_t  TaskRequestModbusPolingMsq ; 
       AnswerModbusPolingMsq_t AnswerModbusPolingMsq ; 
  
       /***********************************************************************/
  
        TaskRequestModbusPolingMsq.Buf           = ( uint8_t * ) usartLineBufferForDisplayTask  ; 
        TaskRequestModbusPolingMsq.Adres         = GuiForMB.Adres                     ;
        TaskRequestModbusPolingMsq.CodOfFunc     = GuiForMB.CodofFunc            ;
        TaskRequestModbusPolingMsq.StartMBadr    = GuiForMB.AdresMB                ;
        TaskRequestModbusPolingMsq.QtyMBReg      = GuiForMB.Size                 ;
        TaskRequestModbusPolingMsq.RingDirection = Get_Ring_Direction ()       ;
    
        Task_Request_Modbus_Polling_Task_OS  ( &TaskRequestModbusPolingMsq , &AnswerModbusPolingMsq  )  ;  
        if ( AnswerModbusPolingMsq.StatusOfSelect != StatusAnswModbusOk )
        {
         //  return False ; 
         } 
       }
       else
       {
         switch (GuiForMB.CodofFunc)
         {
           case CodOfFuncModbusRead       : for(uint8_t i=0;i<GuiForMB.Size;i++)
                                                    {
                                                      *GuiForMB.Ptr=usartLineBufferForDisplayTask[3+i] ;
                                                      GuiForMB.Ptr++ ;
                                                    }
                                                    break ;                         
           case CodOfFuncModbusSingleWrite: break ;                
           case CodOfFuncModbusBurstWrite : break ;                
           default : break ;
         }
       }
       GuiForMB.Result  =1    ;
     }
     if (WM_IsWindow(GuiForMB.htem))
     {
       WM_SendMessageNoPara ( GuiForMB.htem , WM_USER_ANSWER_MB )  ; 
     }   
   }  
 }

/** end **/
