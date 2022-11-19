#ifndef __Buzzer_H__
#define __Buzzer_H__

#include "MyApplication.h"

//����ö������
typedef enum
{
	BuzzerStatus_ON  = (uint8_t)0x01,
	BuzzerStatus_OFF = (uint8_t)0x02,
}Buzzer_Status_t;

//����ṹ������
typedef struct
{
	uint8_t Status;       //״̬
} Buzzer_t;

/* extern variables-----------------------------------------------------------*/
extern Buzzer_t  Buzzer;
/* extern function prototypes-------------------------------------------------*/

extern void Buzzer_ON(void); 
extern void Buzzer_OFF(void);
extern void Buzzer_SetFreq(uint16_t frequency);


#endif
/********************************************************
  End Of File
********************************************************/
