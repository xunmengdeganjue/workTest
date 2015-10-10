#ifndef __TR_UCICONFIG_H__
#define __TR_UCICONFIG_H__

/*TR-098*/

/*TR ManagementServer arguments*/
#define MS "trconf"   /* for ManagementServer arguments*/
#define TRCONFIG MS "."
#define EnableCWMP  									TRCONFIG "DM.EnableCWMP"//"ManagementServer.EnableCWMP"
#define URL 											TRCONFIG "ManagementServer.URL"
#define Username 									TRCONFIG "ManagementServer.Username"
#define Password 									TRCONFIG "ManagementServer.Password"
#define PeriodicInformEnable 							TRCONFIG "ManagementServer.PeriodicInformEnable"
#define PeriodicInformInterval	 						TRCONFIG "ManagementServer.PeriodicInformInterval"
#define PeriodicInformTime							TRCONFIG "ManagementServer.PeriodicInformTime"
#define ParameterKey									TRCONFIG "ManagementServer.ParameterKey"
#define ConnectionRequestURL							TRCONFIG "ManagementServer.ConnectionRequestURL"
#define ConnectionRequestUsername					TRCONFIG "ManagementServer.ConnectionRequestUsername"
#define ConnectionRequestPassword					TRCONFIG "ManagementServer.ConnectionRequestPassword"
#define UpgradesManaged								TRCONFIG "ManagementServer.UpgradesManaged"
#define KickURL										TRCONFIG "ManagementServer.KickURL"
#define DownloadProgressURL							TRCONFIG "ManagementServer.DownloadProgressURL"
#define DefaultActiveNotificationThrottle				TRCONFIG "ManagementServer.DefaultActiveNotificationThrottle"
#define UDPConnectionRequestAddress					TRCONFIG "ManagementServer.UDPConnectionRequestAddress"
#define UDPConnectionRequestAddressNotificationLimit 	TRCONFIG "ManagementServer.UDPConnectionRequestAddressNotificationLimit"
#define STUNEnable 									TRCONFIG "ManagementServer.STUNEnable"
#define STUNServerAddress 							TRCONFIG "ManagementServer.STUNServerAddress"
#define STUNServerPort								TRCONFIG "ManagementServer.STUNServerPort"
#define STUNUsername								TRCONFIG "ManagementServer.STUNUsername"
#define STUNPassword 								TRCONFIG "ManagementServer.STUNPassword"
#define STUNMaximumKeepAlivePeriod	 				TRCONFIG "ManagementServer.STUNMaximumKeepAlivePeriod"
#define STUNMinimumKeepAlivePeriod 					TRCONFIG "ManagementServer.STUNMinimumKeepAlivePeriod"
#define NATDetected  									TRCONFIG "ManagementServer.NATDetected"
#define ManageableDeviceNumberOfEntries				TRCONFIG "ManagementServer.ManageableDeviceNumberOfEntries"
#define ManageableDeviceNotificationLimit 				TRCONFIG "ManagementServer.ManageableDeviceNotificationLimit"

#define Alias	 										TRCONFIG "@ManageableDevice[0].Alias"
#define ManufacturerOUI 								TRCONFIG "@ManageableDevice[0].ManufacturerOUI"	
#define SerialNumber 									TRCONFIG "@ManageableDevice[0].SerialNumber"	
#define ProductClass 									TRCONFIG "@ManageableDevice[0].ProductClass"
#define Host 											TRCONFIG "@ManageableDevice[0].Host"

#define AutonomousTransferCompletePolicy_Enable		TRCONFIG "AutonomousTransferCompletePolicy.Enable"
#define AutonomousTransferCompletePolicy_TransferTypeFilter 	TRCONFIG "AutonomousTransferCompletePolicy.TransferTypeFilter"
#define AutonomousTransferCompletePolicy_ResultTypeFilter 	TRCONFIG "AutonomousTransferCompletePolicy.ResultTypeFilter"
#define AutonomousTransferCompletePolicy_FileTypeFilter 		TRCONFIG "AutonomousTransferCompletePolicy.FileTypeFilter"

