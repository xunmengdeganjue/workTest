#include <stdio.h>		
#include <stdlib.h>  	//for free()
#include <string.h> 	//for memcopy
#include <arpa/inet.h> 	//for inet_ntoa
#include <net/if.h> 	//for struct ifreq ifr;
#include <sys/ioctl.h> 	//for SIOCGIFADDR

#ifdef DEBUG
//#define dprintf(x) if( options & OPT_DEBUG ) 
#define cgi_dbg(fmt,...) \
{ \
  fprintf(stderr, "%s,%d: ", __FILE__, __LINE__); \
}
#else
#define cgi_dbg(fmt,...) \
	do { \
		debug_log_print(cgi_log, eLOG_LEVEL_DEBUG, __FUNCTION__, \
			__FILE__, __LINE__, (fmt), ##__VA_ARGS__); \
	} while(0)
#endif

int main(){
	char got_ip[128] = {0};
	char *interface = "eth0";
	int ret = 0;
	
	int sock = -1;
	
	

	ret = get_if_addr(got_ip,interface);
	if(!ret){
		
		printf("The ip of the %s is %s\n",interface,got_ip);
		
	}
}

/**
	get ip address of the internet interface
	@param  name the name of the interface such as eth0,eth1 and so on.
	@param  
	@val cgi exec result to display
	@param list cgi input parameter-json string or object
	@attention val is a output parameter 
	@retval 0 success 
	@retval -1 failed
*/
int get_if_addr(char *ipaddr, char *name)
{
  int sock = -1;
  struct ifreq ifr;
  struct sockaddr_in sin;
  //char got_ip[128] = {0};

  sock = socket(AF_INET, SOCK_STREAM, 0);
  
  memset(&ifr, 0, sizeof(ifr));
  strcpy(ifr.ifr_name, name);
  
  if(ioctl(sock, SIOCGIFADDR, &ifr) < 0)
  { 
    memset(&sin, 0, sizeof(struct sockaddr_in));
    return -1;
  }

  if(ifr.ifr_addr.sa_family == AF_INET)
  {
	memcpy(&sin, &(ifr.ifr_addr), sizeof(struct sockaddr_in));
	sprintf(ipaddr,"%s",inet_ntoa(sin.sin_addr));
    return 0;
  }
  else
  {
    memset(&sin, 0, sizeof(struct sockaddr_in));
    return -1;
  }
  
  return -1;
  
}

