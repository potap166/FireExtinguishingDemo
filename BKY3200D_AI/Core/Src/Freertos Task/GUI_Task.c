#include "cmsis_os.h"
#include "TotalConst.h"   
#include "DIALOG.h"  



 osThreadId_t GUITaskHandle ; 
//GUI_COLOR unfocus= 0x93D5FF;
//GUI_COLOR focus= 0x2B97FF;

GUI_COLOR unfocus= 0xFFD593;
GUI_COLOR focus= 0xFF972B;


//static uint32_t Buff [512] ; 

const osThreadAttr_t GuiTask_attributes = {
  .name = "GuiTask",
  .priority = (osPriority_t) osPriorityLow,
  .stack_size = 512
}; 


static void GUI_Task   (void  * argument)        ;

void GUI_Task_Create(void)                       ;

extern void Start_Screen(void)                   ;
extern void InitMainMenu(void)                   ;
extern void Init_UP_and_Left_String (void)       ;
extern void Block_Set_for_Start(void)            ;





 /****************************************************************************
  * Имя функции   : GUI_Task()
  * Описание      : задача GUI
  * 
  *
  * Параметры     : void  * 
  * Возврат       : нет
  ****************************************************************************/


static void GUI_Task(void  * argument)
{
  GUI_Init();  
 
  #ifndef DEBUG_SYSTEM
    //Start_Screen();
    //GUI_Delay(500);   
  #endif  
   
  FRAMEWIN_SKINFLEX_PROPS pProps3;
  FRAMEWIN_GetSkinFlexProps(&pProps3, 0);
  pProps3.aColorTitle[0] = GUI_WHITE;
  pProps3.aColorTitle[1] = unfocus;
  pProps3.aColorFrame[0] = GUI_WHITE;
  pProps3.aColorFrame[1] = GUI_DARKGREEN;
  pProps3.aColorFrame[2] = unfocus;
  pProps3.Radius = 4;
  FRAMEWIN_SetSkinFlexProps(&pProps3, 0);
	 
  DROPDOWN_SKINFLEX_PROPS pProps;
  DROPDOWN_GetSkinFlexProps(&pProps, DROPDOWN_SKINFLEX_PI_FOCUSSED);
  pProps.aColorUpper[0] = GUI_WHITE;
  pProps.aColorUpper[1] = focus;
  pProps.aColorFrame[0] = GUI_WHITE;
  pProps.aColorFrame[1] = GUI_DARKGREEN;
  pProps.aColorFrame[2] = focus;
  pProps.aColorLower[0] = focus;
  pProps.aColorLower[1] = focus;
  pProps.ColorArrow = 0xB200FF;
  pProps.Radius = 4;
  DROPDOWN_SetSkinFlexProps(&pProps, DROPDOWN_SKINFLEX_PI_FOCUSSED);

  DROPDOWN_GetSkinFlexProps(&pProps, DROPDOWN_SKINFLEX_PI_ENABLED);
  pProps.aColorUpper[0] = GUI_WHITE;
  pProps.aColorUpper[1] = unfocus;
  pProps.aColorFrame[0] = GUI_WHITE;
  pProps.aColorFrame[1] = unfocus;
  pProps.aColorFrame[2] = unfocus;
  pProps.aColorLower[0] = unfocus;
  pProps.aColorLower[1] = unfocus;
  pProps.ColorArrow = 0xB200FF;
  pProps.Radius = 4;
  DROPDOWN_SetSkinFlexProps(&pProps, DROPDOWN_SKINFLEX_PI_ENABLED);

  BUTTON_SKINFLEX_PROPS pProps1;
  BUTTON_GetSkinFlexProps(&pProps1, BUTTON_SKINFLEX_PI_FOCUSSED);
  pProps1.aColorUpper[0] = GUI_WHITE;
  pProps1.aColorUpper[1] = focus;
  pProps1.aColorFrame[0] = GUI_WHITE;
  pProps1.aColorFrame[1] = GUI_DARKGREEN;
  pProps1.aColorFrame[2] = focus;
  pProps1.aColorLower[0] = focus;
  pProps1.aColorLower[1] = focus	;
  pProps1.Radius = 4;
  BUTTON_SetSkinFlexProps(&pProps1, BUTTON_SKINFLEX_PI_FOCUSSED);
	
  BUTTON_GetSkinFlexProps(&pProps1, BUTTON_SKINFLEX_PI_ENABLED);
  pProps1.aColorUpper[0] = GUI_WHITE;
  pProps1.aColorUpper[1] = unfocus;
  pProps1.aColorFrame[0] = GUI_WHITE;
  pProps1.aColorFrame[1] = unfocus;
  pProps1.aColorFrame[2] = unfocus;
  pProps1.aColorLower[0] = unfocus;
  pProps1.aColorLower[1] = unfocus;
  pProps1.Radius = 4;

  BUTTON_SetSkinFlexProps(&pProps1, BUTTON_SKINFLEX_PI_ENABLED);

  CHECKBOX_SKINFLEX_PROPS pProps2;
  CHECKBOX_GetSkinFlexProps(&pProps2, CHECKBOX_SKINFLEX_PI_ENABLED);
  
  pProps2.aColorFrame[0] = GUI_WHITE;
  pProps2.aColorFrame[1] = unfocus;
  pProps2.aColorFrame[2] = unfocus;
  pProps2.aColorInner[1] = unfocus;
  pProps2.aColorInner[0] = GUI_WHITE;
  pProps2.ColorCheck = GUI_BLACK;
  pProps2.ButtonSize = 40;
  CHECKBOX_SetSkinFlexProps(&pProps2, CHECKBOX_SKINFLEX_PI_ENABLED);
  
  
  WIDGET_SetDefaultEffect_None () ; 
 // WIDGET_SetDefaultEffect();
  FRAMEWIN_SetDefaultSkinClassic();
  //FRAMEWIN_SetDefaultBarColor   (0, GUI_GREEN);
  //FRAMEWIN_SetDefaultBarColor   (1, GUI_GREEN);

  /*FRAMEWIN_SKINFLEX_PROPS  pProps ;
  FRAMEWIN_GetSkinFlexProps     (&pProps, 0);
  pProps.aColorTitle[0]=GUI_BLUE ;
  pProps.aColorTitle[1]=GUI_BLUE ;
  pProps.aColorFrame[0]=GUI_BLUE ;
  pProps.aColorFrame[1]=GUI_BLUE ;
  pProps.aColorFrame[2]=GUI_BLUE ;
  pProps.Radius=0 ;
  FRAMEWIN_SetSkinFlexProps     (&pProps, 0);
  FRAMEWIN_SetSkinFlexProps     (&pProps, 1);
      
  BUTTON_SetDefaultSkin(BUTTON_SKIN_FLEX);
  BUTTON_SetDefaultSkinClassic();
  BUTTON_SetFocusColor      (BUTTON_Handle hObj, GUI_COLOR Color);
  BUTTON_SetDefaultFocusColor(GUI_GREEN) ;
  FRAMEWIN_SetDefaultBarColor   (0, GUI_GREEN);
  FRAMEWIN_SetDefaultBarColor   (1, GUI_GREEN);
  FRAMEWIN_SetDefaultBarColor   (2, GUI_GREEN);
  */
  
  //WM_MULTIBUF_Enable(1)                ;

  WM_Activate  ();
  WM_SetCreateFlags ( WM_CF_MEMDEV  ) ; 
  ///Block_Set_for_Start ()               ;
  // Create_Color_Array (POLIGON_BLUE)  ;
  // Init_UP_and_Left_String()            ; 
  InitMainMenu ()                      ; 
  
  //osThreadDef(GUI_task_MB, GUI_Task_MB,osPriorityNormal, 0,512);               //определение задачи для  того что бы обращаться из GUI в модбас 
  //GUITaskForMBHandle = osThreadCreate(osThread(GUI_task_MB),NULL);              //создание задачи    

  
  //osMailQDef(osqueue22,10,GuiForMB_t);
  //osQueueForGui = osMailCreate ( osMailQ(osqueue22), NULL);      
  //osMailGet(osQueueForGui,1); 
  // osStatus_t status;
  // MSGQUEUE_OBJ_t msg;
  //osThreadSetPriority(GUITaskHandle,osPriorityBelowNormal) ;

  while(1)
  {
    GUI_Exec() ;
   // GUI_X_ExecIdle();

  }
}
/** end **/


 /****************************************************************************
  * Имя функции   : GUI_Task_Create()
  * Описание      : создать задачу GUI
  * 
  *
  * Параметры     : нет
  * Возврат       : нет
  ****************************************************************************/


void GUI_Task_Create(void)
{
   GUITaskHandle =  osThreadNew ( GUI_Task , NULL , &GuiTask_attributes );   
}
/** end **/

