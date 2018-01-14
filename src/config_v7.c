/*
 * config_v7.c
 *
 *  Created on: 2017Äê8ÔÂ17ÈÕ
 *      Author: Administrator
 */

#include "config_v7.h"
#include "gpio.h"
#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>
#include "xil_io.h"


#define PAGE_SIZE_FIFO  ((size_t)getpagesize())
#define PAGE_MASK_FIFO ((uint64_t) (long)~(PAGE_SIZE_FIFO - 1))


//config v7 using fifo
int Config_V7(unsigned int *src_addr, int data_size_byte)
{
	int i,j;
	int val=0;
	int timedelay=0;
	struct timeval tBegin,tEnd;
	long deltatime=0;
	u32 tmp_data;


	SetGpioReg(GPIO_CFG_ADDR,XGPIO_DATA_OFFSET,0x00000000);
	SetGpioReg(GPIO_CFG_ADDR,XGPIO_DATA_OFFSET,0xffffffff);
	SetGpioReg(GPIO_CFG_ADDR,XGPIO_DATA_OFFSET,0x00000000);
	SetGpioReg(GPIO_CFG_ADDR,XGPIO_DATA_OFFSET,0xffffffff);
	SetGpioReg(GPIO_CFG_ADDR,XGPIO_DATA_OFFSET,0x00000000);
	SetGpioReg(GPIO_CFG_ADDR,XGPIO_DATA_OFFSET,0xffffffff);
	SetGpioReg(GPIO_CFG_ADDR,XGPIO_DATA_OFFSET,0x00000000);
	SetGpioReg(GPIO_CFG_ADDR,XGPIO_DATA_OFFSET,0xffffffff);
	SetGpioReg(GPIO_CFG_ADDR,XGPIO_DATA_OFFSET,0x00000000);

	SetGpioReg(FIFO_ISR_ADDR0,0,0xffffffff);

	SetGpioReg(FIFO_TDR_ADDR0,0,0x00000002);

	tmp_data=data_size_byte;
	SetGpioReg(FIFO_TDFD_ADDR0,0,tmp_data);

	SetGpioReg(FIFO_TLR_ADDR0,0,0x00000004);


	printf("******write flash data\n");

	gettimeofday(&tBegin,NULL);

	//mmap address of fifo
	int fd;
	volatile uint8_t *map_base0;


	uint64_t base0 = FIFO_TDFD_ADDR0 & PAGE_MASK_FIFO;

	uint64_t pgoffset0 = FIFO_TDFD_ADDR0 & (~PAGE_MASK_FIFO);

	if((fd = open("/dev/mem", O_RDWR | O_SYNC)) == -1)
	{
		perror("open /dev/mem:");
	}

	map_base0 = mmap(NULL, PAGE_SIZE_FIFO, PROT_READ | PROT_WRITE, MAP_SHARED,
			fd, base0);

	if(map_base0 == MAP_FAILED )
	{
		perror("mmap:");
	}

	printf("FIFO  mapped addr is:0x%x\n",(unsigned int)(map_base0 + pgoffset0));

	close(fd);

	//write data to fifo unit 1024 bytes
	for(i=0; i<data_size_byte/4-1024; i+=1024)
	{
		val=Xil_In32((unsigned int)(FIFO_ISR_ADDR0));
		while((val & 0x08000000) == 0)
		{
			val=Xil_In32((unsigned int)(FIFO_ISR_ADDR0));
		}

		SetGpioReg(FIFO_ISR_ADDR0,0,0xffffffff);
		SetGpioReg(FIFO_TDR_ADDR0,0,0x00000002);

		for(j=0;j<1024;j++)
		{
			*(volatile uint32_t *)(map_base0 + pgoffset0)=*((u32*)(src_addr + i +j));
		}
		SetGpioReg(FIFO_TLR_ADDR0,0,0x00001000);
	}

	//FIFO 0 FOR FIRST V7
	val=Xil_In32((unsigned int)(FIFO_ISR_ADDR0));
	while((val & 0x08000000) == 0)
	{
		val=Xil_In32((unsigned int)(FIFO_ISR_ADDR0));
	}

	SetGpioReg(FIFO_ISR_ADDR0,0,0xffffffff);
	SetGpioReg(FIFO_TDR_ADDR0,0,0x00000002);

	for(j=i;j<data_size_byte/4;j++)
	{
		*(volatile uint32_t *)(map_base0 + pgoffset0)=*((u32*)(src_addr +j));

	}
	SetGpioReg(FIFO_TLR_ADDR0,0,data_size_byte-i*4);

	munmap((void *)map_base0, PAGE_SIZE_FIFO);

	//WAIT FOR FIFO DONE
	val=Xil_In32((unsigned int)(FIFO_ISR_ADDR0));
	while((val & 0x08000000) == 0)
	{
		val=Xil_In32((unsigned int)(FIFO_ISR_ADDR0));
	}


	gettimeofday(&tEnd,NULL);
	deltatime=1000000L*(tEnd.tv_sec-tBegin.tv_sec)+(tEnd.tv_usec-tBegin.tv_usec);

	printf("time spent in writing data to v7 is: %ldus\n",deltatime);

	val=GetGpioReg(GPIO_DONE_ADDR,0);
	while(val== 0)
	{
		timedelay += 1;
		val=GetGpioReg(GPIO_DONE_ADDR,0);
		if (timedelay >= 200000000)
		{
			printf("done up timeout! config failed!!!!!\n");
			return 1;
		}
	}
	return 0;
}
