#ifndef _VTAL_LOW_LEVEL_TIMER_ARCH_H_
#define _VTAL_LOW_LEVEL_TIMER_ARCH_H_


/*  Standard Intefaces for any low level implementation */


#ifdef __cplusplus
extern "C" {
#endif


void HTAL_startPhysicalTimer(unsigned long timePeriodMilliSec,
                             void (*userTimerCallBack)(void *),
                             void* userTimerCallbackArg);

void HTAL_stopPhysicalTimer(void);

void HTAL_changeUserTimerCallBack(void (*userTimerCallBack)(void *),
                                  void *userTimerCallbackArg);

void HTAL_updateVirtualTimersList(void(*VTAL_updateCallBack)(void));


#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /*   _VTAL_LOW_LEVEL_TIMER_ARCH_H_   */