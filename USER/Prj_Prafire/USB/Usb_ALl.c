/*******************************************申明***************************************
本嵌入式操作系统未经授权，禁止应用于任何商业用途
版权所有，侵权必究
http://www.trtos.com/
**************************************************************************************/
//usb库文件
#include <..\USB\JoystickUsb\STM32_USB-FS-Device_DriverV3.1.1\src\usb_core.c>
#include <..\USB\JoystickUsb\STM32_USB-FS-Device_DriverV3.1.1\src\usb_init.c>
#include <..\USB\JoystickUsb\STM32_USB-FS-Device_DriverV3.1.1\src\usb_int.c>
#include <..\USB\JoystickUsb\STM32_USB-FS-Device_DriverV3.1.1\src\usb_mem.c>
#include <..\USB\JoystickUsb\STM32_USB-FS-Device_DriverV3.1.1\src\usb_regs.c>
#include <..\USB\JoystickUsb\STM32_USB-FS-Device_DriverV3.1.1\src\usb_sil.c>
//应用
#include <..\USER\Prj_Prafire\USB\usb_istr.c>
#include <..\USER\Prj_Prafire\USB\hw_config.c>
#include <..\USER\Prj_Prafire\USB\usb_desc.c>
#include <..\USER\Prj_Prafire\USB\usb_prop.c>
#include <..\USER\Prj_Prafire\USB\usb_pwr.c>
#include <..\USER\Prj_Prafire\USB\Usb_App.c>
