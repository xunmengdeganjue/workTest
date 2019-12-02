/*
Calculate the network segment of the destination IP address based on \
the destination IP address and subnet mask.

we main use the following two function in the arpa/inet.h to calculate the 
ip segment base on the ipaddr and netmask.

(1)convert the ip string with "." seperatetion to network order.
int inet_aton(const char* string, struct in_addr*addr);

(2)convert the ip with network order to string that sperated by ".".
char* inet_ntoa(struct in_addr addr);
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <arpa/inet.h>

/*
 Name:calc_sigment()
 Description:
 Return:
*/
int calc_segment(char *addr, char* mask,char *sigment, int len){
	
    struct in_addr netAddr,netMask,ipsec;
    
    unsigned long ip_int = 0;
    unsigned long mask_int = 0;
    unsigned long ipsegment = 0;

    if(addr == NULL || mask == NULL){
        printf("[%s][%d] addr or mask is NULL!\n",__FUNCTION__,__LINE__);
        return -1;
    }

    inet_aton(addr,&netAddr);
    printf("NET_IP = %d\n",netAddr.s_addr);

    inet_aton(mask,&netMask);
    printf("NET_MASK = %d\n",netMask.s_addr);

    ip_int = netAddr.s_addr;
    mask_int = netMask.s_addr;
    ipsegment = ip_int & mask_int;

    printf("ipsegment = %ld\n",ipsegment);

    ipsec.s_addr = ipsegment;

	memcpy(sigment, inet_ntoa(ipsec), len);

	return 0;

}

int main(int argc, char **argv){

	struct in_addr netAddr,netMask,ipsec;
	char ip[32] = {0};
	char mask[32] = {0};
	unsigned long ip_int = 0;
	unsigned long mask_int = 0;
	unsigned long ipsegment = 0;
	
	printf("please enter the ip:\n");
	scanf("%s",ip);
	printf("please enter the mask:\n");
	scanf("%s",mask); 	       

	char *ipsets = (char *) malloc(32);
	calc_segment(ip,mask,ipsets,32);
	printf("ip segment is = [%s]\n", ipsets);
	
}     