#define DUStateChangeComplPolicy_Enable 			TRCONFIG "DUStateChangeComplPolicy.Enable"
#define DUStateChangeComplPolicy_OperationTypeFilter TRCONFIG "DUStateChangeComplPolicy.OperationTypeFilter"
#define DUStateChangeComplPolicy_ResultTypeFilter	TRCONFIG "DUStateChangeComplPolicy.ResultTypeFilter"
#define DUStateChangeComplPolicy_FaultCodeFilter 	TRCONFIG "DUStateChangeComplPolicy.FaultCodeFilter"

#define ManageableDevice_Alias						TRCONFIG "@ManageableDevice[0].Alias"

/*TR Lan device arguments*/
#define LAND  MS "."

#define LANEthernetInterfaceNumberOfEntries 				LAND"lan.LANEthernetInterfaceNumberOfEntries"
#define LANUSBInterfaceNumberOfEntries					LAND"lan.LANUSBInterfaceNumberOfEntries"	
#define LANWLANConfigurationNumberOfEntries				LAND"lan.LANWLANConfigurationNumberOfEntries"
//Landevice.template.LANHostConfigManagement.
#define ILtL_MACAddress									LAND"LANHostConfigManagement.MACAddress"
#define ILtL_DHCPServerConfigurable						LAND"LANHostConfigManagement.DHCPServerConfigurable"
#define ILtL_DHCPServerEnable							LAND"LANHostConfigManagement.DHCPServerEnable"
#define ILtL_DHCPRelay									LAND"LANHostConfigManagement.DHCPRelay"
#define ILtL_MinAddress									LAND"LANHostConfigManagement.MinAddress"
#define ILtL_DHCPServerConfigurable						LAND"LANHostConfigManagement.DHCPServerConfigurable"
//#define ILtL_DHCPServerEnable								LAND"LANHostConfigManagement.DHCPServerEnable	"
#define ILtL_DHCPRelay									LAND"LANHostConfigManagement.DHCPRelay"
#define ILtL_MinAddress									LAND"LANHostConfigManagement.MinAddress"
#define ILtL_MaxAddress									LAND"LANHostConfigManagement.MaxAddress"
#define ILtL_ReservedAddresses							LAND"LANHostConfigManagement.ReservedAddresses"
#define ILtL_SubnetMask									LAND"LANHostConfigManagement.SubnetMask"
#define ILtL_DNSServers									LAND"LANHostConfigManagement.DNSServers"
#define ILtL_DomainName									LAND"LANHostConfigManagement.DomainName"
#define ILtL_IPRouters									LAND"LANHostConfigManagement.IPRouters"
#define ILtL_DHCPLeaseTime								LAND"LANHostConfigManagement.DHCPLeaseTime"
#define ILtL_UseAllocatedWAN								LAND"LANHostConfigManagement.UseAllocatedWAN"
#define ILtL_AssociatedConnection							LAND"LANHostConfigManagement.AssociatedConnection"
#define ILtL_PassthroughLease							LAND"LANHostConfigManagement.PassthroughLease"
#define ILtL_PassthroughMACAddress						LAND"LANHostConfigManagement.PassthroughMACAddress"
#define ILtL_AllowedMACAddresses						LAND"LANHostConfigManagement.AllowedMACAddresses"
#define ILtL_IPInterfaceNumberOfEntries					LAND"LANHostConfigManagement.IPInterfaceNumberOfEntries"
#define ILtL_DHCPStaticAddressNumberOfEntries			LAND"LANHostConfigManagement.DHCPStaticAddressNumberOfEntries"
#define ILtL_DHCPOptionNumberOfEntries					LAND"LANHostConfigManagement.DHCPOptionNumberOfEntries"
#define ILtL_DHCPConditionalPoolNumberOfEntries			LAND"LANHostConfigManagement.DHCPConditionalPoolNumberOfEntries"
//Landevice.template.LANHostConfigManagement.IPInterface.template.
#define ILtLIt_Enable										LAND"lan.enable"
#define ILtLIt_IPInterfaceIPAddress						LAND"lan.ipaddr"
#define ILtLIt_IPInterfaceSubnetMask						LAND"lan.netmask"
#define ILtLIt_IPInterfaceAddressingType					LAND"lan.proto"
/*TR lan interface arguments*/



#endif 

