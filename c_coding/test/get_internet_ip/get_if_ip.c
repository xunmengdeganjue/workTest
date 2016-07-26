#include <stdio.h>
#include <stdlib.h>
#include <string.h> //for memcopy
#include <unistd.h>
#include <sys/socket.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h> //for inet_ntoa
#include <net/if.h> //for   struct ifreq ifr;
#include <signal.h>
#include <sys/ioctl.h> //for SIOCGIFADDR

#ifdef DEBUG
//#define dprintf(x) if( options & OPT_DEBUG ) 
#define dprintf(x) \
{ \
  fprintf(stderr, "%s,%d: ", __FILE__, __LINE__); \
    fprintf x; \
}
#else
#  define dprintf(x)
#endif

int get_if_addr(int sock, char *interface, struct sockaddr_in *sin);

int main(){
	int ret = -1;
	struct sockaddr_in *addr;
	//struct sockaddr_in sin2;
	struct sockaddr_in sin;
    struct sockaddr_in sin2;
	char *address = NULL;
	int sock = -1;
	
	sock = socket(AF_INET, SOCK_STREAM, 0);
	
	ret = get_if_addr(sock,"eth0",&sin2);
	if(ret == 0){
		if(memcmp(&sin.sin_addr, &sin2.sin_addr, sizeof(struct in_addr)) != 0 )
		{
			
			memcpy(&sin, &sin2, sizeof(sin));
			if(address) { free(address); }
			address = strdup(inet_ntoa(sin.sin_addr));
			
			printf("The address of the interface eth0  is [%s]\n",address);
			pirntf("The ");
		}	
		
	}else{
		printf("Can't get the address of the eth0!\n");
		
	}
	return 0;
}

int get_if_addr(int sock, char *name, struct sockaddr_in *sin)
{
#ifdef IF_LOOKUP
  struct ifreq ifr;

  memset(&ifr, 0, sizeof(ifr));
  strcpy(ifr.ifr_name, name);
  /* why does this need to be done twice? */
  if(ioctl(sock, SIOCGIFADDR, &ifr) < 0) 
  { 
    perror("ioctl(SIOCGIFADDR)"); 
    memset(sin, 0, sizeof(struct sockaddr_in));
    dprintf((stderr, "%s: %s\n", name, "unknown interface"));
    return -1;
  }
  if(ioctl(sock, SIOCGIFADDR, &ifr) < 0)
  { 
    perror("ioctl(SIOCGIFADDR)"); 
    memset(sin, 0, sizeof(struct sockaddr_in));
    dprintf((stderr, "%s: %s\n", name, "unknown interface"));
    return -1;
  }

  if(ifr.ifr_addr.sa_family == AF_INET)
  {
	memcpy(sin, &(ifr.ifr_addr), sizeof(struct sockaddr_in));

   	if ( (strcmp(name, "ppp0") == 0) && (strcmp(inet_ntoa(sin->sin_addr),"10.64.64.64") == 0) ){
		dprintf((stderr, "%s: %s\n", name, "can not get ip address!"));
		return -1;
	}
    	dprintf((stderr, "%s: %s\n", name, inet_ntoa(sin->sin_addr)));
    	return 0;
  }
  else
  {
    memset(sin, 0, sizeof(struct sockaddr_in));
    dprintf((stderr, "%s: %s\n", name, "could not resolve interface"));
    return -1;
  }
  return -1;
#else
  return -1;
#endif
}


