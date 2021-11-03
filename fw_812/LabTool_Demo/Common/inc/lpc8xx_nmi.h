/****************************************************************************
 *   $Id:: lpc8xx_nmi.h 6172 2012-10-31 18:22:51Z usb00423                         $
 *   Project: NXP LPC8xx NMI software example
 *
 *   Description:
 *     This file contains definition and prototype for NMI interrupt.
 *
 ****************************************************************************
 * Software that is described herein is for illustrative purposes only
 * which provides customers with programming information regarding the
 * products. This software is supplied "AS IS" without any warranties.
 * NXP Semiconductors assumes no responsibility or liability for the
 * use of the software, conveys no license or title under any patent,
 * copyright, or mask work right to the product. NXP Semiconductors
 * reserves the right to make changes in the software without
 * notification. NXP Semiconductors also make no representation or
 * warranty that such application will be suitable for the specified
 * use without further testing or modification.
 
 * Permission to use, copy, modify, and distribute this software and its 
 * documentation is hereby granted, under NXP Semiconductors' 
 * relevant copyright in the software, without fee, provided that it 
 * is used in conjunction with NXP Semiconductors microcontrollers. This 
 * copyright, permission, and disclaimer notice must appear in all copies of 
 * this code.
****************************************************************************/
#ifndef __NMI_H 
#define __NMI_H

#define NMI_ENABLED          0

#define MAX_NMI_NUM          32

void NMI_Init( uint32_t NMI_num );
void NMI_Handler(void);
#endif /* end __NMI_H */
/*****************************************************************************
**                            End Of File
******************************************************************************/
