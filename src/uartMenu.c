#include <stdio.h>
#include <unistd.h>

#include "show_v7.h"


extern int IicSelfTest();
extern void hlSrioInit();
extern void hlSrioTopoShow();
extern void hlSrioLUTShow();
extern void hlSrioReInit();
extern void IIC_SrioPortStaticShow();
extern void UartSetSrioDelay(unsigned short bEnum,int delay);
extern void iic_SrioErrorDetect();
extern void iic_SwPortRepair();
extern void iic_SwPortClear();
extern void iic_TTL_csr(unsigned int ttl_count);
extern void iic_SwSpeedBaudSet(unsigned int speedIndex);
extern void iic_SwPLLLaneShow();
//extern void show_1848_status();



void ShowTab()
{
	int _usec =8000;
	printf ("\r\n------------DATA_DELIVER-VPX模块菜单，按对应键查看信息--------------\r\n");
	usleep(_usec);
	printf("Keyboard-(1)	查看枚举拓扑结构.\r\n");
	usleep(_usec);
	printf("Keyboard-(2)	查看枚举路由表.\r\n");
	usleep(_usec);
	printf("Keyboard-(3)	查看内部端口计数统计.\r\n");
	usleep(_usec);
	printf("Keyboard-(4)	设置开机不自动枚举.\r\n");
	usleep(_usec);
	printf("Keyboard-(5)	设置进行手动枚举.\r\n");
	usleep(_usec);
	printf("Keyboard-(6)	设置进行手动重枚举.\r\n");
	usleep(_usec);
	printf("Keyboard-(7)	查看内部链路及错误监测信息.\r\n");
	usleep(_usec);
	printf("Keyboard-(8)	设置端口及Lane链路错误状态修复.\r\n");
	usleep(_usec);
	printf("Keyboard-(9)	设置TTL使能，TTL值设为32毫秒.\r\n");
	usleep(_usec);
	printf("Keyboard-(0)	设置TTL不使能.\r\n");
	usleep(_usec);
	printf("Keyboard-(a)	查看各端口的速率信息.\r\n");
	usleep(_usec);
	printf("Keyboard-(b)	查看V7状态\n");
	usleep(_usec);
	//printf("Keyboard-(c)	查看5396链路状态\n");
	//usleep(_usec);
	printf("Keyboard-(c)	设置各端口速率为3.125G.\r\n");
	usleep(_usec);
	printf("Keyboard-(d)	设置各端口速率为5.0G.\r\n");
	usleep(_usec);
	printf("Keyboard-(e)	设置各端口速率为6.25G.\r\n");
	usleep(_usec);
	printf("Keyboard-(q)	退出菜单模式.\n");
	usleep(_usec);
	printf("-----------------------------------------------------------------------------------------------\r\n");
	usleep(_usec);
}




void SlectUartMenu(void)
{
	unsigned char _recvData;
	unsigned int _bRunning;
	unsigned int _ttl;
	unsigned int _flag=0;

	_recvData = '0';
	_bRunning = 1;
	sleep(1);
	ShowTab();

	while(_bRunning)
	{
		_recvData = '0';
		_recvData = getchar();
		if (_recvData == '1')
		{
			printf("******查看枚举拓扑结构******\r\n");
			hlSrioTopoShow();
			sleep(1);
			printf("->");
		}
		else if (_recvData == '2')
		{
			printf("******查看枚举路由表******\r\n");
			hlSrioLUTShow();
			sleep(1);
			printf("->");
		}
		else if (_recvData == '3')
		{
			printf("******查看内部端口计数统计******\r\n");
			IIC_SrioPortStaticShow();
			sleep(1);
			printf("->");
		}
		else if (_recvData == '4')
		{
			printf("******设置开机不自动枚举******\r\n");
			_flag = 0;
			sleep(1);
			printf("->");
		}
		else if (_recvData == '5')
		{
			printf("******设置进行手动枚举******\r\n");
			hlSrioInit();
			sleep(1);
			printf("->");
		}
		else if (_recvData == '6')
		{
			printf("******设置进行手动重枚举******\r\n");
			hlSrioReInit();
			sleep(1);
			printf("->");
		}
		else if (_recvData == '7')
		{
			printf("******查看内部链路及错误监测信息******\r\n");
			iic_SrioErrorDetect();
			sleep(1);
			printf("->");
		}
		else if (_recvData == '8')
		{
			printf("******设置端口及Lane链路错误状态修复******\r\n");
			iic_SwPortRepair();
			iic_SwPortClear();
			sleep(1);
			printf("->");
		}
		else if (_recvData == '9')
		{
			printf("******设置TTL使能，TTL值设为32毫秒******\r\n");
			_ttl=0x4E200000;
			iic_TTL_csr(_ttl);
			sleep(1);
			printf("->");
		}
		else if (_recvData == '0')
		{
			printf("******设置TTL不使能******\r\n");
			_ttl=0;
			iic_TTL_csr(_ttl);
			sleep(1);
			printf("->");
		}
		else if (_recvData == 'a')
		{
			printf("******查看各端口的速率信息******\r\n");
			iic_SwPLLLaneShow();
			sleep(1);
			printf("->");
		}
		else if (_recvData == 'b')
		{
			printf("******查看V7状态******\r\n");
			show_V7_info();
			sleep(1);
			printf("->");
		}
		else if (_recvData == 'i')
		{
			printf("******查看5396链路状态******\r\n");
			//show_5396_lnk_stat();
			sleep(1);
			printf("->");
		}
		else if (_recvData == 'c')
		{
			printf("******设置交换板各端口速率为3.125G******\r\n");
			iic_SwSpeedBaudSet(0);
			sleep(1);
			printf("->");
		}
		else if (_recvData == 'd')
		{
			printf("******设置各端口速率为5G******\r\n");
			iic_SwSpeedBaudSet(1);
			sleep(1);
			printf("->");
		}
		else if (_recvData == 'e')
		{
			printf("******设置各端口速率为6.25G******\r\n");
			iic_SwSpeedBaudSet(2);
			sleep(1);
			printf("->");
		}
		else if (_recvData == 'q')
		{
			printf("*******警告！退出菜单*******\n");
			break;
		}
		else if(_recvData == '\n'||_recvData == '\r')
		{
			ShowTab();
			sleep(1);
			printf("->");
		}
	}
}




