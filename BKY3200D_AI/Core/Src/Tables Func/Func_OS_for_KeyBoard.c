
#include "Func_OS_for_KeyBoard.h"
#include "Func_OS_for_KeyBoard_Public.h"



/****************************************************************************
  * Имя функции   : KeyBorad_Task_Create_Keyboard_OS()
  * Описание      : создаю задачу
  * 
  *
  * Параметры     : нет
  * Возврат       : нет
  ****************************************************************************/

void KeyBorad_Task_Create_Keyboard_OS(void)
{
  KeyBoardTaskHandle =  osThreadNew ( Keyboard_Task , NULL , &KeyBoardTask_attributes );
}
   /** end **/
