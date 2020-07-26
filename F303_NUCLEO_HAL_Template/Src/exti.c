
#include "exti.h"

void KEY_EXTI_Config(void)
{
    GPIO_InitTypeDef GPIO_InitStructure; 

	__HAL_RCC_GPIOC_CLK_ENABLE();
 
    GPIO_InitStructure.Pin = GPIO_PIN_13;
    GPIO_InitStructure.Mode = GPIO_MODE_IT_FALLING;	    		
    GPIO_InitStructure.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(GPIOC, &GPIO_InitStructure); 
	
    HAL_NVIC_SetPriority(EXTI15_10_IRQn, 0, 0);
    HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);
}

