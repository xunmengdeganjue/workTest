
#include "tools.h"

int get_gw_ip(char *gwip)
{

	char linebuf[128] = { 0 };
	FILE *fp = NULL;
	char *ptr;
    int ret = -1;
	
	sprintf( linebuf ,"ip route show | grep \"default via\" | grep \"dev br-lan\" | cut -d \" \" -f3" );
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

int get_ipaddr_by_ifname(char *ipaddr, char *ifname)
{
	int sid;
	struct ifreq ifr;
	int ret;

	sid = socket ( AF_INET, SOCK_DGRAM, 0 );
	if ( sid < 0 )
	{
		return -1;
	}

	strcpy(ifr.ifr_name, ifname);

	ret=ioctl(sid, SIOCGIFADDR, &ifr);
	if ( ret == -1 )
	{
		close(sid);
		ret = -1;
	}
	else
	{
		strcpy(ipaddr, inet_ntoa(sin_addr(&ifr.ifr_addr)));
		close(sid);
		ret = 0;
	}
    return ret;
}





