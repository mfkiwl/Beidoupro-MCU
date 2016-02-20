/*************************************************************************************************************
*                                                  MODULE                                                    *
*************************************************************************************************************/
#ifndef OS_HOOK_H
#define OS_HOOK_H

#ifdef __cplusplus
extern "C" {
#endif


/*************************************************************************************************************
*                                              INCLUDE FILES                                                 *
*************************************************************************************************************/
#include <dev.h>
    

/*************************************************************************************************************
*                                            FUNCTION STATEMENT                                              *
*************************************************************************************************************/
void App_TimeTickHook (void);
void App_TaskSwHook (void);
void App_TaskCreateHook (void  *tcb);
void App_TCBInitHook (void  *tcb);                                                     
void App_TaskStatHook (void);
void App_TaskIdleHook (void);
void App_TaskDelHook (void  *tcb);
void App_TaskReturnHook (void  *tcb);


/*************************************************************************************************************
*                                               MODULE END                                                   *
*************************************************************************************************************/
#ifdef __cplusplus
}
#endif

#endif