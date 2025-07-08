/*******************************************************************************
* File Name: RC_OUT.h
* Version 2.10
*
* Description:
*  This file provides constants and parameter values for the RC_OUT
*  component.
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

#if !defined(CY_TCPWM_RC_OUT_H)
#define CY_TCPWM_RC_OUT_H


#include "CyLib.h"
#include "cytypes.h"
#include "cyfitter.h"


/*******************************************************************************
* Internal Type defines
*******************************************************************************/

/* Structure to save state before go to sleep */
typedef struct
{
    uint8  enableState;
} RC_OUT_BACKUP_STRUCT;


/*******************************************************************************
* Variables
*******************************************************************************/
extern uint8  RC_OUT_initVar;


/***************************************
*   Conditional Compilation Parameters
****************************************/

#define RC_OUT_CY_TCPWM_V2                    (CYIPBLOCK_m0s8tcpwm_VERSION == 2u)
#define RC_OUT_CY_TCPWM_4000                  (CY_PSOC4_4000)

/* TCPWM Configuration */
#define RC_OUT_CONFIG                         (7lu)

/* Quad Mode */
/* Parameters */
#define RC_OUT_QUAD_ENCODING_MODES            (0lu)
#define RC_OUT_QUAD_AUTO_START                (0lu)

/* Signal modes */
#define RC_OUT_QUAD_INDEX_SIGNAL_MODE         (0lu)
#define RC_OUT_QUAD_PHIA_SIGNAL_MODE          (3lu)
#define RC_OUT_QUAD_PHIB_SIGNAL_MODE          (3lu)
#define RC_OUT_QUAD_STOP_SIGNAL_MODE          (0lu)

/* Signal present */
#define RC_OUT_QUAD_INDEX_SIGNAL_PRESENT      (1lu)
#define RC_OUT_QUAD_STOP_SIGNAL_PRESENT       (1lu)

/* Interrupt Mask */
#define RC_OUT_QUAD_INTERRUPT_MASK            (1lu)

/* Timer/Counter Mode */
/* Parameters */
#define RC_OUT_TC_RUN_MODE                    (0lu)
#define RC_OUT_TC_COUNTER_MODE                (0lu)
#define RC_OUT_TC_COMP_CAP_MODE               (2lu)
#define RC_OUT_TC_PRESCALER                   (0lu)

/* Signal modes */
#define RC_OUT_TC_RELOAD_SIGNAL_MODE          (0lu)
#define RC_OUT_TC_COUNT_SIGNAL_MODE           (3lu)
#define RC_OUT_TC_START_SIGNAL_MODE           (0lu)
#define RC_OUT_TC_STOP_SIGNAL_MODE            (0lu)
#define RC_OUT_TC_CAPTURE_SIGNAL_MODE         (0lu)

/* Signal present */
#define RC_OUT_TC_RELOAD_SIGNAL_PRESENT       (1lu)
#define RC_OUT_TC_COUNT_SIGNAL_PRESENT        (1lu)
#define RC_OUT_TC_START_SIGNAL_PRESENT        (1lu)
#define RC_OUT_TC_STOP_SIGNAL_PRESENT         (1lu)
#define RC_OUT_TC_CAPTURE_SIGNAL_PRESENT      (1lu)

/* Interrupt Mask */
#define RC_OUT_TC_INTERRUPT_MASK              (1lu)

/* PWM Mode */
/* Parameters */
#define RC_OUT_PWM_KILL_EVENT                 (0lu)
#define RC_OUT_PWM_STOP_EVENT                 (0lu)
#define RC_OUT_PWM_MODE                       (4lu)
#define RC_OUT_PWM_OUT_N_INVERT               (0lu)
#define RC_OUT_PWM_OUT_INVERT                 (0lu)
#define RC_OUT_PWM_ALIGN                      (0lu)
#define RC_OUT_PWM_RUN_MODE                   (0lu)
#define RC_OUT_PWM_DEAD_TIME_CYCLE            (0lu)
#define RC_OUT_PWM_PRESCALER                  (0lu)

/* Signal modes */
#define RC_OUT_PWM_RELOAD_SIGNAL_MODE         (0lu)
#define RC_OUT_PWM_COUNT_SIGNAL_MODE          (3lu)
#define RC_OUT_PWM_START_SIGNAL_MODE          (3lu)
#define RC_OUT_PWM_STOP_SIGNAL_MODE           (0lu)
#define RC_OUT_PWM_SWITCH_SIGNAL_MODE         (0lu)

