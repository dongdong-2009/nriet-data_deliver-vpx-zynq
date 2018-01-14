#ifndef _GPIO_H_
#define _GPIO_H_

#include "xparameters.h"
//base addr

#define GPIO_CFG_ADDR  XPAR_V7_CFG_EN_BASEADDR
#define GPIO_DONE_ADDR XPAR_V7_CFG_DONE_BASEADDR
#define XGPIO_DATA_OFFSET 0x0
#define XGPIO_TRI_OFFSET 0x4


#define GPIO_BASE_ADDR XPAR_AXI_GPIO_0_BASEADDR

//#define GPIO_RESET_ADDR XPAR_AXI_GPIO_RST_B_BASEADDR


void SetGpioReg(unsigned int addrBase,unsigned int addrOffset,unsigned int value);
int GetGpioReg(unsigned int addrBase,unsigned int addrOffset);

#endif /* UART_H_ */
