/************************************************************************************
 * arch/arm/src/kinetis/chip/kinetis_pit.h
 *
 *   Copyright (C) 2011, 2016 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ************************************************************************************/

#ifndef __ARCH_ARM_SRC_KINETIS_CHIP_KINETIS_PIT_H
#define __ARCH_ARM_SRC_KINETIS_CHIP_KINETIS_PIT_H

/************************************************************************************
 * Included Files
 ************************************************************************************/

#include <nuttx/config.h>

#include "chip.h"

/************************************************************************************
 * Pre-processor Definitions
 ************************************************************************************/

#if defined(KINETIS_K66)
#  define KINETIS_PIT_HAS_CHAIN
#  define KINETIS_PIT_HAS_LIFETIME
#endif

/* Register Offsets *****************************************************************/

#define KINETIS_PIT_MCR_OFFSET       0x0000 /* PIT Module Control Register */
#if defined(KINETIS_PIT_HAS_LIFETIME)
#  define KINETIS_PIT_LTMR64H_OFFSET 0x00e0 /* PIT Upper Lifetime Timer Register */
#  define KINETIS_PIT_LTMR64L_OFFSET 0x00e4 /* PIT Lower Lifetime Timer Register */
#endif
#define KINETIS_PIT_LDVAL0_OFFSET    0x0100 /* Timer Load Value Register */
#define KINETIS_PIT_CVAL0_OFFSET     0x0104 /* Current Timer Value Register */
#define KINETIS_PIT_TCTRL0_OFFSET    0x0108 /* Timer Control Register */
#define KINETIS_PIT_TFLG0_OFFSET     0x010c /* Timer Flag Register */
#define KINETIS_PIT_LDVAL1_OFFSET    0x0110 /* Timer Load Value Register */
#define KINETIS_PIT_CVAL1_OFFSET     0x0114 /* Current Timer Value Register */
#define KINETIS_PIT_TCTRL1_OFFSET    0x0118 /* Timer Control Register */
#define KINETIS_PIT_TFLG1_OFFSET     0x011c /* Timer Flag Register */
#define KINETIS_PIT_LDVAL2_OFFSET    0x0120 /* Timer Load Value Register */
#define KINETIS_PIT_CVAL2_OFFSET     0x0124 /* Current Timer Value Register */
#define KINETIS_PIT_TCTRL2_OFFSET    0x0128 /* Timer Control Register */
#define KINETIS_PIT_TFLG2_OFFSET     0x012c /* Timer Flag Register */
#define KINETIS_PIT_LDVAL3_OFFSET    0x0130 /* Timer Load Value Register */
#define KINETIS_PIT_CVAL3_OFFSET     0x0134 /* Current Timer Value Register */
#define KINETIS_PIT_TCTRL3_OFFSET    0x0138 /* Timer Control Register */
#define KINETIS_PIT_TFLG3_OFFSET     0x013c /* Timer Flag Register */

/* Register Addresses ***************************************************************/

#define KINETIS_PIT_MCR              (KINETIS_PIT_BASE+KINETIS_PIT_MCR_OFFSET)
#if defined(KINETIS_PIT_HAS_LIFETIME)
#  define KINETIS_PIT_LTMR64H        (KINETIS_PIT_BASE+KINETIS_PIT_LTMR64H_OFFSET)
#  define KINETIS_PIT_LTMR64L        (KINETIS_PIT_BASE+KINETIS_PIT_LTMR64L_OFFSET)
#endif
#define KINETIS_PIT_LDVAL0           (KINETIS_PIT_BASE+KINETIS_PIT_LDVAL0_OFFSET)
#define KINETIS_PIT_CVAL0            (KINETIS_PIT_BASE+KINETIS_PIT_CVAL0_OFFSET)
#define KINETIS_PIT_TCTRL0           (KINETIS_PIT_BASE+KINETIS_PIT_TCTRL0_OFFSET)
#define KINETIS_PIT_TFLG0            (KINETIS_PIT_BASE+KINETIS_PIT_TFLG0_OFFSET)
#define KINETIS_PIT_LDVAL1           (KINETIS_PIT_BASE+KINETIS_PIT_LDVAL1_OFFSET)
#define KINETIS_PIT_CVAL1            (KINETIS_PIT_BASE+KINETIS_PIT_CVAL1_OFFSET)
#define KINETIS_PIT_TCTRL1           (KINETIS_PIT_BASE+KINETIS_PIT_TCTRL1_OFFSET)
#define KINETIS_PIT_TFLG1            (KINETIS_PIT_BASE+KINETIS_PIT_TFLG1_OFFSET)
#define KINETIS_PIT_LDVAL2           (KINETIS_PIT_BASE+KINETIS_PIT_LDVAL2_OFFSET)
#define KINETIS_PIT_CVAL2            (KINETIS_PIT_BASE+KINETIS_PIT_CVAL2_OFFSET)
#define KINETIS_PIT_TCTRL2           (KINETIS_PIT_BASE+KINETIS_PIT_TCTRL2_OFFSET)
#define KINETIS_PIT_TFLG2            (KINETIS_PIT_BASE+KINETIS_PIT_TFLG2_OFFSET)
#define KINETIS_PIT_LDVAL3           (KINETIS_PIT_BASE+KINETIS_PIT_LDVAL3_OFFSET)
#define KINETIS_PIT_CVAL3            (KINETIS_PIT_BASE+KINETIS_PIT_CVAL3_OFFSET)
#define KINETIS_PIT_TCTRL3           (KINETIS_PIT_BASE+KINETIS_PIT_TCTRL3_OFFSET)
#define KINETIS_PIT_TFLG3            (KINETIS_PIT_BASE+KINETIS_PIT_TFLG3_OFFSET)

/* Register Bit Definitions *********************************************************/

/* PIT Module Control Register */

#define PIT_MCR_FRZ                (1 << 0)  /* Bit 0:  Freeze */
#define PIT_MCR_MDIS               (1 << 1)  /* Bit 1:  Module Disable */
                                             /* Bits 2-31: Reserved */

/* Timer Load Value Register (32-bit Timer Start Value Bits) */
/* Current Timer Value Register (32-bit Current Timer Value) */

/* Timer Control Register */

#define PIT_TCTRL_TEN              (1 << 0)  /* Bit 0:  Timer Enable Bit */
#define PIT_TCTRL_TIE              (1 << 1)  /* Bit 1:  Timer Interrupt Enable Bit */
                                             /* Bits 2-31: Reserved */
#if defined(KINETIS_PIT_HAS_CHAIN)
#define PIT_TCTRL_CHN              (1 << 2)  /* Bit 2:  Chain Mode */
                                             /* Bits 3-31: Reserved */
#endif
/* Timer Flag Register */

#define PIT_TFLG_TIF               (1 << 0)  /* Bit 0:  Timer Interrupt Flag */
                                             /* Bits 1-31: Reserved */

/************************************************************************************
 * Public Types
 ************************************************************************************/

/************************************************************************************
 * Public Data
 ************************************************************************************/

/************************************************************************************
 * Public Functions
 ************************************************************************************/

#endif /* __ARCH_ARM_SRC_KINETIS_CHIP_KINETIS_PIT_H */