/* Signal present */
#define RC_OUT_PWM_RELOAD_SIGNAL_PRESENT      (0lu)
#define RC_OUT_PWM_COUNT_SIGNAL_PRESENT       (1lu)
#define RC_OUT_PWM_START_SIGNAL_PRESENT       (1lu)
#define RC_OUT_PWM_STOP_SIGNAL_PRESENT        (0lu)
#define RC_OUT_PWM_SWITCH_SIGNAL_PRESENT      (0lu)

/* Interrupt Mask */
#define RC_OUT_PWM_INTERRUPT_MASK             (0lu)


/***************************************
*    Initial Parameter Constants
***************************************/

/* Timer/Counter Mode */
#define RC_OUT_TC_PERIOD_VALUE                (65535lu)
#define RC_OUT_TC_COMPARE_VALUE               (65535lu)
#define RC_OUT_TC_COMPARE_BUF_VALUE           (65535lu)
#define RC_OUT_TC_COMPARE_SWAP                (0lu)

/* PWM Mode */
#define RC_OUT_PWM_PERIOD_VALUE               (2000lu)
#define RC_OUT_PWM_PERIOD_BUF_VALUE           (65535lu)
#define RC_OUT_PWM_PERIOD_SWAP                (0lu)
#define RC_OUT_PWM_COMPARE_VALUE              (100lu)
#define RC_OUT_PWM_COMPARE_BUF_VALUE          (65535lu)
#define RC_OUT_PWM_COMPARE_SWAP               (0lu)


/***************************************
*    Enumerated Types and Parameters
***************************************/

#define RC_OUT__LEFT 0
#define RC_OUT__RIGHT 1
#define RC_OUT__CENTER 2
#define RC_OUT__ASYMMETRIC 3

#define RC_OUT__X1 0
#define RC_OUT__X2 1
#define RC_OUT__X4 2

#define RC_OUT__PWM 4
#define RC_OUT__PWM_DT 5
#define RC_OUT__PWM_PR 6

#define RC_OUT__INVERSE 1
#define RC_OUT__DIRECT 0

#define RC_OUT__CAPTURE 2
#define RC_OUT__COMPARE 0

#define RC_OUT__TRIG_LEVEL 3
#define RC_OUT__TRIG_RISING 0
#define RC_OUT__TRIG_FALLING 1
#define RC_OUT__TRIG_BOTH 2

#define RC_OUT__INTR_MASK_TC 1
#define RC_OUT__INTR_MASK_CC_MATCH 2
#define RC_OUT__INTR_MASK_NONE 0
#define RC_OUT__INTR_MASK_TC_CC 3

#define RC_OUT__UNCONFIG 8
#define RC_OUT__TIMER 1
#define RC_OUT__QUAD 3
#define RC_OUT__PWM_SEL 7

#define RC_OUT__COUNT_UP 0
#define RC_OUT__COUNT_DOWN 1
#define RC_OUT__COUNT_UPDOWN0 2
#define RC_OUT__COUNT_UPDOWN1 3


/* Prescaler */
#define RC_OUT_PRESCALE_DIVBY1                ((uint32)(0u << RC_OUT_PRESCALER_SHIFT))
#define RC_OUT_PRESCALE_DIVBY2                ((uint32)(1u << RC_OUT_PRESCALER_SHIFT))
#define RC_OUT_PRESCALE_DIVBY4                ((uint32)(2u << RC_OUT_PRESCALER_SHIFT))
#define RC_OUT_PRESCALE_DIVBY8                ((uint32)(3u << RC_OUT_PRESCALER_SHIFT))
#define RC_OUT_PRESCALE_DIVBY16               ((uint32)(4u << RC_OUT_PRESCALER_SHIFT))
#define RC_OUT_PRESCALE_DIVBY32               ((uint32)(5u << RC_OUT_PRESCALER_SHIFT))
#define RC_OUT_PRESCALE_DIVBY64               ((uint32)(6u << RC_OUT_PRESCALER_SHIFT))
#define RC_OUT_PRESCALE_DIVBY128              ((uint32)(7u << RC_OUT_PRESCALER_SHIFT))

