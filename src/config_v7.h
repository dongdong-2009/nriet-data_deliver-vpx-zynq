/*
 * config_v7.h
 *
 *  Created on: 2017Äê8ÔÂ17ÈÕ
 *      Author: Administrator
 */

#ifndef CONFIG_V7_H_
#define CONFIG_V7_H_

#include "xparameters.h"

typedef unsigned int u32;
typedef unsigned char u8;

//#define MACROCONNECT(a,b) a##b

#define XPAR_V7_CFG_FIFO0_BASEADDR XPAR_V7_CFG_FIFO_BASEADDR


#define FIFO_ISR_ADDR0 XPAR_V7_CFG_FIFO0_BASEADDR


#define FIFO_IER_ADDR0 XPAR_V7_CFG_FIFO0_BASEADDR+0x4


#define FIFO_TDFD_ADDR0 XPAR_V7_CFG_FIFO0_BASEADDR+0x10


#define FIFO_TLR_ADDR0 XPAR_V7_CFG_FIFO0_BASEADDR+0x14


#define FIFO_TDR_ADDR0 XPAR_V7_CFG_FIFO0_BASEADDR+0x2C


int Config_V7(unsigned int *src_addr, int data_size_byte);


#endif /* CONFIG_V7_H_ */
