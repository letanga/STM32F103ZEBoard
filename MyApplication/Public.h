#ifndef __PUBLIC_H_
#define __PUBLIC_H_

/* Includes ------------------------------------------------------------------*/

#include "stdint.h"

/* Public define-------------------------------------------------------------*/
#define SoftWare_Version 	(float)1.0
#define	huart_debug		huart1

//定义枚举类型 -> TRUE/FALSE位
typedef enum 
{
  FALSE = 0U, 
  TRUE = !FALSE
} FlagStatus_t;


typedef enum 
{
  FAILED = 0U, 
  PASSED = !FAILED
} TestStatus_t;
//定义结构体类型

/* extern variables-----------------------------------------------------------*/

extern uint8_t UART_REC[50];
extern uint8_t UART_TMP[1];
extern uint8_t UART_FLAG;
extern uint8_t UART_CNT;

/*******预编译宏定义*******/
//#define Monitor_Run_Code   //代码运行监控器 
//#define Hardware_TEST      //硬件测试

#endif
/********************************************************
  End Of File
********************************************************/