/* TCPWM set modes */
#define RC_OUT_MODE_TIMER_COMPARE             ((uint32)(RC_OUT__COMPARE         <<  \
                                                                  RC_OUT_MODE_SHIFT))
#define RC_OUT_MODE_TIMER_CAPTURE             ((uint32)(RC_OUT__CAPTURE         <<  \
                                                                  RC_OUT_MODE_SHIFT))
#define RC_OUT_MODE_QUAD                      ((uint32)(RC_OUT__QUAD            <<  \
                                                                  RC_OUT_MODE_SHIFT))
#define RC_OUT_MODE_PWM                       ((uint32)(RC_OUT__PWM             <<  \
                                                                  RC_OUT_MODE_SHIFT))
#define RC_OUT_MODE_PWM_DT                    ((uint32)(RC_OUT__PWM_DT          <<  \
                                                                  RC_OUT_MODE_SHIFT))
#define RC_OUT_MODE_PWM_PR                    ((uint32)(RC_OUT__PWM_PR          <<  \
                                                                  RC_OUT_MODE_SHIFT))

/* Quad Modes */
#define RC_OUT_MODE_X1                        ((uint32)(RC_OUT__X1              <<  \
                                                                  RC_OUT_QUAD_MODE_SHIFT))
#define RC_OUT_MODE_X2                        ((uint32)(RC_OUT__X2              <<  \
                                                                  RC_OUT_QUAD_MODE_SHIFT))
#define RC_OUT_MODE_X4                        ((uint32)(RC_OUT__X4              <<  \
                                                                  RC_OUT_QUAD_MODE_SHIFT))

/* Counter modes */
#define RC_OUT_COUNT_UP                       ((uint32)(RC_OUT__COUNT_UP        <<  \
                                                                  RC_OUT_UPDOWN_SHIFT))
#define RC_OUT_COUNT_DOWN                     ((uint32)(RC_OUT__COUNT_DOWN      <<  \
                                                                  RC_OUT_UPDOWN_SHIFT))
#define RC_OUT_COUNT_UPDOWN0                  ((uint32)(RC_OUT__COUNT_UPDOWN0   <<  \
                                                                  RC_OUT_UPDOWN_SHIFT))
#define RC_OUT_COUNT_UPDOWN1                  ((uint32)(RC_OUT__COUNT_UPDOWN1   <<  \
                                                                  RC_OUT_UPDOWN_SHIFT))

/* PWM output invert */
#define RC_OUT_INVERT_LINE                    ((uint32)(RC_OUT__INVERSE         <<  \
                                                                  RC_OUT_INV_OUT_SHIFT))
#define RC_OUT_INVERT_LINE_N                  ((uint32)(RC_OUT__INVERSE         <<  \
                                                                  RC_OUT_INV_COMPL_OUT_SHIFT))

/* Trigger modes */
#define RC_OUT_TRIG_RISING                    ((uint32)RC_OUT__TRIG_RISING)
#define RC_OUT_TRIG_FALLING                   ((uint32)RC_OUT__TRIG_FALLING)
#define RC_OUT_TRIG_BOTH                      ((uint32)RC_OUT__TRIG_BOTH)
#define RC_OUT_TRIG_LEVEL                     ((uint32)RC_OUT__TRIG_LEVEL)

/* Interrupt mask */
#define RC_OUT_INTR_MASK_TC                   ((uint32)RC_OUT__INTR_MASK_TC)
#define RC_OUT_INTR_MASK_CC_MATCH             ((uint32)RC_OUT__INTR_MASK_CC_MATCH)

/* PWM Output Controls */
#define RC_OUT_CC_MATCH_SET                   (0x00u)
#define RC_OUT_CC_MATCH_CLEAR                 (0x01u)
#define RC_OUT_CC_MATCH_INVERT                (0x02u)
#define RC_OUT_CC_MATCH_NO_CHANGE             (0x03u)
#define RC_OUT_OVERLOW_SET                    (0x00u)
#define RC_OUT_OVERLOW_CLEAR                  (0x04u)
#define RC_OUT_OVERLOW_INVERT                 (0x08u)
#define RC_OUT_OVERLOW_NO_CHANGE              (0x0Cu)
#define RC_OUT_UNDERFLOW_SET                  (0x00u)
#define RC_OUT_UNDERFLOW_CLEAR                (0x10u)
#define RC_OUT_UNDERFLOW_INVERT               (0x20u)
#define RC_OUT_UNDERFLOW_NO_CHANGE            (0x30u)

