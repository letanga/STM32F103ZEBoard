#ifndef __LED_H__
#define __LED_H__

#include "MyApplication.h"

//定义枚举类型
typedef enum
{
	LED1 = (uint8_t)0x01,
	LED2 = (uint8_t)0x02,
	LED3 = (uint8_t)0x03,
}LED_Num_t;

//定义结构体类型

/* extern variables-----------------------------------------------------------*/

/* extern function prototypes-------------------------------------------------*/
extern void LED_ON(LED_Num_t); 
extern void LED_OFF(LED_Num_t);
extern void LED_Flip(LED_Num_t);
#endif
/********************************************************
  End Of File
********************************************************/
