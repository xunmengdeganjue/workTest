#include <sys/types.h>
#include <ifaddrs.h>
#include <sys/ioctl.h> 
#include <net/if.h> 
#include <string.h> 
#include <stdio.h>
#include <unistd.h>
#include <netdb.h>
//#include <sys/socket.h>
//#include <netinet/in.h>
#include <arpa/inet.h>

int getipaddr6(char *ifname,char *addr){
	struct ifaddrs * ifap0=NULL,*ifap=NULL;
	void * tmpAddrPtr=NULL;

	getifaddrs(&ifap0);
	ifap=ifap0;
	while (ifap!=NULL) {
		if (ifap->ifa_addr->sa_family==AF_INET6) { // check it is IP6
			// is a valid IP6 Address
			tmpAddrPtr=&((struct sockaddr_in *)ifap->ifa_addr)->sin_addr;
			char addressBuffer[INET6_ADDRSTRLEN];
			memset(addressBuffer,0x00,sizeof(addressBuffer));
			inet_ntop(AF_INET6, tmpAddrPtr, addressBuffer, INET6_ADDRSTRLEN);
			if((strcmp(addressBuffer,"::")!=0) && (strcmp(ifap->ifa_name, ifname) == 0)){
				printf("%s IPv6: %s\n", ifap->ifa_name, addressBuffer); 
				//printf("MAC: %s\n\n",getMac(mac,ifap->ifa_name));
			}
		}
		ifap=ifap->ifa_next;
	}
	if (ifap0) { 
		freeifaddrs(ifap0); 
		ifap0 = NULL; 
	}
}


int main (int argc, const char * argv[])
{
	getipaddr6("eth0",NULL);
    return 0;
} 