/* PWM Align */
#define RC_OUT_PWM_MODE_LEFT                  (RC_OUT_CC_MATCH_CLEAR        |   \
                                                         RC_OUT_OVERLOW_SET           |   \
                                                         RC_OUT_UNDERFLOW_NO_CHANGE)
#define RC_OUT_PWM_MODE_RIGHT                 (RC_OUT_CC_MATCH_SET          |   \
                                                         RC_OUT_OVERLOW_NO_CHANGE     |   \
                                                         RC_OUT_UNDERFLOW_CLEAR)
#define RC_OUT_PWM_MODE_ASYM                  (RC_OUT_CC_MATCH_INVERT       |   \
                                                         RC_OUT_OVERLOW_SET           |   \
                                                         RC_OUT_UNDERFLOW_CLEAR)

#if (RC_OUT_CY_TCPWM_V2)
    #if(RC_OUT_CY_TCPWM_4000)
        #define RC_OUT_PWM_MODE_CENTER                (RC_OUT_CC_MATCH_INVERT       |   \
                                                                 RC_OUT_OVERLOW_NO_CHANGE     |   \
                                                                 RC_OUT_UNDERFLOW_CLEAR)
    #else
        #define RC_OUT_PWM_MODE_CENTER                (RC_OUT_CC_MATCH_INVERT       |   \
                                                                 RC_OUT_OVERLOW_SET           |   \
                                                                 RC_OUT_UNDERFLOW_CLEAR)
    #endif /* (RC_OUT_CY_TCPWM_4000) */
#else
    #define RC_OUT_PWM_MODE_CENTER                (RC_OUT_CC_MATCH_INVERT       |   \
                                                             RC_OUT_OVERLOW_NO_CHANGE     |   \
                                                             RC_OUT_UNDERFLOW_CLEAR)
#endif /* (RC_OUT_CY_TCPWM_NEW) */

/* Command operations without condition */
#define RC_OUT_CMD_CAPTURE                    (0u)
#define RC_OUT_CMD_RELOAD                     (8u)
#define RC_OUT_CMD_STOP                       (16u)
#define RC_OUT_CMD_START                      (24u)

/* Status */
#define RC_OUT_STATUS_DOWN                    (1u)
#define RC_OUT_STATUS_RUNNING                 (2u)


/***************************************
*        Function Prototypes
****************************************/

void   RC_OUT_Init(void);
void   RC_OUT_Enable(void);
void   RC_OUT_Start(void);
void   RC_OUT_Stop(void);

void   RC_OUT_SetMode(uint32 mode);
void   RC_OUT_SetCounterMode(uint32 counterMode);
void   RC_OUT_SetPWMMode(uint32 modeMask);
void   RC_OUT_SetQDMode(uint32 qdMode);

void   RC_OUT_SetPrescaler(uint32 prescaler);
void   RC_OUT_TriggerCommand(uint32 mask, uint32 command);
void   RC_OUT_SetOneShot(uint32 oneShotEnable);
uint32 RC_OUT_ReadStatus(void);

void   RC_OUT_SetPWMSyncKill(uint32 syncKillEnable);
void   RC_OUT_SetPWMStopOnKill(uint32 stopOnKillEnable);
void   RC_OUT_SetPWMDeadTime(uint32 deadTime);
void   RC_OUT_SetPWMInvert(uint32 mask);

void   RC_OUT_SetInterruptMode(uint32 interruptMask);
uint32 RC_OUT_GetInterruptSourceMasked(void);
uint32 RC_OUT_GetInterruptSource(void);
void   RC_OUT_ClearInterrupt(uint32 interruptMask);
void   RC_OUT_SetInterrupt(uint32 interruptMask);

void   RC_OUT_WriteCounter(uint32 count);
uint32 RC_OUT_ReadCounter(void);

uint32 RC_OUT_ReadCapture(void);
uint32 RC_OUT_ReadCaptureBuf(void);

