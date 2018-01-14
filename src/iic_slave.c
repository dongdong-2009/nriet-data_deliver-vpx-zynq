#include "xil_io.h"
#include "iic_slave.h"
//#include "xadc_core.h"
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <dirent.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <ctype.h>
#include <pthread.h>
#include <assert.h>

#include "xparameters.h"

extern unsigned int get_1848_reg(int num,unsigned int offset);

extern unsigned int g_temp[10];
extern unsigned int g_vcc[14];

unsigned char SendBuffer[BUFFER_SIZE];
int g_sw1848PortStatus[3] = {0};

void xil_setreg32(unsigned int addrBase,unsigned int addrOffset,unsigned int value)
{
	Xil_Out32(addrBase+addrOffset, value);
}

int xil_getreg32(unsigned int addrBase,unsigned int addrOffset)
{
	int ans=0;
	ans=Xil_In32(addrBase+addrOffset);
	return ans;
}

#if 0
//reset
void GpioReset()
{
	xil_setreg32(GPIO_I2C_RESET_ADDR,0x4,0x0);
	xil_setreg32(GPIO_I2C_RESET_ADDR,0x0,0x2);
	//printf("gpio reset ok!\n");
}
#endif

void uart_setreg32(unsigned int addrBase,unsigned int addrOffset,unsigned int value)
{
	Xil_Out32(addrBase+addrOffset, value);
}

int uart_getreg32(unsigned int addrBase,unsigned int addrOffset)
{
	int ans=0;
	ans=Xil_In32(addrBase+addrOffset);
	return ans;
}

void iic_write()
{
	unsigned int _data;

	memcpy((void*)&_data,&SendBuffer[0],4);
	xil_setreg32(XPAR_AXI_BRAM_CTRL_I2C_S_AXI_BASEADDR,0,_data);
	memcpy((void*)&_data,&SendBuffer[4],4);
	xil_setreg32(XPAR_AXI_BRAM_CTRL_I2C_S_AXI_BASEADDR,4,_data);
	memcpy((void*)&_data,&SendBuffer[8],4);
	xil_setreg32(XPAR_AXI_BRAM_CTRL_I2C_S_AXI_BASEADDR,8,_data);
	memcpy((void*)&_data,(void*)&SendBuffer[12],4);
	xil_setreg32(XPAR_AXI_BRAM_CTRL_I2C_S_AXI_BASEADDR,12,_data);
	memcpy((void*)&_data,(void*)&SendBuffer[16],4);
	xil_setreg32(XPAR_AXI_BRAM_CTRL_I2C_S_AXI_BASEADDR,16,_data);
	memcpy((void*)&_data,(void*)&SendBuffer[20],4);
	xil_setreg32(XPAR_AXI_BRAM_CTRL_I2C_S_AXI_BASEADDR,20,_data);
	memcpy((void*)&_data,(void*)&SendBuffer[24],4);
	xil_setreg32(XPAR_AXI_BRAM_CTRL_I2C_S_AXI_BASEADDR,24,_data);
	memcpy((void*)&_data,(void*)&SendBuffer[28],4);
	xil_setreg32(XPAR_AXI_BRAM_CTRL_I2C_S_AXI_BASEADDR,28,_data);
}

int IicSelfTest()
{
	unsigned int zynq_temp,temp_1,temp_2,temp_3,temp_4,temp_5,v7_temp;
	unsigned char volt1,volt2,volt3,volt4,volt5,volt6,volt7,volt8,volt9,volt10,volt11,volt_v7_int,volt_v7_aux;

	zynq_temp=g_temp[0];
	temp_1=g_temp[1];
	temp_2=g_temp[2];
	temp_3=g_temp[3];
	temp_4=g_temp[4];
	temp_5=g_temp[5];
	v7_temp=g_temp[6];

	volt1=g_vcc[0];
	volt2=g_vcc[1];
	volt3=g_vcc[2];
	volt4=g_vcc[3];
	volt5=g_vcc[4];
	volt6=g_vcc[5];
	volt7=g_vcc[6];
	volt8=g_vcc[7];
	volt9=g_vcc[8];
	volt10=g_vcc[9];
	volt11=g_vcc[10];
	volt_v7_int=g_vcc[11];
	volt_v7_aux=g_vcc[12];

	SendBuffer[0] = 0xa;
	SendBuffer[1] = 0x55;
	SendBuffer[2] = 0x4e;
	SendBuffer[3] = 0x2;
	SendBuffer[4] = 0;
	SendBuffer[5] = 0;
	SendBuffer[6] = zynq_temp;
	SendBuffer[7] = temp_1;
	SendBuffer[8] = temp_2;
	SendBuffer[9] = temp_3;
	SendBuffer[10] = temp_4;
	SendBuffer[11] = temp_5;
	SendBuffer[12] = v7_temp;

	SendBuffer[13] = volt1;
	SendBuffer[14] = volt2;
	SendBuffer[15] = volt3;
	SendBuffer[16] = volt4;
	SendBuffer[17] = volt5;
	SendBuffer[18] = volt6;
	SendBuffer[19] = volt7;
	SendBuffer[20] = volt8;
	SendBuffer[21] = volt9;
	SendBuffer[22] = volt10;
	SendBuffer[23] = volt11;
	SendBuffer[24] = volt_v7_int;
	SendBuffer[25] = volt_v7_aux;

//	GpioReset();

	iic_write();

	return 1;
}

