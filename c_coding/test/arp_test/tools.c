
#include "tools.h"
#include "logopt.h"
int get_gw_ip(char *gwip)
{

	char linebuf[128] = { 0 };
	FILE *fp = NULL;
	char *ptr;
    int ret = -1;
	
	sprintf( linebuf ,"ip route show | grep \"default via\" | grep \"dev eth0\" | cut -d \" \" -f3" );
	fp = popen(linebuf,"r");
	if( fp ){
		memset( linebuf, 0x00, sizeof(linebuf) );
		if( fgets( linebuf, sizeof(linebuf), fp ) ){
			ptr = strchr(linebuf, '\n');
			if (ptr)
				*ptr = '\0';
			strcpy(gwip, linebuf);
            ret = 0;
			//gwip[strlen(gwip) -1]='\0';
		}
		pclose(fp);
	}
	
	return ret;

}


#if 0

int get_ipaddr_by_ifname(char *ipaddr, char *name)
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
	logopt_info("the got ip is [%s]\n", ipaddr);
    return 0;
  }
  else
  {
    memset(&sin, 0, sizeof(struct sockaddr_in));
    return -1;
  }
  
  return -1;
  
}
#endif

int get_ipaddr_by_ifname(char *ipaddr, char *ifname)
{
	int sid = -1;
	struct ifreq ifr;
	struct sockaddr_in sin; 
	int ret;
	
	memset(&ifr, 0, sizeof(ifr));
	strcpy(ifr.ifr_name, ifname);
	
	logopt_info("the interface is [%s]\n", ifname);
	
	sid = socket ( AF_INET, SOCK_DGRAM, 0 );
	//sid = socket ( AF_INET, SOCK_STREAM, 0 );
	if ( sid < 0 )
	{
		logopt_err("create the socket failed!\n");
		return -1;
	}

	ret = ioctl(sid, SIOCGIFADDR, &ifr);
	if ( ret == -1 )
	{
		close(sid);
		ret = -1;
	}
	else
	{
		//strcpy(ipaddr, inet_ntoa(sin_addr(&ifr.ifr_addr)));
		//ret = 0;
	
		if(ifr.ifr_addr.sa_family == AF_INET){
			memcpy(&sin, &(ifr.ifr_addr), sizeof(struct sockaddr_in));
			snprintf(ipaddr, 16, "%s", inet_ntoa(sin.sin_addr));  
			ret = 0;
		}

		close(sid);
	}
    return ret;
}
/*
	get the Mac address of the interface.
*/
int get_mac_by_ifname( char *mac, char *eth_inf){
	logopt_trace_enter();
	struct ifreq ifr;
	int sd;
	//bzero(&ifr, sizeof(struct ifreq)); 
	if( (sd = socket(AF_INET, SOCK_STREAM, 0)) < 0){
		logopt_err("get %s mac address socket creat error\n", eth_inf);
		return -1;

	}
	//strncpy(ifr.ifr_name, eth_inf, sizeof(ifr.ifr_name) - 1);
	strcpy(ifr.ifr_name,eth_inf);
	logopt_info("interface name [%s]\n",eth_inf);
	if(ioctl(sd, SIOCGIFHWADDR, &ifr) < 0){
		logopt_err("get %s mac address error\n", eth_inf);
		close(sd);
		return -1;
	}

	snprintf(mac, MAC_SIZE, "%02X:%02X:%02X:%02X:%02X:%02X",
		(unsigned char)ifr.ifr_hwaddr.sa_data[0],
		(unsigned char)ifr.ifr_hwaddr.sa_data[1],
		(unsigned char)ifr.ifr_hwaddr.sa_data[2],
		(unsigned char)ifr.ifr_hwaddr.sa_data[3],
		(unsigned char)ifr.ifr_hwaddr.sa_data[4],
		(unsigned char)ifr.ifr_hwaddr.sa_data[5]);

	//int i ;
	//for(i = 0; i < 6; i++){
   //     sprintf(mac+3*i, "%02X:", (unsigned char)ifr.ifr_hwaddr.sa_data[i]);
   // }
	//mac[strlen(mac) -1] = "\0";
	
	close(sd);
	logopt_trace_exit();
	return 0;
	
}


char *show_ip(int ip){
	struct in_addr addr;
	addr.s_addr = ip;
	char *ipaddr = NULL;
	logopt_info("ipaddr is %s\n",inet_ntoa(addr));
	ipaddr=inet_ntoa(addr);
	return ipaddr;
}