void   RC_OUT_WritePeriod(uint32 period);
uint32 RC_OUT_ReadPeriod(void);
void   RC_OUT_WritePeriodBuf(uint32 periodBuf);
uint32 RC_OUT_ReadPeriodBuf(void);

void   RC_OUT_WriteCompare(uint32 compare);
uint32 RC_OUT_ReadCompare(void);
void   RC_OUT_WriteCompareBuf(uint32 compareBuf);
uint32 RC_OUT_ReadCompareBuf(void);

void   RC_OUT_SetPeriodSwap(uint32 swapEnable);
void   RC_OUT_SetCompareSwap(uint32 swapEnable);

void   RC_OUT_SetCaptureMode(uint32 triggerMode);
void   RC_OUT_SetReloadMode(uint32 triggerMode);
void   RC_OUT_SetStartMode(uint32 triggerMode);
void   RC_OUT_SetStopMode(uint32 triggerMode);
void   RC_OUT_SetCountMode(uint32 triggerMode);

void   RC_OUT_SaveConfig(void);
void   RC_OUT_RestoreConfig(void);
void   RC_OUT_Sleep(void);
void   RC_OUT_Wakeup(void);


/***************************************
*             Registers
***************************************/

#define RC_OUT_BLOCK_CONTROL_REG              (*(reg32 *) RC_OUT_cy_m0s8_tcpwm_1__TCPWM_CTRL )
#define RC_OUT_BLOCK_CONTROL_PTR              ( (reg32 *) RC_OUT_cy_m0s8_tcpwm_1__TCPWM_CTRL )
#define RC_OUT_COMMAND_REG                    (*(reg32 *) RC_OUT_cy_m0s8_tcpwm_1__TCPWM_CMD )
#define RC_OUT_COMMAND_PTR                    ( (reg32 *) RC_OUT_cy_m0s8_tcpwm_1__TCPWM_CMD )
#define RC_OUT_INTRRUPT_CAUSE_REG             (*(reg32 *) RC_OUT_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE )
#define RC_OUT_INTRRUPT_CAUSE_PTR             ( (reg32 *) RC_OUT_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE )
#define RC_OUT_CONTROL_REG                    (*(reg32 *) RC_OUT_cy_m0s8_tcpwm_1__CTRL )
#define RC_OUT_CONTROL_PTR                    ( (reg32 *) RC_OUT_cy_m0s8_tcpwm_1__CTRL )
#define RC_OUT_STATUS_REG                     (*(reg32 *) RC_OUT_cy_m0s8_tcpwm_1__STATUS )
#define RC_OUT_STATUS_PTR                     ( (reg32 *) RC_OUT_cy_m0s8_tcpwm_1__STATUS )
#define RC_OUT_COUNTER_REG                    (*(reg32 *) RC_OUT_cy_m0s8_tcpwm_1__COUNTER )
#define RC_OUT_COUNTER_PTR                    ( (reg32 *) RC_OUT_cy_m0s8_tcpwm_1__COUNTER )
#define RC_OUT_COMP_CAP_REG                   (*(reg32 *) RC_OUT_cy_m0s8_tcpwm_1__CC )
#define RC_OUT_COMP_CAP_PTR                   ( (reg32 *) RC_OUT_cy_m0s8_tcpwm_1__CC )
#define RC_OUT_COMP_CAP_BUF_REG               (*(reg32 *) RC_OUT_cy_m0s8_tcpwm_1__CC_BUFF )
#define RC_OUT_COMP_CAP_BUF_PTR               ( (reg32 *) RC_OUT_cy_m0s8_tcpwm_1__CC_BUFF )
#define RC_OUT_PERIOD_REG                     (*(reg32 *) RC_OUT_cy_m0s8_tcpwm_1__PERIOD )
#define RC_OUT_PERIOD_PTR                     ( (reg32 *) RC_OUT_cy_m0s8_tcpwm_1__PERIOD )
#define RC_OUT_PERIOD_BUF_REG                 (*(reg32 *) RC_OUT_cy_m0s8_tcpwm_1__PERIOD_BUFF )
#define RC_OUT_PERIOD_BUF_PTR                 ( (reg32 *) RC_OUT_cy_m0s8_tcpwm_1__PERIOD_BUFF )
#define RC_OUT_TRIG_CONTROL0_REG              (*(reg32 *) RC_OUT_cy_m0s8_tcpwm_1__TR_CTRL0 )
#define RC_OUT_TRIG_CONTROL0_PTR              ( (reg32 *) RC_OUT_cy_m0s8_tcpwm_1__TR_CTRL0 )
#define RC_OUT_TRIG_CONTROL1_REG              (*(reg32 *) RC_OUT_cy_m0s8_tcpwm_1__TR_CTRL1 )
#define RC_OUT_TRIG_CONTROL1_PTR              ( (reg32 *) RC_OUT_cy_m0s8_tcpwm_1__TR_CTRL1 )
#define RC_OUT_TRIG_CONTROL2_REG              (*(reg32 *) RC_OUT_cy_m0s8_tcpwm_1__TR_CTRL2 )
#define RC_OUT_TRIG_CONTROL2_PTR              ( (reg32 *) RC_OUT_cy_m0s8_tcpwm_1__TR_CTRL2 )
#define RC_OUT_INTERRUPT_REQ_REG              (*(reg32 *) RC_OUT_cy_m0s8_tcpwm_1__INTR )
#define RC_OUT_INTERRUPT_REQ_PTR              ( (reg32 *) RC_OUT_cy_m0s8_tcpwm_1__INTR )
#define RC_OUT_INTERRUPT_SET_REG              (*(reg32 *) RC_OUT_cy_m0s8_tcpwm_1__INTR_SET )
#define RC_OUT_INTERRUPT_SET_PTR              ( (reg32 *) RC_OUT_cy_m0s8_tcpwm_1__INTR_SET )
#define RC_OUT_INTERRUPT_MASK_REG             (*(reg32 *) RC_OUT_cy_m0s8_tcpwm_1__INTR_MASK )
#define RC_OUT_INTERRUPT_MASK_PTR             ( (reg32 *) RC_OUT_cy_m0s8_tcpwm_1__INTR_MASK )
#define RC_OUT_INTERRUPT_MASKED_REG           (*(reg32 *) RC_OUT_cy_m0s8_tcpwm_1__INTR_MASKED )
#define RC_OUT_INTERRUPT_MASKED_PTR           ( (reg32 *) RC_OUT_cy_m0s8_tcpwm_1__INTR_MASKED )


