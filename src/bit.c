/*
 * bit.c
 *
 *  Created on: 2017Äê9ÔÂ20ÈÕ
 *      Author: Administrator
 */

#include "bit.h"
#include "show_v7.h"
#include <stdio.h>
//#include "xadc_core.h"

extern unsigned int g_temp[10];

extern unsigned int g_vcc[14];

void Show_bit()
{
	u8 uartData1[32];
	float temp,v_int,v_aux;
	int Delay=0;

	float Temp[18];

	/*get zynq info*/
	Temp[0] = get_temp(0);
	printf("[1]##Current Board Temperature[#2] is %.2f Centigrade.\n",Temp[0]);
	g_temp[0]=(unsigned int)Temp[0];

	Temp[1] = get_temp(1);
	printf("[2]##Current Board Temperature[#1] is %.2f Centigrade.\n",Temp[1]);
	g_temp[1]=(unsigned int)Temp[1];

	Temp[2] = get_temp(2);
	printf("[3]##Current Temperature[LTM4650#1] is %.2f Centigrade.\n",Temp[2]);
	g_temp[2]=(unsigned int)Temp[2];

	Temp[3] = get_temp(3);
	printf("[4]##Current Temperature[LTM4650#3] is %.2f Centigrade.\n",Temp[3]);
	g_temp[3]=(unsigned int)Temp[3];

	Temp[4] = get_temp(4);
	printf("[5]##Current Temperature[LTM4650#2] is %.2f Centigrade.\n",Temp[4]);
	g_temp[4]=(unsigned int)Temp[4];

	Temp[5] = get_temp(5);
	printf("[6]##Current Temperature[LTM4644] is %.2f Centigrade.\n",Temp[5]);
	g_temp[5]=(unsigned int)Temp[5];




	Temp[6] =get_vcc(0)*3/4;
	printf("[7]##voltage of (VDD1V5) is  %.2f Volts.\n",Temp[6]);
	g_vcc[0]=(unsigned int)Temp[6];

	Temp[7] = get_vcc(1)*5.7/5;
	printf("[8]##voltage of (VDD2V5) is  %.2f Volts.\n",Temp[7]);
	g_vcc[1]=(unsigned int)Temp[7];

	Temp[8] = get_vcc(2)/2;
	printf("[9]##voltage of (MGTAVCC_V7_1V) is  %.2f Volts.\n",Temp[8]);
	g_vcc[2]=(unsigned int)Temp[8];

	Temp[9] = get_vcc(3)*2/3;
	printf("[10]##voltage of (VDD_SRIO#1_1V2) is  %.2f Volts.\n",Temp[9]);
	g_vcc[3]=(unsigned int)Temp[9];

	Temp[10] = get_vcc(4)*3/5;
	printf("[11]##voltage of (MGTAVCC_V7_1V) is  %.2f Volts.\n",Temp[10]);
	g_vcc[4]=(unsigned int)Temp[10];

	Temp[11] =get_vcc(5)/2;
	printf("[12]##voltage of (VDD_CPS1848_1V) is  %.2f Volts.\n",Temp[11]);
	g_vcc[5]=(unsigned int)Temp[11];

	Temp[12] =get_vcc(6)*2;
	printf("[13]##voltage of (VDD3V3) is  %.2f Volts.\n",Temp[12]);
	g_vcc[6]=(unsigned int)Temp[12];

	Temp[13] =get_vcc(7)*1.2;
	printf("[14]##voltage of (VDD2V) is  %.2f Volts.\n",Temp[13]);
	g_vcc[7]=(unsigned int)Temp[13];

	Temp[14] =get_vcc(8)/3*2;
	printf("[15]##voltage of (VDD_SRIO#2_1V2) is  %.2f Volts.\n",Temp[14]);
	g_vcc[8]=(unsigned int)Temp[14];

	Temp[15] =get_vcc(9)/3*2;
	printf("[16]##voltage of (VDD_BCM5396_1V2) is  %.2f Volts.\n",Temp[15]);
	g_vcc[9]=(unsigned int)Temp[15];

	Temp[16] =get_vcc(10)/3*2;
	printf("[17]##voltage of (MGTAVCC_V7_1V2) is  %.2f Volts.\n",Temp[16]);
	g_vcc[10]=(unsigned int)Temp[16];

#if 1

	printf("******v7 info******\n");
	/*get v7 info*/
	XUartLite_read(FIRST_V7_ARRD,uartData1,0x70);
	temp = (uartData1[7] * 255.0 + uartData1[8])*503.975/4096-273.15;
	printf("v7 temp %.2f !\r\n",temp);
	g_temp[6]=(unsigned int)temp+100;

	XUartLite_read(FIRST_V7_ARRD,uartData1,0x71);
	v_aux = (uartData1[5] * 255.0 + uartData1[6])*3/4096;
	g_vcc[11]=(unsigned int)v_aux;
	v_int = (uartData1[7] * 255.0 + uartData1[8])*3/4096;
	g_vcc[12]=(unsigned int)v_int;
	printf("v7 v_int %.2f; v_aux %.2f !\r\n",v_int,v_aux);

    for (Delay = 0; Delay < LED_DELAY*30; Delay++);
#endif

    printf("********************\n");
	return ;

}


