/**
skysoft functions for tr069
***/

#ifndef __SKYSOFT_FUNCS__
#define __SKYSOFT_FUNCS__

#include <stdio.h>
#include <string.h>


int get_ManageServer_EnableCWMP(char *value);
int set_ManageServer_EnableCWMP(char *value);
int get_ManageServer_URL(char *value);
int set_ManageServer_URL(char *value);
int get_ManageServer_Username(char *value);
int set_ManageServer_Username(char *value);
int get_ManageServer_Password(char *value);
int set_ManageServer_Password(char *value);
int get_ManageServer_PeriodicInformEnable(char *value);
int set_ManageServer_PeriodicInformEnable(char *value);
int get_ManageServer_PeriodicInformInterval(char *value);
int set_ManageServer_PeriodicInformInterval(char *value);
int get_ManageServer_PeriodicInformTime( char * value );
int set_ManageServer_PeriodicInformTime(char *value );
int get_ManageServer_ParameterKey(char *value);
int set_ManageServer_ParameterKey(char *value);
int get_ManageServer_ConnectionRequestURL(char *value);
int set_ManageServer_ConnectionRequestURL(char *value);
int get_ManageServer_ConnectionRequestUsername(char *value);
int set_ManageServer_ConnectionRequestUsername(char *value);
int get_ManageServer_ConnectionRequestPassword(char *value);
int set_ManageServer_ConnectionRequestPassword(char *value );
int get_ManageServer_UpgradesManaged(char *value);
int set_ManageServer_UpgradesManaged(char *value);
int get_ManageServer_KickURL(char *value);
int set_ManageServer_KickURL(char *value);
int get_ManageServer_DownloadProgressURL(char *value );
int set_ManageServer_DownloadProgressURL(char *value);
int get_ManageServer_DefaultActiveNotificationThrottle(char *value);
int set_ManageServer_DefaultActiveNotificationThrottle(char *value);
int get_ManageServer_UDPConnectionRequestAddress(char *value);
int set_ManageServer_UDPConnectionRequestAddress(char *value);
int get_ManageServer_UDPConnectionRequestAddressNotificationLimit(char *value);
int set_ManageServer_UDPConnectionRequestAddressNotificationLimit(char *value);
int get_ManageServer_STUNEnable(char *value);
int set_ManageServer_STUNEnable(char *value);
int get_ManageServer_STUNServerAddress(char *value);
int set_ManageServer_STUNServerAddress(char *value);
int get_ManageServer_STUNServerPort(char *value);
int set_ManageServer_STUNServerPort(char *value);
int get_ManageServer_STUNUsername(char *value);
int set_ManageServer_STUNUsername(char *value);
int get_ManageServer_STUNPassword(char *value);
int set_ManageServer_STUNPassword(char *value);
int get_ManageServer_STUNMaximumKeepAlivePeriod(char *value);
int set_ManageServer_STUNMaximumKeepAlivePeriod(char *value);
int get_ManageServer_STUNMinimumKeepAlivePeriod(char *value);
int set_ManageServer_STUNMinimumKeepAlivePeriod(char *value);
int get_ManageServer_NATDetected(char *value);
int set_ManageServer_NATDetected(char *value);
int get_ManageServer_ManageableDeviceNumberOfEntries(char *value);
int set_ManageServer_ManageableDeviceNumberOfEntries(char *value);
int get_ManageServer_ManageableDeviceNotificationLimit(char *value);
int set_ManageServer_ManageableDeviceNotificationLimit(char *value);

int get_ManageServer_ManageableDevice_Alias(int i,char *value);
int set_ManageServer_ManageableDevice_Alias(int i,char *value);
int get_ManageServer_AutonomousTransferCompletePolicy(int i,char *option ,char *value);
int set_ManageServer_AutonomousTransferCompletePolicy(int i,char *option,char *value);
int get_ManageServer_DUStateChangeComplPolicy(int i,char *option ,char *value);
int set_ManageServer_DUStateChangeComplPolicy(int i,char *option,char *value);
//for landevice segment
int get_landevice_LANEthernetInterfaceNumberOfEntries (char *value);
int get_landevice_LANUSBInterfaceNumberOfEntries (char *value);
int get_landevice_LANWLANConfigurationNumberOfEntries(char *value);



#endif

