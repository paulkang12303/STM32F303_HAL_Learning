
#ifndef __usart_H
#define __usart_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include <stdio.h>

	 
extern UART_HandleTypeDef huart2;

void DEBUG_USART2_Config(void);


#ifdef __cplusplus
}
#endif
#endif /*__ usart_H */

