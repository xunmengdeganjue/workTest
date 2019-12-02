#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>
/*
*/

static int ntod(u_int32_t mask) {
    float f;
    mask = -mask;
    f = mask;
    mask = *(unsigned *)&f;
    mask = 159 - (mask >> 23);
    return mask;
}

int mask_to_cidr(char *netmask){
        struct in_addr addr;
	int cidr = 0;

        if(netmask == NULL){
                printf("[%s][%d]the parameter netmask is wrong!\n", __FUNCTION__,__LINE__);
                return -1;
        }
	printf("netmask = %s\n",netmask);

        if (inet_aton(netmask, &addr) != 0) {
                addr.s_addr = htonl(addr.s_addr);
        	//mask=ntod(0xffffff00);
                cidr = ntod(addr.s_addr);
        }
        return cidr;    
}

u_int32_t cidr_to_mask(u_int32_t mask){

	u_int32_t i, c;
	int bits = sizeof(u_int32_t) * 8;
 
	i = ~0;
	bits -= mask;
	/* 让32位全是1的无符号数与左移bits位(右移位用0填充)得出子网掩码 */
	i <<= bits;
    
	return htonl(i);

}

char * cidrToMask(u_int32_t mask){

	u_int32_t i, c;
	int bits = sizeof(u_int32_t) * 8;
 
	i = ~0;
	bits -= mask;
	/* 让32位全是1的无符号数与左移bits位(右移位用0填充)得出子网掩码 */
	i <<= bits;
    
    struct in_addr tmpAddr;

    tmpAddr.s_addr = htonl(i);
    return inet_ntoa(tmpAddr);

}

int main(){
        char netmask[32] = {0};
        int cidr_val = 0;
        unsigned long tmpmask= 0;
        struct in_addr addr;

        printf("Please enter the NetMask:\n");
        scanf("%s",netmask);
        printf("the netmask = %s\n", netmask);
        
	cidr_val = mask_to_cidr(netmask);
        printf("cidr of the mask=%d\n",cidr_val);
	
	unsigned int cidr_num = 0;
	printf("Please enter a cidr number:\n");
	scanf("%d",&cidr_num);
	printf("the mask = [%d]\n", cidr_to_mask(cidr_num));
    printf("the mask [.] = [%s]\n", cidrToMask(cidr_num));

}                             
