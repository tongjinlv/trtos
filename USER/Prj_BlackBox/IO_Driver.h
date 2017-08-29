/*******************************************申明***************************************
本嵌入式操作系统未经授权，禁止应用于任何商业用途
版权所有，侵权必究
**************************************************************************************/
#ifndef _IO_DRIVER_H_
#define _IO_DRIVER_H_
#include <Include.h>



#define LED1_ON     GPIO_ResetBits(GPIOA,GPIO_Pin_8)
#define LED1_OFF    GPIO_SetBits(GPIOA,GPIO_Pin_8) 
#define LED2_ON    GPIO_ResetBits(GPIOC,GPIO_Pin_9)
#define LED2_OFF   GPIO_SetBits(GPIOC,GPIO_Pin_9)
#define K90        GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_7)
#define K00        GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_0)


void DeviceMount_Control(void);
void DeviceMount_Signel(void);

#endif