/***************************************
*       Registers Constants
***************************************/

/* Mask */
#define RC_OUT_MASK                           ((uint32)RC_OUT_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK)

/* Shift constants for control register */
#define RC_OUT_RELOAD_CC_SHIFT                (0u)
#define RC_OUT_RELOAD_PERIOD_SHIFT            (1u)
#define RC_OUT_PWM_SYNC_KILL_SHIFT            (2u)
#define RC_OUT_PWM_STOP_KILL_SHIFT            (3u)
#define RC_OUT_PRESCALER_SHIFT                (8u)
#define RC_OUT_UPDOWN_SHIFT                   (16u)
#define RC_OUT_ONESHOT_SHIFT                  (18u)
#define RC_OUT_QUAD_MODE_SHIFT                (20u)
#define RC_OUT_INV_OUT_SHIFT                  (20u)
#define RC_OUT_INV_COMPL_OUT_SHIFT            (21u)
#define RC_OUT_MODE_SHIFT                     (24u)

/* Mask constants for control register */
#define RC_OUT_RELOAD_CC_MASK                 ((uint32)(RC_OUT_1BIT_MASK        <<  \
                                                                            RC_OUT_RELOAD_CC_SHIFT))
#define RC_OUT_RELOAD_PERIOD_MASK             ((uint32)(RC_OUT_1BIT_MASK        <<  \
                                                                            RC_OUT_RELOAD_PERIOD_SHIFT))
#define RC_OUT_PWM_SYNC_KILL_MASK             ((uint32)(RC_OUT_1BIT_MASK        <<  \
                                                                            RC_OUT_PWM_SYNC_KILL_SHIFT))
#define RC_OUT_PWM_STOP_KILL_MASK             ((uint32)(RC_OUT_1BIT_MASK        <<  \
                                                                            RC_OUT_PWM_STOP_KILL_SHIFT))
#define RC_OUT_PRESCALER_MASK                 ((uint32)(RC_OUT_8BIT_MASK        <<  \
                                                                            RC_OUT_PRESCALER_SHIFT))
