#ifndef __Relay_H__
#define __Relay_H__

#include "stdint.h"
//����ö������
typedef enum 
{
  RelayStatus_ON  = (uint8_t)0x01,
	RelayStatus_OFF = (uint8_t)0x02,
} RelayStatus_t;

//����ṹ������
typedef struct
{
	uint8_t Relay_Status;
} Relay_t;

/* extern variables-----------------------------------------------------------*/
extern Relay_t  Relay;
/* extern function prototypes-------------------------------------------------*/

extern void Relay_ON(void); 
extern void Relay_OFF(void);
extern void Relay_Flip(void);



#endif
/********************************************************
  End Of File
********************************************************/
