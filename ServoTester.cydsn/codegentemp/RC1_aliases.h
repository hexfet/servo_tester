/*******************************************************************************
* File Name: RC1.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_RC1_ALIASES_H) /* Pins RC1_ALIASES_H */
#define CY_PINS_RC1_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define RC1_0			(RC1__0__PC)
#define RC1_0_PS		(RC1__0__PS)
#define RC1_0_PC		(RC1__0__PC)
#define RC1_0_DR		(RC1__0__DR)
#define RC1_0_SHIFT	(RC1__0__SHIFT)
#define RC1_0_INTR	((uint16)((uint16)0x0003u << (RC1__0__SHIFT*2u)))

#define RC1_INTR_ALL	 ((uint16)(RC1_0_INTR))


#endif /* End Pins RC1_ALIASES_H */


/* [] END OF FILE */
