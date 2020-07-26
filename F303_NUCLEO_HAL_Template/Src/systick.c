
#include "systick.h"

static __IO uint32_t TimeDelay;

void SysTick_Init(void)
{
	if (HAL_SYSTICK_Config(SystemCoreClock / 1000))
	{ 
		Error_Handler();
	}
}


void Delay_ms(__IO uint32_t nTime)
{ 
	TimeDelay = nTime;	
	while(TimeDelay != 0);
}


void TimingDelay_Decrement(void)
{
	if (TimeDelay != 0x00)
	{ 
		TimeDelay--;
	}
}