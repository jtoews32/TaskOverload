/** ###################################################################
 **     Filename    : MPU_Init.c
 **     Processor   : MK64FN1M0LQ12
 **     Abstract    :
 **          This file implements the MPU module initialization
 **          according to the Peripheral Initialization settings, and
 **          defines interrupt service routines prototypes.
 **
 **     Contents    :
 **         Int   - void MPU_Init(void);
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
 * @file MPU_Init.c
 * @brief This file implements the MPU module initialization according to the
 *        Peripheral Initialization settings, and defines interrupt service
 *        routines prototypes.
 */


/* MODULE MPU_Init. */

#include "MPU_Init.h"
#include "MK64F12.h"
#include "Init_Config.h"

#ifdef __cplusplus
extern "C" {
#endif

void MPU_Init(void) {

  MPU_CESR &= ~0x1;
  #ifdef MPU_RGD0_WORD0_VALUE
  MPU_RGD0_WORD0 = MPU_RGD0_WORD0_VALUE;
  #endif
  #ifdef MPU_RGD1_WORD0_VALUE
  MPU_RGD1_WORD0 = MPU_RGD1_WORD0_VALUE;
  #endif
  #ifdef MPU_RGD2_WORD0_VALUE
  MPU_RGD2_WORD0 = MPU_RGD2_WORD0_VALUE;
  #endif
  #ifdef MPU_RGD3_WORD0_VALUE
  MPU_RGD3_WORD0 = MPU_RGD3_WORD0_VALUE;
  #endif
  #ifdef MPU_RGD4_WORD0_VALUE
  MPU_RGD4_WORD0 = MPU_RGD4_WORD0_VALUE;
  #endif
  #ifdef MPU_RGD5_WORD0_VALUE
  MPU_RGD5_WORD0 = MPU_RGD5_WORD0_VALUE;
  #endif
  #ifdef MPU_RGD6_WORD0_VALUE
  MPU_RGD6_WORD0 = MPU_RGD6_WORD0_VALUE;
  #endif
  #ifdef MPU_RGD7_WORD0_VALUE
  MPU_RGD7_WORD0 = MPU_RGD7_WORD0_VALUE;
  #endif
  #ifdef MPU_RGD8_WORD0_VALUE
  MPU_RGD8_WORD0 = MPU_RGD8_WORD0_VALUE;
  #endif
  #ifdef MPU_RGD9_WORD0_VALUE
  MPU_RGD9_WORD0 = MPU_RGD9_WORD0_VALUE;
  #endif
  #ifdef MPU_RGD10_WORD0_VALUE
  MPU_RGD10_WORD0 = MPU_RGD10_WORD0_VALUE;
  #endif
  #ifdef MPU_RGD11_WORD0_VALUE
  MPU_RGD11_WORD0 = MPU_RGD11_WORD0_VALUE;
  #endif
  #ifdef MPU_RGD0_WORD1_VALUE
  MPU_RGD0_WORD1 = MPU_RGD0_WORD1_VALUE;
  #endif
  #ifdef MPU_RGD1_WORD1_VALUE
  MPU_RGD1_WORD1 = MPU_RGD1_WORD1_VALUE;
  #endif
  #ifdef MPU_RGD2_WORD1_VALUE
  MPU_RGD2_WORD1 = MPU_RGD2_WORD1_VALUE;
  #endif
  #ifdef MPU_RGD3_WORD1_VALUE
  MPU_RGD3_WORD1 = MPU_RGD3_WORD1_VALUE;
  #endif
  #ifdef MPU_RGD4_WORD1_VALUE
  MPU_RGD4_WORD1 = MPU_RGD4_WORD1_VALUE;
  #endif
  #ifdef MPU_RGD5_WORD1_VALUE
  MPU_RGD5_WORD1 = MPU_RGD5_WORD1_VALUE;
  #endif
  #ifdef MPU_RGD6_WORD1_VALUE
  MPU_RGD6_WORD1 = MPU_RGD6_WORD1_VALUE;
  #endif
  #ifdef MPU_RGD7_WORD1_VALUE
  MPU_RGD7_WORD1 = MPU_RGD7_WORD1_VALUE;
  #endif
  #ifdef MPU_RGD8_WORD1_VALUE
  MPU_RGD8_WORD1 = MPU_RGD8_WORD1_VALUE;
  #endif
  #ifdef MPU_RGD9_WORD1_VALUE
  MPU_RGD9_WORD1 = MPU_RGD9_WORD1_VALUE;
  #endif
  #ifdef MPU_RGD10_WORD1_VALUE
  MPU_RGD10_WORD1 = MPU_RGD10_WORD1_VALUE;
  #endif
  #ifdef MPU_RGD11_WORD1_VALUE
  MPU_RGD11_WORD1 = MPU_RGD11_WORD1_VALUE;
  #endif

  /* Register 'MPU_RGDAAC0' initialization */
  #if MPU_RGDAAC0_MASK
    #if MPU_RGDAAC0_MASK == 0xFFFFFFFF
  MPU_RGDAAC0 = MPU_RGDAAC0_VALUE;
    #elif MPU_RGDAAC0_MASK == MPU_RGDAAC0_VALUE
  MPU_RGDAAC0 |= MPU_RGDAAC0_VALUE;
    #elif MPU_RGDAAC0_VALUE == 0
  MPU_RGDAAC0 &= ~MPU_RGDAAC0_MASK;
    #else
  MPU_RGDAAC0 = (MPU_RGDAAC0 & (~MPU_RGDAAC0_MASK)) | MPU_RGDAAC0_VALUE;
    #endif
  #elif defined(MPU_RGDAAC0_VALUE)
  MPU_RGDAAC0 = MPU_RGDAAC0_VALUE;
  #endif

  /* Register 'MPU_RGD1_WORD2' initialization */
  #if MPU_RGD1_WORD2_MASK
    #if MPU_RGD1_WORD2_MASK == 0xFFFFFFFF
  MPU_RGD1_WORD2 = MPU_RGD1_WORD2_VALUE;
    #elif MPU_RGD1_WORD2_MASK == MPU_RGD1_WORD2_VALUE
  MPU_RGD1_WORD2 |= MPU_RGD1_WORD2_VALUE;
    #elif MPU_RGD1_WORD2_VALUE == 0
  MPU_RGD1_WORD2 &= ~MPU_RGD1_WORD2_MASK;
    #else
  MPU_RGD1_WORD2 = (MPU_RGD1_WORD2 & (~MPU_RGD1_WORD2_MASK)) | MPU_RGD1_WORD2_VALUE;
    #endif
  #elif defined(MPU_RGD1_WORD2_VALUE)
  MPU_RGD1_WORD2 = MPU_RGD1_WORD2_VALUE;
  #endif

  /* Register 'MPU_RGD2_WORD2' initialization */
  #if MPU_RGD2_WORD2_MASK
    #if MPU_RGD2_WORD2_MASK == 0xFFFFFFFF
  MPU_RGD2_WORD2 = MPU_RGD2_WORD2_VALUE;
    #elif MPU_RGD2_WORD2_MASK == MPU_RGD2_WORD2_VALUE
  MPU_RGD2_WORD2 |= MPU_RGD2_WORD2_VALUE;
    #elif MPU_RGD2_WORD2_VALUE == 0
  MPU_RGD2_WORD2 &= ~MPU_RGD2_WORD2_MASK;
    #else
  MPU_RGD2_WORD2 = (MPU_RGD2_WORD2 & (~MPU_RGD2_WORD2_MASK)) | MPU_RGD2_WORD2_VALUE;
    #endif
  #elif defined(MPU_RGD2_WORD2_VALUE)
  MPU_RGD2_WORD2 = MPU_RGD2_WORD2_VALUE;
  #endif

  /* Register 'MPU_RGD3_WORD2' initialization */
  #if MPU_RGD3_WORD2_MASK
    #if MPU_RGD3_WORD2_MASK == 0xFFFFFFFF
  MPU_RGD3_WORD2 = MPU_RGD3_WORD2_VALUE;
    #elif MPU_RGD3_WORD2_MASK == MPU_RGD3_WORD2_VALUE
  MPU_RGD3_WORD2 |= MPU_RGD3_WORD2_VALUE;
    #elif MPU_RGD3_WORD2_VALUE == 0
  MPU_RGD3_WORD2 &= ~MPU_RGD3_WORD2_MASK;
    #else
  MPU_RGD3_WORD2 = (MPU_RGD3_WORD2 & (~MPU_RGD3_WORD2_MASK)) | MPU_RGD3_WORD2_VALUE;
    #endif
  #elif defined(MPU_RGD3_WORD2_VALUE)
  MPU_RGD3_WORD2 = MPU_RGD3_WORD2_VALUE;
  #endif

  /* Register 'MPU_RGD4_WORD2' initialization */
  #if MPU_RGD4_WORD2_MASK
    #if MPU_RGD4_WORD2_MASK == 0xFFFFFFFF
  MPU_RGD4_WORD2 = MPU_RGD4_WORD2_VALUE;
    #elif MPU_RGD4_WORD2_MASK == MPU_RGD4_WORD2_VALUE
  MPU_RGD4_WORD2 |= MPU_RGD4_WORD2_VALUE;
    #elif MPU_RGD4_WORD2_VALUE == 0
  MPU_RGD4_WORD2 &= ~MPU_RGD4_WORD2_MASK;
    #else
  MPU_RGD4_WORD2 = (MPU_RGD4_WORD2 & (~MPU_RGD4_WORD2_MASK)) | MPU_RGD4_WORD2_VALUE;
    #endif
  #elif defined(MPU_RGD4_WORD2_VALUE)
  MPU_RGD4_WORD2 = MPU_RGD4_WORD2_VALUE;
  #endif

  /* Register 'MPU_RGD5_WORD2' initialization */
  #if MPU_RGD5_WORD2_MASK
    #if MPU_RGD5_WORD2_MASK == 0xFFFFFFFF
  MPU_RGD5_WORD2 = MPU_RGD5_WORD2_VALUE;
    #elif MPU_RGD5_WORD2_MASK == MPU_RGD5_WORD2_VALUE
  MPU_RGD5_WORD2 |= MPU_RGD5_WORD2_VALUE;
    #elif MPU_RGD5_WORD2_VALUE == 0
  MPU_RGD5_WORD2 &= ~MPU_RGD5_WORD2_MASK;
    #else
  MPU_RGD5_WORD2 = (MPU_RGD5_WORD2 & (~MPU_RGD5_WORD2_MASK)) | MPU_RGD5_WORD2_VALUE;
    #endif
  #elif defined(MPU_RGD5_WORD2_VALUE)
  MPU_RGD5_WORD2 = MPU_RGD5_WORD2_VALUE;
  #endif

  /* Register 'MPU_RGD6_WORD2' initialization */
  #if MPU_RGD6_WORD2_MASK
    #if MPU_RGD6_WORD2_MASK == 0xFFFFFFFF
  MPU_RGD6_WORD2 = MPU_RGD6_WORD2_VALUE;
    #elif MPU_RGD6_WORD2_MASK == MPU_RGD6_WORD2_VALUE
  MPU_RGD6_WORD2 |= MPU_RGD6_WORD2_VALUE;
    #elif MPU_RGD6_WORD2_VALUE == 0
  MPU_RGD6_WORD2 &= ~MPU_RGD6_WORD2_MASK;
    #else
  MPU_RGD6_WORD2 = (MPU_RGD6_WORD2 & (~MPU_RGD6_WORD2_MASK)) | MPU_RGD6_WORD2_VALUE;
    #endif
  #elif defined(MPU_RGD6_WORD2_VALUE)
  MPU_RGD6_WORD2 = MPU_RGD6_WORD2_VALUE;
  #endif

  /* Register 'MPU_RGD7_WORD2' initialization */
  #if MPU_RGD7_WORD2_MASK
    #if MPU_RGD7_WORD2_MASK == 0xFFFFFFFF
  MPU_RGD7_WORD2 = MPU_RGD7_WORD2_VALUE;
    #elif MPU_RGD7_WORD2_MASK == MPU_RGD7_WORD2_VALUE
  MPU_RGD7_WORD2 |= MPU_RGD7_WORD2_VALUE;
    #elif MPU_RGD7_WORD2_VALUE == 0
  MPU_RGD7_WORD2 &= ~MPU_RGD7_WORD2_MASK;
    #else
  MPU_RGD7_WORD2 = (MPU_RGD7_WORD2 & (~MPU_RGD7_WORD2_MASK)) | MPU_RGD7_WORD2_VALUE;
    #endif
  #elif defined(MPU_RGD7_WORD2_VALUE)
  MPU_RGD7_WORD2 = MPU_RGD7_WORD2_VALUE;
  #endif

  /* Register 'MPU_RGD8_WORD2' initialization */
  #if MPU_RGD8_WORD2_MASK
    #if MPU_RGD8_WORD2_MASK == 0xFFFFFFFF
  MPU_RGD8_WORD2 = MPU_RGD8_WORD2_VALUE;
    #elif MPU_RGD8_WORD2_MASK == MPU_RGD8_WORD2_VALUE
  MPU_RGD8_WORD2 |= MPU_RGD8_WORD2_VALUE;
    #elif MPU_RGD8_WORD2_VALUE == 0
  MPU_RGD8_WORD2 &= ~MPU_RGD8_WORD2_MASK;
    #else
  MPU_RGD8_WORD2 = (MPU_RGD8_WORD2 & (~MPU_RGD8_WORD2_MASK)) | MPU_RGD8_WORD2_VALUE;
    #endif
  #elif defined(MPU_RGD8_WORD2_VALUE)
  MPU_RGD8_WORD2 = MPU_RGD8_WORD2_VALUE;
  #endif

  /* Register 'MPU_RGD9_WORD2' initialization */
  #if MPU_RGD9_WORD2_MASK
    #if MPU_RGD9_WORD2_MASK == 0xFFFFFFFF
  MPU_RGD9_WORD2 = MPU_RGD9_WORD2_VALUE;
    #elif MPU_RGD9_WORD2_MASK == MPU_RGD9_WORD2_VALUE
  MPU_RGD9_WORD2 |= MPU_RGD9_WORD2_VALUE;
    #elif MPU_RGD9_WORD2_VALUE == 0
  MPU_RGD9_WORD2 &= ~MPU_RGD9_WORD2_MASK;
    #else
  MPU_RGD9_WORD2 = (MPU_RGD9_WORD2 & (~MPU_RGD9_WORD2_MASK)) | MPU_RGD9_WORD2_VALUE;
    #endif
  #elif defined(MPU_RGD9_WORD2_VALUE)
  MPU_RGD9_WORD2 = MPU_RGD9_WORD2_VALUE;
  #endif

  /* Register 'MPU_RGD10_WORD2' initialization */
  #if MPU_RGD10_WORD2_MASK
    #if MPU_RGD10_WORD2_MASK == 0xFFFFFFFF
  MPU_RGD10_WORD2 = MPU_RGD10_WORD2_VALUE;
    #elif MPU_RGD10_WORD2_MASK == MPU_RGD10_WORD2_VALUE
  MPU_RGD10_WORD2 |= MPU_RGD10_WORD2_VALUE;
    #elif MPU_RGD10_WORD2_VALUE == 0
  MPU_RGD10_WORD2 &= ~MPU_RGD10_WORD2_MASK;
    #else
  MPU_RGD10_WORD2 = (MPU_RGD10_WORD2 & (~MPU_RGD10_WORD2_MASK)) | MPU_RGD10_WORD2_VALUE;
    #endif
  #elif defined(MPU_RGD10_WORD2_VALUE)
  MPU_RGD10_WORD2 = MPU_RGD10_WORD2_VALUE;
  #endif

  /* Register 'MPU_RGD11_WORD2' initialization */
  #if MPU_RGD11_WORD2_MASK
    #if MPU_RGD11_WORD2_MASK == 0xFFFFFFFF
  MPU_RGD11_WORD2 = MPU_RGD11_WORD2_VALUE;
    #elif MPU_RGD11_WORD2_MASK == MPU_RGD11_WORD2_VALUE
  MPU_RGD11_WORD2 |= MPU_RGD11_WORD2_VALUE;
    #elif MPU_RGD11_WORD2_VALUE == 0
  MPU_RGD11_WORD2 &= ~MPU_RGD11_WORD2_MASK;
    #else
  MPU_RGD11_WORD2 = (MPU_RGD11_WORD2 & (~MPU_RGD11_WORD2_MASK)) | MPU_RGD11_WORD2_VALUE;
    #endif
  #elif defined(MPU_RGD11_WORD2_VALUE)
  MPU_RGD11_WORD2 = MPU_RGD11_WORD2_VALUE;
  #endif

  /* Register 'MPU_RGD1_WORD3' initialization */
  #if MPU_RGD1_WORD3_MASK
    #if MPU_RGD1_WORD3_MASK == 0xFFFFFFFF
  MPU_RGD1_WORD3 = MPU_RGD1_WORD3_VALUE;
    #elif MPU_RGD1_WORD3_MASK == MPU_RGD1_WORD3_VALUE
  MPU_RGD1_WORD3 |= MPU_RGD1_WORD3_VALUE;
    #elif MPU_RGD1_WORD3_VALUE == 0
  MPU_RGD1_WORD3 &= ~MPU_RGD1_WORD3_MASK;
    #else
  MPU_RGD1_WORD3 = (MPU_RGD1_WORD3 & (~MPU_RGD1_WORD3_MASK)) | MPU_RGD1_WORD3_VALUE;
    #endif
  #elif defined(MPU_RGD1_WORD3_VALUE)
  MPU_RGD1_WORD3 = MPU_RGD1_WORD3_VALUE;
  #endif

  /* Register 'MPU_RGD2_WORD3' initialization */
  #if MPU_RGD2_WORD3_MASK
    #if MPU_RGD2_WORD3_MASK == 0xFFFFFFFF
  MPU_RGD2_WORD3 = MPU_RGD2_WORD3_VALUE;
    #elif MPU_RGD2_WORD3_MASK == MPU_RGD2_WORD3_VALUE
  MPU_RGD2_WORD3 |= MPU_RGD2_WORD3_VALUE;
    #elif MPU_RGD2_WORD3_VALUE == 0
  MPU_RGD2_WORD3 &= ~MPU_RGD2_WORD3_MASK;
    #else
  MPU_RGD2_WORD3 = (MPU_RGD2_WORD3 & (~MPU_RGD2_WORD3_MASK)) | MPU_RGD2_WORD3_VALUE;
    #endif
  #elif defined(MPU_RGD2_WORD3_VALUE)
  MPU_RGD2_WORD3 = MPU_RGD2_WORD3_VALUE;
  #endif

  /* Register 'MPU_RGD3_WORD3' initialization */
  #if MPU_RGD3_WORD3_MASK
    #if MPU_RGD3_WORD3_MASK == 0xFFFFFFFF
  MPU_RGD3_WORD3 = MPU_RGD3_WORD3_VALUE;
    #elif MPU_RGD3_WORD3_MASK == MPU_RGD3_WORD3_VALUE
  MPU_RGD3_WORD3 |= MPU_RGD3_WORD3_VALUE;
    #elif MPU_RGD3_WORD3_VALUE == 0
  MPU_RGD3_WORD3 &= ~MPU_RGD3_WORD3_MASK;
    #else
  MPU_RGD3_WORD3 = (MPU_RGD3_WORD3 & (~MPU_RGD3_WORD3_MASK)) | MPU_RGD3_WORD3_VALUE;
    #endif
  #elif defined(MPU_RGD3_WORD3_VALUE)
  MPU_RGD3_WORD3 = MPU_RGD3_WORD3_VALUE;
  #endif

  /* Register 'MPU_RGD4_WORD3' initialization */
  #if MPU_RGD4_WORD3_MASK
    #if MPU_RGD4_WORD3_MASK == 0xFFFFFFFF
  MPU_RGD4_WORD3 = MPU_RGD4_WORD3_VALUE;
    #elif MPU_RGD4_WORD3_MASK == MPU_RGD4_WORD3_VALUE
  MPU_RGD4_WORD3 |= MPU_RGD4_WORD3_VALUE;
    #elif MPU_RGD4_WORD3_VALUE == 0
  MPU_RGD4_WORD3 &= ~MPU_RGD4_WORD3_MASK;
    #else
  MPU_RGD4_WORD3 = (MPU_RGD4_WORD3 & (~MPU_RGD4_WORD3_MASK)) | MPU_RGD4_WORD3_VALUE;
    #endif
  #elif defined(MPU_RGD4_WORD3_VALUE)
  MPU_RGD4_WORD3 = MPU_RGD4_WORD3_VALUE;
  #endif

  /* Register 'MPU_RGD5_WORD3' initialization */
  #if MPU_RGD5_WORD3_MASK
    #if MPU_RGD5_WORD3_MASK == 0xFFFFFFFF
  MPU_RGD5_WORD3 = MPU_RGD5_WORD3_VALUE;
    #elif MPU_RGD5_WORD3_MASK == MPU_RGD5_WORD3_VALUE
  MPU_RGD5_WORD3 |= MPU_RGD5_WORD3_VALUE;
    #elif MPU_RGD5_WORD3_VALUE == 0
  MPU_RGD5_WORD3 &= ~MPU_RGD5_WORD3_MASK;
    #else
  MPU_RGD5_WORD3 = (MPU_RGD5_WORD3 & (~MPU_RGD5_WORD3_MASK)) | MPU_RGD5_WORD3_VALUE;
    #endif
  #elif defined(MPU_RGD5_WORD3_VALUE)
  MPU_RGD5_WORD3 = MPU_RGD5_WORD3_VALUE;
  #endif

  /* Register 'MPU_RGD6_WORD3' initialization */
  #if MPU_RGD6_WORD3_MASK
    #if MPU_RGD6_WORD3_MASK == 0xFFFFFFFF
  MPU_RGD6_WORD3 = MPU_RGD6_WORD3_VALUE;
    #elif MPU_RGD6_WORD3_MASK == MPU_RGD6_WORD3_VALUE
  MPU_RGD6_WORD3 |= MPU_RGD6_WORD3_VALUE;
    #elif MPU_RGD6_WORD3_VALUE == 0
  MPU_RGD6_WORD3 &= ~MPU_RGD6_WORD3_MASK;
    #else
  MPU_RGD6_WORD3 = (MPU_RGD6_WORD3 & (~MPU_RGD6_WORD3_MASK)) | MPU_RGD6_WORD3_VALUE;
    #endif
  #elif defined(MPU_RGD6_WORD3_VALUE)
  MPU_RGD6_WORD3 = MPU_RGD6_WORD3_VALUE;
  #endif

  /* Register 'MPU_RGD7_WORD3' initialization */
  #if MPU_RGD7_WORD3_MASK
    #if MPU_RGD7_WORD3_MASK == 0xFFFFFFFF
  MPU_RGD7_WORD3 = MPU_RGD7_WORD3_VALUE;
    #elif MPU_RGD7_WORD3_MASK == MPU_RGD7_WORD3_VALUE
  MPU_RGD7_WORD3 |= MPU_RGD7_WORD3_VALUE;
    #elif MPU_RGD7_WORD3_VALUE == 0
  MPU_RGD7_WORD3 &= ~MPU_RGD7_WORD3_MASK;
    #else
  MPU_RGD7_WORD3 = (MPU_RGD7_WORD3 & (~MPU_RGD7_WORD3_MASK)) | MPU_RGD7_WORD3_VALUE;
    #endif
  #elif defined(MPU_RGD7_WORD3_VALUE)
  MPU_RGD7_WORD3 = MPU_RGD7_WORD3_VALUE;
  #endif

  /* Register 'MPU_RGD8_WORD3' initialization */
  #if MPU_RGD8_WORD3_MASK
    #if MPU_RGD8_WORD3_MASK == 0xFFFFFFFF
  MPU_RGD8_WORD3 = MPU_RGD8_WORD3_VALUE;
    #elif MPU_RGD8_WORD3_MASK == MPU_RGD8_WORD3_VALUE
  MPU_RGD8_WORD3 |= MPU_RGD8_WORD3_VALUE;
    #elif MPU_RGD8_WORD3_VALUE == 0
  MPU_RGD8_WORD3 &= ~MPU_RGD8_WORD3_MASK;
    #else
  MPU_RGD8_WORD3 = (MPU_RGD8_WORD3 & (~MPU_RGD8_WORD3_MASK)) | MPU_RGD8_WORD3_VALUE;
    #endif
  #elif defined(MPU_RGD8_WORD3_VALUE)
  MPU_RGD8_WORD3 = MPU_RGD8_WORD3_VALUE;
  #endif

  /* Register 'MPU_RGD9_WORD3' initialization */
  #if MPU_RGD9_WORD3_MASK
    #if MPU_RGD9_WORD3_MASK == 0xFFFFFFFF
  MPU_RGD9_WORD3 = MPU_RGD9_WORD3_VALUE;
    #elif MPU_RGD9_WORD3_MASK == MPU_RGD9_WORD3_VALUE
  MPU_RGD9_WORD3 |= MPU_RGD9_WORD3_VALUE;
    #elif MPU_RGD9_WORD3_VALUE == 0
  MPU_RGD9_WORD3 &= ~MPU_RGD9_WORD3_MASK;
    #else
  MPU_RGD9_WORD3 = (MPU_RGD9_WORD3 & (~MPU_RGD9_WORD3_MASK)) | MPU_RGD9_WORD3_VALUE;
    #endif
  #elif defined(MPU_RGD9_WORD3_VALUE)
  MPU_RGD9_WORD3 = MPU_RGD9_WORD3_VALUE;
  #endif

  /* Register 'MPU_RGD10_WORD3' initialization */
  #if MPU_RGD10_WORD3_MASK
    #if MPU_RGD10_WORD3_MASK == 0xFFFFFFFF
  MPU_RGD10_WORD3 = MPU_RGD10_WORD3_VALUE;
    #elif MPU_RGD10_WORD3_MASK == MPU_RGD10_WORD3_VALUE
  MPU_RGD10_WORD3 |= MPU_RGD10_WORD3_VALUE;
    #elif MPU_RGD10_WORD3_VALUE == 0
  MPU_RGD10_WORD3 &= ~MPU_RGD10_WORD3_MASK;
    #else
  MPU_RGD10_WORD3 = (MPU_RGD10_WORD3 & (~MPU_RGD10_WORD3_MASK)) | MPU_RGD10_WORD3_VALUE;
    #endif
  #elif defined(MPU_RGD10_WORD3_VALUE)
  MPU_RGD10_WORD3 = MPU_RGD10_WORD3_VALUE;
  #endif

  /* Register 'MPU_RGD11_WORD3' initialization */
  #if MPU_RGD11_WORD3_MASK
    #if MPU_RGD11_WORD3_MASK == 0xFFFFFFFF
  MPU_RGD11_WORD3 = MPU_RGD11_WORD3_VALUE;
    #elif MPU_RGD11_WORD3_MASK == MPU_RGD11_WORD3_VALUE
  MPU_RGD11_WORD3 |= MPU_RGD11_WORD3_VALUE;
    #elif MPU_RGD11_WORD3_VALUE == 0
  MPU_RGD11_WORD3 &= ~MPU_RGD11_WORD3_MASK;
    #else
  MPU_RGD11_WORD3 = (MPU_RGD11_WORD3 & (~MPU_RGD11_WORD3_MASK)) | MPU_RGD11_WORD3_VALUE;
    #endif
  #elif defined(MPU_RGD11_WORD3_VALUE)
  MPU_RGD11_WORD3 = MPU_RGD11_WORD3_VALUE;
  #endif

  /* Register 'MPU_CESR' initialization */
  #if MPU_CESR_MASK
    #if MPU_CESR_MASK == 0xFFFFFFFF
  MPU_CESR = MPU_CESR_VALUE;
    #elif MPU_CESR_MASK == MPU_CESR_VALUE
  MPU_CESR |= MPU_CESR_VALUE;
    #elif MPU_CESR_VALUE == 0
  MPU_CESR &= ~MPU_CESR_MASK;
    #else
  MPU_CESR = (MPU_CESR & (~MPU_CESR_MASK)) | MPU_CESR_VALUE;
    #endif
  #elif defined(MPU_CESR_VALUE)
  MPU_CESR = MPU_CESR_VALUE;
  #endif
}

#ifdef __cplusplus
}
#endif

/* END MPU_Init. */

/** ###################################################################
 **
 **     This file is a part of Processor Expert static initialization
 **     library for Freescale microcontrollers.
 **
 ** ################################################################### */