#define RC_OUT_UPDOWN_MASK                    ((uint32)(RC_OUT_2BIT_MASK        <<  \
                                                                            RC_OUT_UPDOWN_SHIFT))
#define RC_OUT_ONESHOT_MASK                   ((uint32)(RC_OUT_1BIT_MASK        <<  \
                                                                            RC_OUT_ONESHOT_SHIFT))
#define RC_OUT_QUAD_MODE_MASK                 ((uint32)(RC_OUT_3BIT_MASK        <<  \
                                                                            RC_OUT_QUAD_MODE_SHIFT))
#define RC_OUT_INV_OUT_MASK                   ((uint32)(RC_OUT_2BIT_MASK        <<  \
                                                                            RC_OUT_INV_OUT_SHIFT))
#define RC_OUT_MODE_MASK                      ((uint32)(RC_OUT_3BIT_MASK        <<  \
                                                                            RC_OUT_MODE_SHIFT))

/* Shift constants for trigger control register 1 */
#define RC_OUT_CAPTURE_SHIFT                  (0u)
#define RC_OUT_COUNT_SHIFT                    (2u)
#define RC_OUT_RELOAD_SHIFT                   (4u)
#define RC_OUT_STOP_SHIFT                     (6u)
#define RC_OUT_START_SHIFT                    (8u)

/* Mask constants for trigger control register 1 */
#define RC_OUT_CAPTURE_MASK                   ((uint32)(RC_OUT_2BIT_MASK        <<  \
                                                                  RC_OUT_CAPTURE_SHIFT))
#define RC_OUT_COUNT_MASK                     ((uint32)(RC_OUT_2BIT_MASK        <<  \
                                                                  RC_OUT_COUNT_SHIFT))
#define RC_OUT_RELOAD_MASK                    ((uint32)(RC_OUT_2BIT_MASK        <<  \
                                                                  RC_OUT_RELOAD_SHIFT))
#define RC_OUT_STOP_MASK                      ((uint32)(RC_OUT_2BIT_MASK        <<  \
                                                                  RC_OUT_STOP_SHIFT))
#define RC_OUT_START_MASK                     ((uint32)(RC_OUT_2BIT_MASK        <<  \
                                                                  RC_OUT_START_SHIFT))

/* MASK */
#define RC_OUT_1BIT_MASK                      ((uint32)0x01u)
#define RC_OUT_2BIT_MASK                      ((uint32)0x03u)
#define RC_OUT_3BIT_MASK                      ((uint32)0x07u)
#define RC_OUT_6BIT_MASK                      ((uint32)0x3Fu)
#define RC_OUT_8BIT_MASK                      ((uint32)0xFFu)
#define RC_OUT_16BIT_MASK                     ((uint32)0xFFFFu)

/* Shift constant for status register */
#define RC_OUT_RUNNING_STATUS_SHIFT           (30u)


/***************************************
*    Initial Constants
***************************************/

#define RC_OUT_CTRL_QUAD_BASE_CONFIG                                                          \
        (((uint32)(RC_OUT_QUAD_ENCODING_MODES     << RC_OUT_QUAD_MODE_SHIFT))       |\
         ((uint32)(RC_OUT_CONFIG                  << RC_OUT_MODE_SHIFT)))

#define RC_OUT_CTRL_PWM_BASE_CONFIG                                                           \
        (((uint32)(RC_OUT_PWM_STOP_EVENT          << RC_OUT_PWM_STOP_KILL_SHIFT))   |\
         ((uint32)(RC_OUT_PWM_OUT_INVERT          << RC_OUT_INV_OUT_SHIFT))         |\
         ((uint32)(RC_OUT_PWM_OUT_N_INVERT        << RC_OUT_INV_COMPL_OUT_SHIFT))   |\
         ((uint32)(RC_OUT_PWM_MODE                << RC_OUT_MODE_SHIFT)))

#define RC_OUT_CTRL_PWM_RUN_MODE                                                              \
            ((uint32)(RC_OUT_PWM_RUN_MODE         << RC_OUT_ONESHOT_SHIFT))
            
#define RC_OUT_CTRL_PWM_ALIGN                                                                 \
            ((uint32)(RC_OUT_PWM_ALIGN            << RC_OUT_UPDOWN_SHIFT))

