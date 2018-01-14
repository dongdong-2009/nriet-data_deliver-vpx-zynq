/*
 * Copyright (c) 2012 Xilinx, Inc.  All rights reserved.
 *
 * Xilinx, Inc.
 * XILINX IS PROVIDING THIS DESIGN, CODE, OR INFORMATION "AS IS" AS A
 * COURTESY TO YOU.  BY PROVIDING THIS DESIGN, CODE, OR INFORMATION AS
 * ONE POSSIBLE   IMPLEMENTATION OF THIS FEATURE, APPLICATION OR
 * STANDARD, XILINX IS MAKING NO REPRESENTATION THAT THIS IMPLEMENTATION
 * IS FREE FROM ANY CLAIMS OF INFRINGEMENT, AND YOU ARE RESPONSIBLE
 * FOR OBTAINING ANY RIGHTS YOU MAY REQUIRE FOR YOUR IMPLEMENTATION.
 * XILINX EXPRESSLY DISCLAIMS ANY WARRANTY WHATSOEVER WITH RESPECT TO
 * THE ADEQUACY OF THE IMPLEMENTATION, INCLUDING BUT NOT LIMITED TO
 * ANY WARRANTIES OR REPRESENTATIONS THAT THIS IMPLEMENTATION IS FREE
 * FROM CLAIMS OF INFRINGEMENT, IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <linux/kernel.h>
#include <linux/ioctl.h>
#include <linux/i2c.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <stdint.h>
#include<stdlib.h>
#include "iic_1848.h"
#include "config_v7.h"
#include "gpio.h"
#include "show_v7.h"
#include "bit.h"
#include "shell.h"

extern void hlSrioInit();
extern int Init_1848();

extern void SlectUartMenu(void);
extern void NetInit(unsigned int chasisNum,unsigned int slotNum);
extern int Config_V7();

extern int Xil_In32(uint64_t phyaddr);
extern void Xil_Out32(uint64_t phyaddr, uint32_t val);

extern int IicSelfTest();
extern void iic_SrioErrorDetect();

extern void iic_SwSpeedBaudSetZ7(unsigned int speedIndex);
extern void iic_SwSpeedBaudSet(unsigned int speedIndex);

unsigned int g_slotNum = 6;
unsigned int g_chasisNum = 0;
unsigned int g_ipAddr[4];

unsigned short *file_mem_addr = NULL;
unsigned int g_temp[10];
unsigned int g_vcc[14];

void SetGpioReg(unsigned int addrBase,unsigned int addrOffset,unsigned int value)
{
	Xil_Out32(addrBase+addrOffset, value);
}

int GetGpioReg(unsigned int addrBase,unsigned int addrOffset)
{
	int ans=0;
	ans=Xil_In32(addrBase+addrOffset);
	return ans;
}

//get v7 configuration file size
unsigned long get_file_size(const char *path)
{
    unsigned long filesize = -1;
    struct stat statbuff;
    if(stat(path, &statbuff) < 0){
        return filesize;
    }else{
        filesize = statbuff.st_size;
    }
    return filesize;
}

int main()
{
	unsigned int _speed = 0;
	unsigned int _SrioDelayTime = 25;
	unsigned short _bSrio=1;
	unsigned int _ret=0,_data=0;
	int status=0;
	int flag=0;
	unsigned int file_size=0;
	FILE *pFile = NULL;
	FILE *pFile1 = NULL;
	pid_t fpid;

	printf("\r\n-----------------Linux DATA_DELIVER_App start(Version 1.0)-------------------\r\n");


	/*读取槽位号机箱号*/
	SetGpioReg(GPIO_BASE_ADDR,0x4,0xFFFFFFFF);
	_data = GetGpioReg(GPIO_BASE_ADDR,0x0);
	g_chasisNum = (_data & 0x1e0)>>5;
	g_slotNum = ~_data & 0x1f;
	printf("chassisNum = %d, slotNum = %d\r\n",g_chasisNum,g_slotNum);

	/*初始化1848*/
	Init_1848();



	/*读取端口速度配置*/
	pFile1 = fopen("/home/root/nor_flash/speed.txt","r");
	if( pFile1 == NULL )
	{
		printf("打开速度配置文件speed.txt失败，设置默认速度为3.125G.\n");
		_speed = 0;
	}
	else
	{
		fread((void*)&_speed,1,1,pFile1);
		_speed=_speed&0x0000000f;
		fclose( pFile1 );
	}

	if( _speed == 0 )	//3.125G
	{
		iic_SwSpeedBaudSet(0);
	}
	else if( _speed == 1 )	//5.0G
	{
		iic_SwSpeedBaudSet(1);
	}
	else
	{
		iic_SwSpeedBaudSet(2);
	}

	//set Z7 port speed to 3.125G
	iic_SwSpeedBaudSetZ7(0);

   	//使能端口统计
   	iic_SwPortCounterEnable();
   	//错误检测
	iic_SrioErrorDetect();
	//修链路状态
	iic_SwPortRepair();
	//清除错误状态
	iic_SwPortClear();


#if 1

//	SetGpioReg(GPIO_CFG_ADDR,0x4, 0x00000000U);
//	SetGpioReg(GPIO_CFG_ADDR, 0x0, 0x00000000U);
//	SetGpioReg(GPIO_DONE_ADDR,0x4, 0xFFFFFFFFU);

	/******配置V7******/
	file_mem_addr = (unsigned short *)malloc(29*1024*1024*sizeof(char));
	printf("mem allocated ok!\n");
	file_size=get_file_size("/home/root/config_flash/v7.bin");
	printf("v7 dat file size is %d\n",file_size);

	pFile = fopen("/home/root/config_flash/v7.bin","rb");
	if( pFile == NULL )
	{
		printf("打开V7配置文件失败.\n");
	}
	else
	{
		flag=1;
		printf("copy v7 data to memory\n");
		fread(file_mem_addr,sizeof(unsigned short),file_size,pFile);
		fclose( pFile );
	}
	if(flag==1)
	{
		printf("config v7\n");
		status=Config_V7((unsigned int *)file_mem_addr, file_size);
	}
	if(status==0)
	{
		printf("V7 configure success\n");
	}
	else
	{
		printf("config v7 failed!\n");
	}
	free(file_mem_addr);
#endif

#if 1
	/******配置网络******/
	NetInit(g_chasisNum,g_slotNum);
#endif


	fpid = fork();
	if( fpid <0 )
	{
		printf("fork error!\n");
	}
	else if( fpid == 0 )			//子任务
	{
		while(1)
		{
			Show_bit();
			IicSelfTest();			//i2c自检上报
			sleep(10);
		}
	}
	else
	{
		SlectUartMenu();
	}
    return 0;
}



