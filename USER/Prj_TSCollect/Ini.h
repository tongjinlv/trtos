/*******************************************申明***************************************
本嵌入式操作系统未经授权，禁止应用于任何商业用途
版权所有，侵权必究
**************************************************************************************/
#define STM32F10X_HD
#define  USART_TX_BUFFER_SIZE 1000
#define  USART_RX_BUFFER_SIZE 300
#define  OSC_FREQ      ((uint32_t)8000000)
#define  Tos_TaskTotal            7      //任务池大小
#define  Tos_TaskStackDefSize     4000   //默认单个任务堆栈大小    
#define  Tos_RootTaskStackSize    1000
#define  Tos_DeviceTotal         10     //设备池大小
#define  Tos_TaskWatchDog        2000   //任务卡死复位时间
#define  Tos_Cpu_Freq						72000000	 //系统工作频率
#define  Board_Name            "唐山平车" 
#define  CPU_Model             "STM32F103VET6" 
#define  FLASH_PARAM_PAGE	     510
#define  CAN_DeviceTotal       10
#define  USART1_BaudRate       38400
#define IWDG_ENABLE 
#define COMPILE_MODE_DEBUG
