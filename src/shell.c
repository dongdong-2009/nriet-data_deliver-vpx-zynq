/*
 * shell.c
 *
 *  Created on: 2017Äê9ÔÂ20ÈÕ
 *      Author: Administrator
 */


#include "shell.h"

#include <stdio.h>
#include <string.h>



void config_ip(unsigned int *ipaddr)
{
	char cmdline[100];
	int ip1,ip2,ip3,ip4;
	ip1=ipaddr[0];
	ip2=ipaddr[1];
	ip3=ipaddr[2];
	ip4=ipaddr[3];
	sprintf(cmdline,"sh /usr/bin/ipaddr.sh %d %d %d %d",ip1,ip2,ip3,ip4);
	system(cmdline);
}




