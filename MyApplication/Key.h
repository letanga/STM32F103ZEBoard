#ifndef __KEY_H__
#define __KEY_H__

#include "MyApplication.h"

//定义结构体类型
typedef struct
{
	uint8_t  volatile KEY_Flag;  //按键标志位
	uint8_t  Click;              //单击
	uint8_t  Press;              //长按
} KEY_t;

/* extern variables-----------------------------------------------------------*/
extern KEY_t   KEY1;
extern KEY_t   KEY2;
extern KEY_t   KEY3;
extern KEY_t   KEY4;

/* extern function prototypes-------------------------------------------------*/

extern void KEY1_Detect(void);
extern void KEY2_Detect(void);
extern void KEY3_Detect(void);
extern void KEY4_Detect(void);

#endif
/********************************************************
  End Of File
********************************************************/
