/* ###################################################################
**     Filename    : main.c
**     Project     : TaskOverload
**     Processor   : MK64FN1M0VLQ12
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-12-26, 18:38, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "Timer.h"
#include "TimerIntLdd1.h"
#include "TU1.h"
#include "FRTOS1.h"
#include "UTIL1.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "PDD_Includes.h"
#include "Init_Config.h"
#include "FRTOS1.h"

extern SemaphoreHandle_t taskSemaphore;

void randomTask(void *params) {
	(void)params;
	while(1) {
		// Does nothing...
	}
}

/* User includes (#include below this line is not maintained by Processor Expert) */
void spawnerTask(void *params) {
	(void) params;
	while (1) {
		if ( FRTOS1_xSemaphoreTake(taskSemaphore, 10000000) == pdPASS) {

			TaskHandle_t xHandle = NULL;
			int heapSize = configMINIMAL_STACK_SIZE;

			if (FRTOS1_xTaskCreate(randomTask, (signed portCHAR *) "Random Task", configMINIMAL_STACK_SIZE,
					(void*) NULL, tskIDLE_PRIORITY, &xHandle ) != pdPASS) {
				// if xTaskCreate returns null it probably means heap space is gone.
				for (;;) {
				};
			}

			configASSERT(xHandle);
		}
	}
}





/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  taskSemaphore = FRTOS1_xSemaphoreCreateBinary();

  if (FRTOS1_xTaskCreate(spawnerTask, (signed portCHAR *) "Spawner Task", configMINIMAL_STACK_SIZE,
	(void*) NULL, tskIDLE_PRIORITY, (xTaskHandle*) NULL ) != pdPASS) {

	for(;;){};
  }

  FRTOS1_vTaskStartScheduler();

  /* Write your code here */
  /* For example: for(;;) { } */

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.4 [05.09]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
