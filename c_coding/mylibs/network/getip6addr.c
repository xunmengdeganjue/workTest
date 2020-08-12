/************************************************************
  Copyright (C), 2017, Leon, All Rights Reserved.
FileName: get_if_addr.c
Description: 获取接口地址
Author: Leon
Version: 1.0
Date: 
Function:
History:
<author>    <time>  <version>   <description>
Leon
 ************************************************************/

#include <arpa/inet.h>
#include <sys/socket.h>
#include <netdb.h>
#include <ifaddrs.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netinet/in.h>

int get_if_addr6(char *ifname,  char ip6_list[][64])
{
    struct ifaddrs *ifaddr, *ifa;
    int count = 0;
    char ip_str[64];
	int len = 16;
	struct sockaddr_in6 *list = malloc(16 * sizeof(struct sockaddr_in6));
    if(!ifname || !list || !len)
        return 0;

    if (-1 == getifaddrs(&ifaddr))
    {
        perror("getifaddrs");
        return 0; 
    }

    for(ifa = ifaddr; ifa != NULL; ifa = ifa->ifa_next) 
    {
        if(ifa->ifa_name && !strcmp(ifa->ifa_name, ifname) &&
                ifa->ifa_addr && ifa->ifa_addr->sa_family == AF_INET6)
        {
            if(count > len)
                break;
            memcpy(&list[count], ifa->ifa_addr, sizeof(struct sockaddr_in6));
            inet_ntop(AF_INET6, &list[count].sin6_addr, ip6_list[count], 64);
            //printf("%s [%d] %s\n", ifname, count, ip_str);
            count++;
        }
    }
    freeifaddrs(ifaddr);
    return count;
}

int main(int argc, char *argv[])
{
    char buf[256] = {0};
	char *ifname = malloc(32*sizeof(char));
	char ip6_list[16][64] = {{0}};
	int i  = 0;
	int ip6_list_count = 0;
	
	if(argv[1] != NULL)
		strcpy(ifname,argv[1]);
	else
		printf("please give the interface name first!\n");
	
    ip6_list_count = get_if_addr6(ifname,ip6_list);
	printf("ip6_list_count=%d\n",ip6_list_count);
	for(i=0;i<ip6_list_count;i++){
		if(ip6_list[i][0]!=0)
			printf("[%s][%d][%s]\n",ifname,i,ip6_list[i]);
	}	
    return 0;
}