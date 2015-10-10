#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#include"deviceinfo.h"
#include"skysoft_funcs.h"

char  func[64][64]=
{
	"EnableCWMP",
	"URL",
	"Username"
};


#define funcg "get_ManageServer_"
#define funcs "set_ManageServer_"

#define funcgg "get_ManageServer"##func[1]##"()"


int main(int argc,char **argv)
{
	int ret = 0;
	//char node[128] = {0};
	//char value[128] = {0};
	char *value = (char *)malloc(128*sizeof(char));
	printf("content of the func is %s\n",func[1]);	
	
	if(argc < 2)
	{
		printf("parameters error,please check it!\n");
		printf("\n");
		printf("USAGE:\n");
		printf("\t sudo ./%s <get/set> [value]\n",argv[0]);
	}
	else
	{
		if(!(strcmp(argv[1],"get")))
		{
			printf("getting value\n");
			ret = get_ManageServer_EnableCWMP(value);		
			//ret = get_ManageServer_URL(value);
			//ret = get_ManageServer_Username(value);
			//ret  = get_ManageServer_STUNUsername(value);
			//ret = get_ManageServer_PeriodicInformEnable(value);
			//ret =  get_ManageServer_PeriodicInformInterval(value);
			//ret = get_ManageServer_PeriodicInformTime(value);
			//ret = get_ManageServer_ParameterKey(value);
			//ret =  get_ManageServer_ConnectionRequestURL(value);
			//ret =  get_ManageServer_ConnectionRequestUsername(value);
			//ret =  get_ManageServer_ConnectionRequestPassword(value);
			//ret =  get_ManageServer_UpgradesManaged(value);
			//ret =  get_ManageServer_KickURL(value);
			//ret =  get_ManageServer_DownloadProgressURL(value);
			//ret =  get_ManageServer_DefaultActiveNotificationThrottle(value);
			//ret =  get_ManageServer_UDPConnectionRequestAddress(value);
			//ret =  get_ManageServer_UDPConnectionRequestAddressNotificationLimit(value);
			//ret =  get_ManageServer_STUNEnable(value);
			//ret =  get_ManageServer_STUNServerAddress(value);
			//ret =  get_ManageServer_STUNServerPort(value);
			//ret =  get_ManageServer_STUNUsername(value);
			//ret =  get_ManageServer_STUNPassword(value);
			//ret =  get_ManageServer_STUNMaximumKeepAlivePeriod(value);
			//ret =  get_ManageServer_STUNMinimumKeepAlivePeriod(value);
			//ret =  get_ManageServer_NATDetected(value);
			//ret =  get_ManageServer_ManageableDeviceNumberOfEntries(value);
			//ret =  get_ManageServer_ManageableDeviceNotificationLimit(value);
			//ret =  get_ManageServer_ManageableDevice_Alias(0,value);
			//ret =  get_landevice_LANEthernetInterfaceNumberOfEntries(value);
			if(ret)
			{
				printf("node value [%s] getting error\n",value);
				return -1;
			}
			printf("Get the node value[%s]\n",value);
		}
		else if(!strcmp(argv[1],"set"))
		{
			printf("setting parameter\n");
			value = argv[2];
			ret  = set_ManageServer_EnableCWMP(value);
			//ret  = set_ManageServer_Username(value);
			//ret  = set_ManageServer_STUNUsername(value);
			//ret = set_ManageServer_PeriodicInformEnable(value);
			//ret =  set_ManageServer_PeriodicInformInterval(value);
			//ret = set_ManageServer_PeriodicInformTime(value);
			//ret = set_ManageServer_ParameterKey(value);
			//ret =  set_ManageServer_ConnectionRequestURL(value);
			//ret =  set_ManageServer_ConnectionRequestUsername(value);
			//ret =  set_ManageServer_ConnectionRequestPassword(value);
			//ret =  set_ManageServer_UpgradesManaged(value);
			//ret =  set_ManageServer_KickURL(value);
			//ret =  set_ManageServer_DownloadProgressURL(value);
			//ret =  set_ManageServer_DefaultActiveNotificationThrottle(value);
			//ret =  set_ManageServer_UDPConnectionRequestAddress(value);
			//ret =  set_ManageServer_UDPConnectionRequestAddressNotificationLimit(value);
			//ret =  set_ManageServer_STUNEnable(value);
			//ret =  set_ManageServer_STUNServerAddress(value);
			//ret =  set_ManageServer_STUNServerPort(value);
			//ret =  set_ManageServer_STUNUsername(value);
			//ret =  set_ManageServer_STUNPassword(value);
			//ret =  set_ManageServer_STUNMaximumKeepAlivePeriod(value);
			//ret =  set_ManageServer_STUNMinimumKeepAlivePeriod(value);
			//ret =  set_ManageServer_NATDetected(value);
			//ret =  set_ManageServer_ManageableDeviceNumberOfEntries(value);
			//ret =  set_ManageServer_ManageableDeviceNotificationLimit(value);
			//ret =  set_ManageServer_ManageableDevice_Alias(0,value);
			if(ret)
			{
				printf("node value [%s] setting error\n",value);
				return -1;
			}
		}
		
	}
	
	
	return 0;
}
