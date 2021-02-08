#ifndef  __FUNC_OS_FOR_KEYBOARD_H
#define  __FUNC_OS_FOR_KEYBOARD_H

#include "cmsis_os2.h"
#include "Include_Lib.h"                              



static osThreadId_t        KeyBoardTaskHandle @"SDRAM_STATIC_VAR"                  ;
const osThreadAttr_t       KeyBoardTask_attributes = {
  .name = " KeyBoardTask",
  .priority = (osPriority_t) osPriorityAboveNormal,
  .stack_size = 128 * 2
};

extern  void Keyboard_Task(void  * argument) ;
 

#endif 
