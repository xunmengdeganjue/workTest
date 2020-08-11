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
void pHx(unsigned char* p,int len){
  printf("Hex: ");
  for(int i=0;i<len;i++){
    printf("%02X:",p[i]);
  }
  printf("\b\n");
}
char* getMac(char* mac,char* dv){
    struct   ifreq   ifreq; 
    int   sock; 
    if(!mac || !dv)
        return mac;
    if((sock=socket(AF_INET,SOCK_STREAM,0)) <0) 
    { 
        perror( "socket "); 
        return mac; 
    } 
    strcpy(ifreq.ifr_name,dv); 
    if(ioctl(sock,SIOCGIFHWADDR,&ifreq) <0) 
    { 
        perror( "ioctl "); 
        return mac; 
    }
    pHx((unsigned char*)ifreq.ifr_hwaddr.sa_data,sizeof(ifreq.ifr_hwaddr.sa_data));
    sprintf(mac, "%02X:%02X:%02X:%02X:%02X:%02X", //以太网MAC地址的长度是48位
           (unsigned char)ifreq.ifr_hwaddr.sa_data[0], 
           (unsigned char)ifreq.ifr_hwaddr.sa_data[1], 
           (unsigned char)ifreq.ifr_hwaddr.sa_data[2], 
           (unsigned char)ifreq.ifr_hwaddr.sa_data[3], 
           (unsigned char)ifreq.ifr_hwaddr.sa_data[4], 
           (unsigned char)ifreq.ifr_hwaddr.sa_data[5]);
    return mac;
}

int main (int argc, const char * argv[])
{
    char hname[128];
    struct hostent *hent;
    int i;

    gethostname(hname, sizeof(hname));

    //hent = gethostent();
    hent = gethostbyname(hname);

    printf("hostname: %s\n", hent->h_name);
//----------------------------------------------------------
    printf("\n\n");

    char mac[30];
    struct ifaddrs * ifap0=NULL,*ifap=NULL;
    void * tmpAddrPtr=NULL;

    getifaddrs(&ifap0);
    ifap=ifap0;
    while (ifap!=NULL) {
        if (ifap->ifa_addr->sa_family==AF_INET) { // check it is IP4
            // is a valid IP4 Address
            tmpAddrPtr=&((struct sockaddr_in *)ifap->ifa_addr)->sin_addr;
            char addressBuffer[INET_ADDRSTRLEN];
            inet_ntop(AF_INET, tmpAddrPtr, addressBuffer, INET_ADDRSTRLEN);
            if(strcmp(addressBuffer,"127.0.0.1")!=0){
            printf("%s IPv4: %s\n", ifap->ifa_name, addressBuffer);
            printf("MAC: %s\n\n",getMac(mac,ifap->ifa_name));
            }
        } else if (ifap->ifa_addr->sa_family==AF_INET6) { // check it is IP6
            // is a valid IP6 Address
            tmpAddrPtr=&((struct sockaddr_in *)ifap->ifa_addr)->sin_addr;
            char addressBuffer[INET6_ADDRSTRLEN];
            inet_ntop(AF_INET6, tmpAddrPtr, addressBuffer, INET6_ADDRSTRLEN);
            if(strcmp(addressBuffer,"::")!=0){
                printf("%s IPv6: %s\n", ifap->ifa_name, addressBuffer); 
                printf("MAC: %s\n\n",getMac(mac,ifap->ifa_name));
            }
        }
        ifap=ifap->ifa_next;
    }
    if (ifap0) { freeifaddrs(ifap0); ifap0 = NULL; }
    return 0;
} 