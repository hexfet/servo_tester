/*******************************************************************************
* File Name: RC_OUT_PM.c
* Version 2.10
*
* Description:
*  This file contains the setup, control, and status commands to support
*  the component operations in the low power mode.
*
* Note:
*  None
*
********************************************************************************
* Copyright 2013-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "RC_OUT.h"

static RC_OUT_BACKUP_STRUCT RC_OUT_backup;


/*******************************************************************************
* Function Name: RC_OUT_SaveConfig
********************************************************************************
*
* Summary:
*  All configuration registers are retention. Nothing to save here.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void RC_OUT_SaveConfig(void)
{

}


/*******************************************************************************
* Function Name: RC_OUT_Sleep
********************************************************************************
*
* Summary:
*  Stops the component operation and saves the user configuration.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void RC_OUT_Sleep(void)
{
    if(0u != (RC_OUT_BLOCK_CONTROL_REG & RC_OUT_MASK))
    {
        RC_OUT_backup.enableState = 1u;
    }
    else
    {
        RC_OUT_backup.enableState = 0u;
    }

    RC_OUT_Stop();
    RC_OUT_SaveConfig();
}


/*******************************************************************************
* Function Name: RC_OUT_RestoreConfig
********************************************************************************
*
* Summary:
*  All configuration registers are retention. Nothing to restore here.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void RC_OUT_RestoreConfig(void)
{

}


/*******************************************************************************
* Function Name: RC_OUT_Wakeup
********************************************************************************
*
* Summary:
*  Restores the user configuration and restores the enable state.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void RC_OUT_Wakeup(void)
{
    RC_OUT_RestoreConfig();

    if(0u != RC_OUT_backup.enableState)
    {
        RC_OUT_Enable();
    }
}


/* [] END OF FILE */
