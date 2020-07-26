

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __systick_H
#define __systick_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"


void SysTick_Init(void);
void Delay_ms(__IO uint32_t nTime);
void TimingDelay_Decrement(void);


#ifdef __cplusplus
}
#endif
#endif 