#define RC_OUT_CTRL_PWM_KILL_EVENT                                                            \
             ((uint32)(RC_OUT_PWM_KILL_EVENT      << RC_OUT_PWM_SYNC_KILL_SHIFT))

#define RC_OUT_CTRL_PWM_DEAD_TIME_CYCLE                                                       \
            ((uint32)(RC_OUT_PWM_DEAD_TIME_CYCLE  << RC_OUT_PRESCALER_SHIFT))

#define RC_OUT_CTRL_PWM_PRESCALER                                                             \
            ((uint32)(RC_OUT_PWM_PRESCALER        << RC_OUT_PRESCALER_SHIFT))

#define RC_OUT_CTRL_TIMER_BASE_CONFIG                                                         \
        (((uint32)(RC_OUT_TC_PRESCALER            << RC_OUT_PRESCALER_SHIFT))       |\
         ((uint32)(RC_OUT_TC_COUNTER_MODE         << RC_OUT_UPDOWN_SHIFT))          |\
         ((uint32)(RC_OUT_TC_RUN_MODE             << RC_OUT_ONESHOT_SHIFT))         |\
         ((uint32)(RC_OUT_TC_COMP_CAP_MODE        << RC_OUT_MODE_SHIFT)))
        
#define RC_OUT_QUAD_SIGNALS_MODES                                                             \
        (((uint32)(RC_OUT_QUAD_PHIA_SIGNAL_MODE   << RC_OUT_COUNT_SHIFT))           |\
         ((uint32)(RC_OUT_QUAD_INDEX_SIGNAL_MODE  << RC_OUT_RELOAD_SHIFT))          |\
         ((uint32)(RC_OUT_QUAD_STOP_SIGNAL_MODE   << RC_OUT_STOP_SHIFT))            |\
         ((uint32)(RC_OUT_QUAD_PHIB_SIGNAL_MODE   << RC_OUT_START_SHIFT)))

#define RC_OUT_PWM_SIGNALS_MODES                                                              \
        (((uint32)(RC_OUT_PWM_SWITCH_SIGNAL_MODE  << RC_OUT_CAPTURE_SHIFT))         |\
         ((uint32)(RC_OUT_PWM_COUNT_SIGNAL_MODE   << RC_OUT_COUNT_SHIFT))           |\
         ((uint32)(RC_OUT_PWM_RELOAD_SIGNAL_MODE  << RC_OUT_RELOAD_SHIFT))          |\
         ((uint32)(RC_OUT_PWM_STOP_SIGNAL_MODE    << RC_OUT_STOP_SHIFT))            |\
         ((uint32)(RC_OUT_PWM_START_SIGNAL_MODE   << RC_OUT_START_SHIFT)))

#define RC_OUT_TIMER_SIGNALS_MODES                                                            \
        (((uint32)(RC_OUT_TC_CAPTURE_SIGNAL_MODE  << RC_OUT_CAPTURE_SHIFT))         |\
         ((uint32)(RC_OUT_TC_COUNT_SIGNAL_MODE    << RC_OUT_COUNT_SHIFT))           |\
         ((uint32)(RC_OUT_TC_RELOAD_SIGNAL_MODE   << RC_OUT_RELOAD_SHIFT))          |\
         ((uint32)(RC_OUT_TC_STOP_SIGNAL_MODE     << RC_OUT_STOP_SHIFT))            |\
         ((uint32)(RC_OUT_TC_START_SIGNAL_MODE    << RC_OUT_START_SHIFT)))
        
#define RC_OUT_TIMER_UPDOWN_CNT_USED                                                          \
                ((RC_OUT__COUNT_UPDOWN0 == RC_OUT_TC_COUNTER_MODE)                  ||\
                 (RC_OUT__COUNT_UPDOWN1 == RC_OUT_TC_COUNTER_MODE))

#define RC_OUT_PWM_UPDOWN_CNT_USED                                                            \
                ((RC_OUT__CENTER == RC_OUT_PWM_ALIGN)                               ||\
                 (RC_OUT__ASYMMETRIC == RC_OUT_PWM_ALIGN))               
        
#define RC_OUT_PWM_PR_INIT_VALUE              (1u)
#define RC_OUT_QUAD_PERIOD_INIT_VALUE         (0x8000u)



#endif /* End CY_TCPWM_RC_OUT_H */

/* [] END OF FILE */
