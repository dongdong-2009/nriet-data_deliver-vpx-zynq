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
	printf ("\r\n------------DATA_DELIVER-VPXģ��˵�������Ӧ���鿴��Ϣ--------------\r\n");
	usleep(_usec);
	printf("Keyboard-(1)	�鿴ö�����˽ṹ.\r\n");
	usleep(_usec);
	printf("Keyboard-(2)	�鿴ö��·�ɱ�.\r\n");
	usleep(_usec);
	printf("Keyboard-(3)	�鿴�ڲ��˿ڼ���ͳ��.\r\n");
	usleep(_usec);
	printf("Keyboard-(4)	���ÿ������Զ�ö��.\r\n");
	usleep(_usec);
	printf("Keyboard-(5)	���ý����ֶ�ö��.\r\n");
	usleep(_usec);
	printf("Keyboard-(6)	���ý����ֶ���ö��.\r\n");
	usleep(_usec);
	printf("Keyboard-(7)	�鿴�ڲ���·����������Ϣ.\r\n");
	usleep(_usec);
	printf("Keyboard-(8)	���ö˿ڼ�Lane��·����״̬�޸�.\r\n");
	usleep(_usec);
	printf("Keyboard-(9)	����TTLʹ�ܣ�TTLֵ��Ϊ32����.\r\n");
	usleep(_usec);
	printf("Keyboard-(0)	����TTL��ʹ��.\r\n");
	usleep(_usec);
	printf("Keyboard-(a)	�鿴���˿ڵ�������Ϣ.\r\n");
	usleep(_usec);
	printf("Keyboard-(b)	�鿴V7״̬\n");
	usleep(_usec);
	//printf("Keyboard-(c)	�鿴5396��·״̬\n");
	//usleep(_usec);
	printf("Keyboard-(c)	���ø��˿�����Ϊ3.125G.\r\n");
	usleep(_usec);
	printf("Keyboard-(d)	���ø��˿�����Ϊ5.0G.\r\n");
	usleep(_usec);
	printf("Keyboard-(e)	���ø��˿�����Ϊ6.25G.\r\n");
	usleep(_usec);
	printf("Keyboard-(q)	�˳��˵�ģʽ.\n");
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
			printf("******�鿴ö�����˽ṹ******\r\n");
			hlSrioTopoShow();
			sleep(1);
			printf("->");
		}
		else if (_recvData == '2')
		{
			printf("******�鿴ö��·�ɱ�******\r\n");
			hlSrioLUTShow();
			sleep(1);
			printf("->");
		}
		else if (_recvData == '3')
		{
			printf("******�鿴�ڲ��˿ڼ���ͳ��******\r\n");
			IIC_SrioPortStaticShow();
			sleep(1);
			printf("->");
		}
		else if (_recvData == '4')
		{
			printf("******���ÿ������Զ�ö��******\r\n");
			_flag = 0;
			sleep(1);
			printf("->");
		}
		else if (_recvData == '5')
		{
			printf("******���ý����ֶ�ö��******\r\n");
			hlSrioInit();
			sleep(1);
			printf("->");
		}
		else if (_recvData == '6')
		{
			printf("******���ý����ֶ���ö��******\r\n");
			hlSrioReInit();
			sleep(1);
			printf("->");
		}
		else if (_recvData == '7')
		{
			printf("******�鿴�ڲ���·����������Ϣ******\r\n");
			iic_SrioErrorDetect();
			sleep(1);
			printf("->");
		}
		else if (_recvData == '8')
		{
			printf("******���ö˿ڼ�Lane��·����״̬�޸�******\r\n");
			iic_SwPortRepair();
			iic_SwPortClear();
			sleep(1);
			printf("->");
		}
		else if (_recvData == '9')
		{
			printf("******����TTLʹ�ܣ�TTLֵ��Ϊ32����******\r\n");
			_ttl=0x4E200000;
			iic_TTL_csr(_ttl);
			sleep(1);
			printf("->");
		}
		else if (_recvData == '0')
		{
			printf("******����TTL��ʹ��******\r\n");
			_ttl=0;
			iic_TTL_csr(_ttl);
			sleep(1);
			printf("->");
		}
		else if (_recvData == 'a')
		{
			printf("******�鿴���˿ڵ�������Ϣ******\r\n");
			iic_SwPLLLaneShow();
			sleep(1);
			printf("->");
		}
		else if (_recvData == 'b')
		{
			printf("******�鿴V7״̬******\r\n");
			show_V7_info();
			sleep(1);
			printf("->");
		}
		else if (_recvData == 'i')
		{
			printf("******�鿴5396��·״̬******\r\n");
			//show_5396_lnk_stat();
			sleep(1);
			printf("->");
		}
		else if (_recvData == 'c')
		{
			printf("******���ý�������˿�����Ϊ3.125G******\r\n");
			iic_SwSpeedBaudSet(0);
			sleep(1);
			printf("->");
		}
		else if (_recvData == 'd')
		{
			printf("******���ø��˿�����Ϊ5G******\r\n");
			iic_SwSpeedBaudSet(1);
			sleep(1);
			printf("->");
		}
		else if (_recvData == 'e')
		{
			printf("******���ø��˿�����Ϊ6.25G******\r\n");
			iic_SwSpeedBaudSet(2);
			sleep(1);
			printf("->");
		}
		else if (_recvData == 'q')
		{
			printf("*******���棡�˳��˵�*******\n");
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




