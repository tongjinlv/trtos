/*******************************************申明***************************************
本嵌入式操作系统未经授权，禁止应用于任何商业用途
版权所有，侵权必究
**************************************************************************************/
#ifndef _APP2_H_
#define _APP2_H_
#include <Include.h>


void Task_SaveConfigs(void);
void Task_LoadConfigs(void);
void Task_BackConfigs(void);
void Task_ReBackConfigs(void);
void Task_SaveNandConfig(void);
void Task_LoadNandConfig(void);
#endif
