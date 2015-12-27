/** ###################################################################
 **     Filename    : LPTMR0_Init.c
 **     Processor   : MK64FN1M0LQ12
 **     Abstract    :
 **          This file implements the LPTMR0 module initialization
 **          according to the Peripheral Initialization settings, and
 **          defines interrupt service routines prototypes.
 **
 **     Contents    :
 **         Int   - void LPTMR0_Init(void);
 **
 **     Copyright : 1997 - 2014 Freescale Semiconductor, Inc.
 **     All Rights Reserved.
 **
 **     Redistribution and use in source and binary forms, with or without modification,
 **     are permitted provided that the following conditions are met:
 **
 **     o Redistributions of source code must retain the above copyright notice, this list
 **       of conditions and the following disclaimer.
 **
 **     o Redistributions in binary form must reproduce the above copyright notice, this
 **       list of conditions and the following disclaimer in the documentation and/or
 **       other materials provided with the distribution.
 **
 **     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 **       contributors may be used to endorse or promote products derived from this
 **       software without specific prior written permission.
 **
 **     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 **     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 **     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 **     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 **     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 **     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 **     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 **     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 **     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 **     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 **
 **     http: www.freescale.com
 **     mail: support@freescale.com
 ** ###################################################################*/

/*!
 * @file LPTMR0_Init.c
 * @brief This file implements the LPTMR0 module initialization according to the
 *        Peripheral Initialization settings, and defines interrupt service
 *        routines prototypes.
 */


/* MODULE LPTMR0_Init. */

#include "LPTMR0_Init.h"
#include "MK64F12.h"
#include "Init_Config.h"

#ifdef __cplusplus
extern "C" {
#endif

void LPTMR0_Init(void) {

  LPTMR0_CSR = 0;

  /* Register 'LPTMR0_CMR' initialization */
  #ifdef LPTMR0_CMR_VALUE
  LPTMR0_CMR = LPTMR0_CMR_VALUE;
  #endif

  /* Register 'LPTMR0_CSR' initialization */
  #ifdef LPTMR0_CSR_VALUE_1
  LPTMR0_CSR = LPTMR0_CSR_VALUE_1;
  #endif

  /* Register 'LPTMR0_PSR' initialization */
  #ifdef LPTMR0_PSR_VALUE
  LPTMR0_PSR = LPTMR0_PSR_VALUE;
  #endif

  /* Register 'LPTMR0_CSR' initialization */
  #if LPTMR0_CSR_MASK_2
    #if LPTMR0_CSR_MASK_2 == 0xFFFFFFFF
  LPTMR0_CSR = LPTMR0_CSR_VALUE_2;
    #elif LPTMR0_CSR_MASK_2 == LPTMR0_CSR_VALUE_2
  LPTMR0_CSR |= LPTMR0_CSR_VALUE_2;
    #elif LPTMR0_CSR_VALUE_2 == 0
  LPTMR0_CSR &= ~LPTMR0_CSR_MASK_2;
    #else
  LPTMR0_CSR = (LPTMR0_CSR & (~LPTMR0_CSR_MASK_2)) | LPTMR0_CSR_VALUE_2;
    #endif
  #elif defined(LPTMR0_CSR_VALUE_2)
  LPTMR0_CSR = LPTMR0_CSR_VALUE_2;
  #endif
}

#ifdef __cplusplus
}
#endif

/* END LPTMR0_Init. */

/** ###################################################################
 **
 **     This file is a part of Processor Expert static initialization
 **     library for Freescale microcontrollers.
 **
 ** ################################################################### */
