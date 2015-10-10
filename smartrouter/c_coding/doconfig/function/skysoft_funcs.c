/*
*
*
*/

#include "skysoft_funcs.h"
#include "suci.h"
#include "tr_uciconfig.h"

int get_ManageServer_EnableCWMP(char *value)
{
	int ret = 0;

	ret = do_uci_get(EnableCWMP, value);
	
	if(ret)
	{
		return -1;
	}
	return ret ;
}
int set_ManageServer_EnableCWMP(char *value)
{
	int ret = 0;

	ret = do_uci_set(EnableCWMP, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}

int get_ManageServer_URL(char *value)
{
	int ret = 0;
	ret = do_uci_get(URL, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;

}
int set_ManageServer_URL(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(URL, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
	
}
int get_ManageServer_Username(char *value)
{
	int ret = 0;
	ret = do_uci_get(Username, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}
int set_ManageServer_Username(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(Username, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}
int get_ManageServer_Password(char *value)
{
	int ret = 0;
	ret = do_uci_get(Password, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}
int set_ManageServer_Password(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(Password, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}
int get_ManageServer_PeriodicInformEnable(char *value)
{
	int ret = 0;
	ret = do_uci_get(PeriodicInformEnable, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}
int set_ManageServer_PeriodicInformEnable(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(PeriodicInformEnable, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;

}

int get_ManageServer_PeriodicInformInterval(char *value)
{
	int ret = 0;
	ret = do_uci_get(PeriodicInformInterval, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;

}
int set_ManageServer_PeriodicInformInterval(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(PeriodicInformInterval, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}
int get_ManageServer_PeriodicInformTime( char * value )
{
    
  	int ret = 0;
	ret = do_uci_get(PeriodicInformTime, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}

int set_ManageServer_PeriodicInformTime(char *value)
{
    
    int ret = 0;
	
	ret = do_uci_set(PeriodicInformTime, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}

int get_ManageServer_ParameterKey( char *value )
{
   
    int ret = 0;
	ret = do_uci_get(ParameterKey, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}
int set_ManageServer_ParameterKey(char *value)
{
    int ret = 0;
	
	ret = do_uci_set(ParameterKey, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}
int get_ManageServer_ConnectionRequestURL( char *value )
{
    
    	int ret = 0;
	ret = do_uci_get(ConnectionRequestURL, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}
int set_ManageServer_ConnectionRequestURL(char *value)
{
    int ret = 0;
	
	ret = do_uci_set(ConnectionRequestURL, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}

int get_ManageServer_ConnectionRequestUsername( char *value )
{
    
    	int ret = 0;
	ret = do_uci_get(ConnectionRequestUsername, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}

int set_ManageServer_ConnectionRequestUsername(char *value )
{
    
    	int ret = 0;
	
	ret = do_uci_set(ConnectionRequestUsername, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}

int get_ManageServer_ConnectionRequestPassword(char *value )
{
   
    	int ret = 0;
	ret = do_uci_get(ConnectionRequestPassword, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}

int set_ManageServer_ConnectionRequestPassword(char *value )
{
    
    int ret = 0;
	
	ret = do_uci_set(ConnectionRequestPassword, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}

int get_ManageServer_UpgradesManaged(char *value )
{
    
    	int ret = 0;
	ret = do_uci_get(UpgradesManaged, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}

int set_ManageServer_UpgradesManaged(char *value )
{
  
    int ret = 0;
	
	ret = do_uci_set(UpgradesManaged, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}

int get_ManageServer_KickURL( char *value )
{
   	int ret = 0;
	
	ret = do_uci_get(KickURL, value);
	
	if(ret)
	{
		return -1;
	}
	return ret ;
}
int set_ManageServer_KickURL(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(KickURL, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}
int get_ManageServer_DownloadProgressURL( char *value )
{
    
	int ret = 0;
	ret = do_uci_get(DownloadProgressURL, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}
int set_ManageServer_DownloadProgressURL(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(DownloadProgressURL, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}
int get_ManageServer_DefaultActiveNotificationThrottle(char *value)
{	
	int ret = 0;
	ret = do_uci_get(DefaultActiveNotificationThrottle, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}
int set_ManageServer_DefaultActiveNotificationThrottle(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(DefaultActiveNotificationThrottle, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}
int get_ManageServer_UDPConnectionRequestAddress(char *value)
{	
	int ret = 0;
	ret = do_uci_get(UDPConnectionRequestAddress, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}
int set_ManageServer_UDPConnectionRequestAddress(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(UDPConnectionRequestAddress, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}
int get_ManageServer_UDPConnectionRequestAddressNotificationLimit(char *value)
{
	int ret = 0;
	ret = do_uci_get(UDPConnectionRequestAddressNotificationLimit, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}
int set_ManageServer_UDPConnectionRequestAddressNotificationLimit(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(UDPConnectionRequestAddressNotificationLimit, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}
int get_ManageServer_STUNEnable(char *value)
{
	int ret = 0;
	ret = do_uci_get(STUNEnable, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}
int set_ManageServer_STUNEnable(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(STUNEnable, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}
int get_ManageServer_STUNServerAddress(char *value)
{
	int ret = 0;
	ret = do_uci_get(STUNServerAddress, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}
int set_ManageServer_STUNServerAddress(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(STUNServerAddress, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}
int get_ManageServer_STUNServerPort(char *value)
{
	int ret = 0;
	ret = do_uci_get(STUNServerPort, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}
int set_ManageServer_STUNServerPort(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(STUNServerPort, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}
int get_ManageServer_STUNUsername(char *value)
{
	int ret = 0;

	ret = do_uci_get(STUNUsername, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;	

}
int set_ManageServer_STUNUsername(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(STUNUsername, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}
int get_ManageServer_STUNPassword(char *value)
{
	int ret = 0;

	ret = do_uci_get(STUNPassword, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;	
}
int set_ManageServer_STUNPassword(char *value)
{

	int ret = 0;
	
	ret = do_uci_set(STUNPassword, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}
int get_ManageServer_STUNMaximumKeepAlivePeriod(char *value)
{
	int ret = 0;

	ret = do_uci_get(STUNMaximumKeepAlivePeriod, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;	
}
int set_ManageServer_STUNMaximumKeepAlivePeriod(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(STUNMaximumKeepAlivePeriod, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}
int get_ManageServer_STUNMinimumKeepAlivePeriod(char *value)
{
	int ret = 0;

	ret = do_uci_get(STUNMinimumKeepAlivePeriod, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;	
}
int set_ManageServer_STUNMinimumKeepAlivePeriod(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(STUNMinimumKeepAlivePeriod, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret; 
}
int get_ManageServer_NATDetected(char *value)
{
	int ret = 0;

	ret = do_uci_get(NATDetected, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;	

}
int set_ManageServer_NATDetected(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(NATDetected, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}
int get_ManageServer_ManageableDeviceNumberOfEntries(char *value)
{	
	int ret = 0;

	ret = do_uci_get(ManageableDeviceNumberOfEntries, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;	
	
}
int set_ManageServer_ManageableDeviceNumberOfEntries(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(ManageableDeviceNumberOfEntries, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret ;
}
int get_ManageServer_ManageableDeviceNotificationLimit(char *value)
{
	int ret = 0;

	ret = do_uci_get(ManageableDeviceNotificationLimit, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}
int set_ManageServer_ManageableDeviceNotificationLimit(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(ManageableDeviceNotificationLimit, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret;
}


int get_ManageServer_AutonomousTransferCompletePolicy_Enable(char *value)
{

	int ret = 0;

	ret = do_uci_get(AutonomousTransferCompletePolicy_Enable, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;

}
int set_ManageServer_AutonomousTransferCompletePolicy_Enable(char *value)
{
	
	int ret = 0;
	
	ret = do_uci_set(AutonomousTransferCompletePolicy_Enable, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret;
}
int get_ManageServer_AutonomousTransferCompletePolicy_TransferTypeFilter(char *value)
{

	int ret = 0;

	ret = do_uci_get(AutonomousTransferCompletePolicy_TransferTypeFilter, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;

}
int set_ManageServer_AutonomousTransferCompletePolicy_TransferTypeFilter(char *value)
{
	
	int ret = 0;
	
	ret = do_uci_set(AutonomousTransferCompletePolicy_TransferTypeFilter, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret;
}
int get_ManageServer_AutonomousTransferCompletePolicy_ResultTypeFilter(char *value)
{

	int ret = 0;

	ret = do_uci_get(AutonomousTransferCompletePolicy_ResultTypeFilter, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;

}
int set_ManageServer_AutonomousTransferCompletePolicy_ResultTypeFilter(char *value)
{
	
	int ret = 0;
	
	ret = do_uci_set(AutonomousTransferCompletePolicy_ResultTypeFilter, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret;
}
int get_ManageServer_AutonomousTransferCompletePolicy_FileTypeFilter(char *value)
{

	int ret = 0;

	ret = do_uci_get(AutonomousTransferCompletePolicy_FileTypeFilter, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;

}
int set_ManageServer_AutonomousTransferCompletePolicy_FileTypeFilter(char *value)
{
	
	int ret = 0;
	
	ret = do_uci_set(AutonomousTransferCompletePolicy_FileTypeFilter, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret;
}

int get_ManageServer_DUStateChangeComplPolicy_Enable(char *value)
{	
	int ret = 0;

	ret = do_uci_get(DUStateChangeComplPolicy_Enable, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;}
int set_ManageServer_DUStateChangeComplPolicy_Enable(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(DUStateChangeComplPolicy_Enable, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret;	
}
int get_ManageServer_DUStateChangeComplPolicy_OperationTypeFilter(char *value)
{
	int ret = 0;

	ret = do_uci_get(DUStateChangeComplPolicy_OperationTypeFilter, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}
int set_ManageServer_DUStateChangeComplPolicy_OperationTypeFilter(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(DUStateChangeComplPolicy_OperationTypeFilter, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret;		
}
int get_ManageServer_DUStateChangeComplPolicy_ResultTypeFilter(char *value)
{
	int ret = 0;

	ret = do_uci_get(DUStateChangeComplPolicy_ResultTypeFilter, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}
int set_ManageServer_DUStateChangeComplPolicy_ResultTypeFilter(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(DUStateChangeComplPolicy_ResultTypeFilter, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret;			
}
int get_ManageServer_DUStateChangeComplPolicy_FaultCodeFilter(char *value)
{
	int ret = 0;

	ret = do_uci_get(DUStateChangeComplPolicy_FaultCodeFilter, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}
	return ret ;
}
int set_ManageServer_DUStateChangeComplPolicy_FaultCodeFilter(char *value)
{
	int ret = 0;
	
	ret = do_uci_set(DUStateChangeComplPolicy_FaultCodeFilter, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	return ret;		
}



int get_ManageServer_ManageableDevice_Alias(int i,char *value)
{
	int ret = 0;
	char location[128]={0};
	sprintf(location,"trconf.ManageableDevice_%d.Alias",i);

	ret = do_uci_get(location, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}

	return ret ;
}
int set_ManageServer_ManageableDevice_Alias(int i,char *value)
{
	int ret = 0;
	char location[128]={0};
	sprintf(location,"trconf.ManageableDevice_%d.Alias",i);

	ret = do_uci_set(location, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	
	return ret ;
	
}
int get_ManageServer_ManageableDevice_ManufacturerOUI(int i,char *value)
{
	int ret = 0;
	char location[128]={0};
	sprintf(location,"trconf.ManageableDevice_%d.ManufacturerOUI",i);

	ret = do_uci_get(location, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}

	return ret ;
}
int set_ManageServer_ManageableDevice_ManufacturerOUI(int i,char *value)
{
	int ret = 0;
	char location[128]={0};
	sprintf(location,"trconf.ManageableDevice_%d.ManufacturerOUI",i);

	ret = do_uci_set(location, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	
	return ret ;
	
}
int get_ManageServer_ManageableDevice_SerialNumber(int i,char *value)
{
	int ret = 0;
	char location[128]={0};
	sprintf(location,"trconf.ManageableDevice_%d.SerialNumber",i);

	ret = do_uci_get(location, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}

	return ret ;
}
int set_ManageServer_ManageableDevice_SerialNumber(int i,char *value)
{
	int ret = 0;
	char location[128]={0};
	sprintf(location,"trconf.ManageableDevice_%d.SerialNumber",i);

	ret = do_uci_set(location, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	
	return ret ;
	
}
int get_ManageServer_ManageableDevice_ProductClass(int i,char *value)
{
	int ret = 0;
	char location[128]={0};
	sprintf(location,"trconf.ManageableDevice_%d.ProductClass",i);

	ret = do_uci_get(location, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}

	return ret ;
}
int set_ManageServer_ManageableDevice_ProductClass(int i,char *value)
{
	int ret = 0;
	char location[128]={0};
	sprintf(location,"trconf.ManageableDevice_%d.ProductClass",i);

	ret = do_uci_set(location, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	
	return ret ;
	
}
int get_ManageServer_ManageableDevice_Host(int i,char *value)
{
	int ret = 0;
	char location[128]={0};
	sprintf(location,"trconf.ManageableDevice_%d.Host",i);

	ret = do_uci_get(location, value);
	
	//do_uci_commit("trconf");
	if(ret)
	{
		return -1;
	}

	return ret ;
}
int set_ManageServer_ManageableDevice_Host(int i,char *value)
{
	int ret = 0;
	char location[128]={0};
	sprintf(location,"trconf.ManageableDevice_%d.Host",i);

	ret = do_uci_set(location, value);
	
	if(ret)
	{
		return -1;
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return -1;
		}
	}
	
	return ret ;
	
}
//#endif
int get_landevice_LANEthernetInterfaceNumberOfEntries (char *value)
{
	int ret = 0;

	ret = do_uci_get(LANEthernetInterfaceNumberOfEntries, value);
	
	if(ret)
	{
		return -1;
	}
	return ret ;


}
int get_landevice_LANUSBInterfaceNumberOfEntries(char *value)
{
	int ret = 0;

	ret = do_uci_get(LANUSBInterfaceNumberOfEntries, value);
	
	if(ret)
	{
		return -1;
	}
	return ret ;


}




		
	

