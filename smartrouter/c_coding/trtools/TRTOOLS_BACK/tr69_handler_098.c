int get_I_DeviceSummary(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(I_DeviceSummary, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_I_LANDeviceNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(I_LANDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_I_WANDeviceNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(I_WANDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ICP_DownloadTransports(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ICP_DownloadTransports, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ICP_UploadTransports(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ICP_UploadTransports, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_Manufacturer(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_Manufacturer, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_ManufacturerOUI(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_ManufacturerOUI, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_ModelName(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_ModelName, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_Description(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_Description, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_ProductClass(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_ProductClass, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_SerialNumber(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_SerialNumber, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_HardwareVersion(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_HardwareVersion, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_SoftwareVersion(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_SoftwareVersion, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_ModemFirmwareVersion(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_ModemFirmwareVersion, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_EnabledOptions(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_EnabledOptions, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_AdditionalHardwareVersion(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_AdditionalHardwareVersion, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_AdditionalSoftwareVersion(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_AdditionalSoftwareVersion, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_SpecVersion(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_SpecVersion, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_ProvisioningCode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_ProvisioningCode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ID_ProvisioningCode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ID_ProvisioningCode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ID_X_WKS_Key(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_X_WKS_Key, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_UpTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_UpTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_FirstUseDate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_FirstUseDate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_DeviceLog(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_DeviceLog, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_VendorConfigFileNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_VendorConfigFileNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IDV1_Name(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IDV1_Name, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IDV1_Version(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IDV1_Version, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IDV1_Date(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IDV1_Date, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IDV1_Description(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IDV1_Description, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_PersistentData(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_PersistentData, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ID_PersistentData(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ID_PersistentData, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ID_ConfigFile(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_ConfigFile, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ID_ConfigFile(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ID_ConfigFile, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_EnableCWMP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_EnableCWMP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_EnableCWMP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_EnableCWMP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_URL(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_URL, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_URL(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_URL, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_Username(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_Username, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_Username(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_Username, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_Password(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_Password, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_Password(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_Password, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_PeriodicInformEnable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_PeriodicInformEnable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_PeriodicInformEnable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_PeriodicInformEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_PeriodicInformInterval(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_PeriodicInformInterval, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_PeriodicInformInterval(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_PeriodicInformInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_PeriodicInformTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_PeriodicInformTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_PeriodicInformTime(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_PeriodicInformTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_ParameterKey(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_ParameterKey, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IM_ConnectionRequestURL(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_ConnectionRequestURL, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IM_ConnectionRequestUsername(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_ConnectionRequestUsername, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_ConnectionRequestUsername(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_ConnectionRequestUsername, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_ConnectionRequestPassword(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_ConnectionRequestPassword, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_ConnectionRequestPassword(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_ConnectionRequestPassword, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_UpgradesManaged(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_UpgradesManaged, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_UpgradesManaged(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_UpgradesManaged, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_KickURL(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_KickURL, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IM_DownloadProgressURL(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_DownloadProgressURL, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IM_DefaultActiveNotificationThrottle(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_DefaultActiveNotificationThrottle, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_DefaultActiveNotificationThrottle(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_DefaultActiveNotificationThrottle, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_UDPConnectionRequestAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_UDPConnectionRequestAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IM_UDPConnectionRequestAddressNotificationLimit(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_UDPConnectionRequestAddressNotificationLimit, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_UDPConnectionRequestAddressNotificationLimit(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_UDPConnectionRequestAddressNotificationLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_STUNEnable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_STUNEnable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_STUNEnable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_STUNEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_STUNServerAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_STUNServerAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_STUNServerAddress(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_STUNServerAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_STUNServerPort(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_STUNServerPort, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_STUNServerPort(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_STUNServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_STUNUsername(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_STUNUsername, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_STUNUsername(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_STUNUsername, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_STUNPassword(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_STUNPassword, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_STUNPassword(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_STUNPassword, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_STUNMaximumKeepAlivePeriod(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_STUNMaximumKeepAlivePeriod, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_STUNMaximumKeepAlivePeriod(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_STUNMaximumKeepAlivePeriod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_STUNMinimumKeepAlivePeriod(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_STUNMinimumKeepAlivePeriod, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_STUNMinimumKeepAlivePeriod(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_STUNMinimumKeepAlivePeriod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IM_NATDetected(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_NATDetected, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IM_ManageableDeviceNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_ManageableDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IM_ManageableDeviceNotificationLimit(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IM_ManageableDeviceNotificationLimit, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IM_ManageableDeviceNotificationLimit(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IM_ManageableDeviceNotificationLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IMM1_ManufacturerOUI(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IMM1_ManufacturerOUI, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IMM1_SerialNumber(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IMM1_SerialNumber, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IMM1_ProductClass(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IMM1_ProductClass, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IMM1_Host(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IMM1_Host, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IT_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IT_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IT_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IT_Status(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_Status, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IT_NTPServer1(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_NTPServer1, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IT_NTPServer1(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IT_NTPServer1, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IT_NTPServer2(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_NTPServer2, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IT_NTPServer2(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IT_NTPServer2, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IT_NTPServer3(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_NTPServer3, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IT_NTPServer3(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IT_NTPServer3, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IT_NTPServer4(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_NTPServer4, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IT_NTPServer4(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IT_NTPServer4, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IT_NTPServer5(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_NTPServer5, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IT_NTPServer5(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IT_NTPServer5, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IT_CurrentLocalTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_CurrentLocalTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IT_LocalTimeZone(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_LocalTimeZone, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IT_LocalTimeZone(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IT_LocalTimeZone, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IT_LocalTimeZoneName(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_LocalTimeZoneName, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IT_LocalTimeZoneName(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IT_LocalTimeZoneName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IT_DaylightSavingsUsed(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_DaylightSavingsUsed, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IT_DaylightSavingsUsed(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IT_DaylightSavingsUsed, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IT_DaylightSavingsStart(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_DaylightSavingsStart, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IT_DaylightSavingsStart(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IT_DaylightSavingsStart, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IT_DaylightSavingsEnd(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_DaylightSavingsEnd, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IT_DaylightSavingsEnd(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IT_DaylightSavingsEnd, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_UserDatabaseSupported(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_UserDatabaseSupported, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IU_SharedPassword(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_SharedPassword, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_SharedPassword(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_SharedPassword, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_PasswordRequired(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_PasswordRequired, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_PasswordRequired(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_PasswordRequired, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_PasswordUserSelectable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_PasswordUserSelectable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_PasswordUserSelectable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_PasswordUserSelectable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_UpgradeAvailable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_UpgradeAvailable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_UpgradeAvailable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_UpgradeAvailable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_WarrantyDate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_WarrantyDate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_WarrantyDate(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_WarrantyDate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_ISPName(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_ISPName, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_ISPName(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_ISPName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_ISPHelpDesk(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_ISPHelpDesk, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_ISPHelpDesk(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_ISPHelpDesk, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_ISPHomePage(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_ISPHomePage, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_ISPHomePage(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_ISPHomePage, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_ISPHelpPage(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_ISPHelpPage, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_ISPHelpPage(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_ISPHelpPage, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_ISPLogo(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_ISPLogo, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_ISPLogo(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_ISPLogo, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_ISPLogoSize(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_ISPLogoSize, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_ISPLogoSize(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_ISPLogoSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_ISPMailServer(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_ISPMailServer, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_ISPMailServer(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_ISPMailServer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_ISPNewsServer(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_ISPNewsServer, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_ISPNewsServer(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_ISPNewsServer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_TextColor(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_TextColor, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_TextColor(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_TextColor, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_BackgroundColor(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_BackgroundColor, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_BackgroundColor(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_BackgroundColor, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_ButtonColor(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_ButtonColor, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_ButtonColor(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_ButtonColor, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_ButtonTextColor(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_ButtonTextColor, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_ButtonTextColor(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_ButtonTextColor, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_AutoUpdateServer(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_AutoUpdateServer, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_AutoUpdateServer(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_AutoUpdateServer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_UserUpdateServer(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_UserUpdateServer, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_UserUpdateServer(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_UserUpdateServer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_ExampleLogin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_ExampleLogin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_ExampleLogin(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_ExampleLogin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_ExamplePassword(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_ExamplePassword, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_ExamplePassword(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_ExamplePassword, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_AvailableLanguages(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_AvailableLanguages, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IU_CurrentLanguage(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_CurrentLanguage, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_CurrentLanguage(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_CurrentLanguage, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IC_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IC_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IC_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IC_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IC_Status(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IC_Status, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IC_AllowedList(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IC_AllowedList, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IC_AllowedList(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IC_AllowedList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IC_CaptivePortalURL(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IC_CaptivePortalURL, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IC_CaptivePortalURL(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IC_CaptivePortalURL, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IL_DefaultConnectionService(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IL_DefaultConnectionService, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IL_DefaultConnectionService(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IL_DefaultConnectionService, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IL_ForwardNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IL_ForwardNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILFt_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_Status(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_Status, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILFt_StaticRoute(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_StaticRoute, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILFt_Type(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_Type, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_Type(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_Type, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_DestIPAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_DestIPAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_DestIPAddress(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_DestIPAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_DestSubnetMask(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_DestSubnetMask, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_DestSubnetMask(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_DestSubnetMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_SourceIPAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_SourceIPAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_SourceIPAddress(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_SourceIPAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_SourceSubnetMask(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_SourceSubnetMask, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_SourceSubnetMask(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_SourceSubnetMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_ForwardingPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_ForwardingPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_ForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_ForwardingPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_GatewayIPAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_GatewayIPAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_GatewayIPAddress(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_GatewayIPAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_Interface(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_Interface, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_Interface(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_ForwardingMetric(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_ForwardingMetric, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_ForwardingMetric(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_ForwardingMetric, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_MTU(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_MTU, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_MTU(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_MTU, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IL_MaxBridgeEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IL_MaxBridgeEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IL_MaxDBridgeEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IL_MaxDBridgeEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IL_MaxQBridgeEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IL_MaxQBridgeEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IL_MaxVLANEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IL_MaxVLANEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IL_MaxFilterEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IL_MaxFilterEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IL_MaxMarkingEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IL_MaxMarkingEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IL_BridgeNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IL_BridgeNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IL_FilterNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IL_FilterNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IL_MarkingNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IL_MarkingNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IL_AvailableInterfaceNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IL_AvailableInterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILBt_BridgeKey(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILBt_BridgeKey, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILBt_BridgeStandard(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILBt_BridgeStandard, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILBt_BridgeStandard(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILBt_BridgeStandard, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILBt_BridgeEnable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILBt_BridgeEnable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILBt_BridgeEnable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILBt_BridgeEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILBt_BridgeStatus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILBt_BridgeStatus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILBt_BridgeName(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILBt_BridgeName, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILBt_BridgeName(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILBt_BridgeName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILBt_VLANID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILBt_VLANID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILBt_VLANID(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILBt_VLANID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILBt_PortNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILBt_PortNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILBt_VLANNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILBt_VLANNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILBtPt_PortEnable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILBtPt_PortEnable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILBtPt_PortEnable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILBtPt_PortEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILBtPt_PortInterface(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILBtPt_PortInterface, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILBtPt_PortInterface(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILBtPt_PortInterface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILBtPt_PortState(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILBtPt_PortState, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILBtPt_PVID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILBtPt_PVID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILBtPt_PVID(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILBtPt_PVID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILBtPt_AcceptableFrameTypes(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILBtPt_AcceptableFrameTypes, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILBtPt_AcceptableFrameTypes(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILBtPt_AcceptableFrameTypes, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILBtPt_IngressFiltering(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILBtPt_IngressFiltering, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILBtPt_IngressFiltering(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILBtPt_IngressFiltering, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILBtVt_VLANEnable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILBtVt_VLANEnable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILBtVt_VLANEnable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILBtVt_VLANEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILBtVt_VLANName(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILBtVt_VLANName, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILBtVt_VLANName(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILBtVt_VLANName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILBtVt_VLANID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILBtVt_VLANID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILBtVt_VLANID(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILBtVt_VLANID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_FilterKey(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_FilterKey, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILFt_FilterEnable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_FilterEnable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_FilterEnable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_FilterEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_FilterStatus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_FilterStatus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILFt_FilterBridgeReference(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_FilterBridgeReference, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_FilterBridgeReference(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_FilterBridgeReference, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_ExclusivityOrder(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_ExclusivityOrder, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_ExclusivityOrder(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_ExclusivityOrder, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_FilterInterface(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_FilterInterface, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_FilterInterface(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_FilterInterface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_VLANIDFilter(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_VLANIDFilter, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_VLANIDFilter(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_VLANIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_AdmitOnlyVLANTagged(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_AdmitOnlyVLANTagged, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_AdmitOnlyVLANTagged(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_AdmitOnlyVLANTagged, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_EthertypeFilterList(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_EthertypeFilterList, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_EthertypeFilterList(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_EthertypeFilterList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_EthertypeFilterExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_EthertypeFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_EthertypeFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_EthertypeFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_SourceMACAddressFilterList(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_SourceMACAddressFilterList, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_SourceMACAddressFilterList(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_SourceMACAddressFilterList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_SourceMACAddressFilterExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_SourceMACAddressFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_SourceMACAddressFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_SourceMACAddressFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_DestMACAddressFilterList(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_DestMACAddressFilterList, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_DestMACAddressFilterList(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_DestMACAddressFilterList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_DestMACAddressFilterExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_DestMACAddressFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_DestMACAddressFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_DestMACAddressFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_SourceMACFromVendorClassIDFilter(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_SourceMACFromVendorClassIDFilter, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_SourceMACFromVendorClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_SourceMACFromVendorClassIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_SourceMACFromVendorClassIDFilterExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_SourceMACFromVendorClassIDFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_SourceMACFromVendorClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_SourceMACFromVendorClassIDFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_SourceMACFromVendorClassIDMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_SourceMACFromVendorClassIDMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_SourceMACFromVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_SourceMACFromVendorClassIDMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_DestMACFromVendorClassIDFilter(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_DestMACFromVendorClassIDFilter, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_DestMACFromVendorClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_DestMACFromVendorClassIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_DestMACFromVendorClassIDFilterExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_DestMACFromVendorClassIDFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_DestMACFromVendorClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_DestMACFromVendorClassIDFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_DestMACFromVendorClassIDMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_DestMACFromVendorClassIDMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_DestMACFromVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_DestMACFromVendorClassIDMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_SourceMACFromClientIDFilter(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_SourceMACFromClientIDFilter, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_SourceMACFromClientIDFilter(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_SourceMACFromClientIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_SourceMACFromClientIDFilterExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_SourceMACFromClientIDFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_SourceMACFromClientIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_SourceMACFromClientIDFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_DestMACFromClientIDFilter(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_DestMACFromClientIDFilter, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_DestMACFromClientIDFilter(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_DestMACFromClientIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_DestMACFromClientIDFilterExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_DestMACFromClientIDFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_DestMACFromClientIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_DestMACFromClientIDFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_SourceMACFromUserClassIDFilter(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_SourceMACFromUserClassIDFilter, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_SourceMACFromUserClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_SourceMACFromUserClassIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_SourceMACFromUserClassIDFilterExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_SourceMACFromUserClassIDFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_SourceMACFromUserClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_SourceMACFromUserClassIDFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_DestMACFromUserClassIDFilter(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_DestMACFromUserClassIDFilter, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_DestMACFromUserClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_DestMACFromUserClassIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILFt_DestMACFromUserClassIDFilterExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILFt_DestMACFromUserClassIDFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILFt_DestMACFromUserClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILFt_DestMACFromUserClassIDFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILMt_MarkingKey(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILMt_MarkingKey, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILMt_MarkingEnable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILMt_MarkingEnable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILMt_MarkingEnable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILMt_MarkingEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILMt_MarkingStatus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILMt_MarkingStatus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILMt_MarkingBridgeReference(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILMt_MarkingBridgeReference, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILMt_MarkingBridgeReference(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILMt_MarkingBridgeReference, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILMt_MarkingInterface(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILMt_MarkingInterface, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILMt_MarkingInterface(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILMt_MarkingInterface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILMt_VLANIDUntag(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILMt_VLANIDUntag, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILMt_VLANIDUntag(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILMt_VLANIDUntag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILMt_VLANIDMark(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILMt_VLANIDMark, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILMt_VLANIDMark(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILMt_VLANIDMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILMt_VLANIDMarkOverride(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILMt_VLANIDMarkOverride, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILMt_VLANIDMarkOverride(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILMt_VLANIDMarkOverride, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILMt_EthernetPriorityMark(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILMt_EthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILMt_EthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILMt_EthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILMt_EthernetPriorityOverride(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILMt_EthernetPriorityOverride, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILMt_EthernetPriorityOverride(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILMt_EthernetPriorityOverride, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILA1_AvailableInterfaceKey(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILA1_AvailableInterfaceKey, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILA1_InterfaceType(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILA1_InterfaceType, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILA1_InterfaceReference(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILA1_InterfaceReference, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQ_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQ_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQ_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQ_MaxQueues(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_MaxQueues, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQ_MaxClassificationEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_MaxClassificationEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQ_ClassificationNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_ClassificationNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQ_MaxAppEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_MaxAppEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQ_AppNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_AppNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQ_MaxFlowEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_MaxFlowEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQ_FlowNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_FlowNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQ_MaxPolicerEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_MaxPolicerEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQ_PolicerNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_PolicerNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQ_MaxQueueEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_MaxQueueEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQ_QueueNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_QueueNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQ_QueueStatsNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_QueueStatsNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQ_DefaultForwardingPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_DefaultForwardingPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQ_DefaultForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQ_DefaultForwardingPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQ_DefaultTrafficClass(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_DefaultTrafficClass, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQ_DefaultTrafficClass(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQ_DefaultTrafficClass, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQ_DefaultPolicer(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_DefaultPolicer, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQ_DefaultPolicer(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQ_DefaultPolicer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQ_DefaultQueue(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_DefaultQueue, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQ_DefaultQueue(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQ_DefaultQueue, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQ_DefaultDSCPMark(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_DefaultDSCPMark, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQ_DefaultDSCPMark(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQ_DefaultDSCPMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQ_DefaultEthernetPriorityMark(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_DefaultEthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQ_DefaultEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQ_DefaultEthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQ_AvailableAppList(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQ_AvailableAppList, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQCt_ClassificationKey(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_ClassificationKey, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQCt_ClassificationEnable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_ClassificationEnable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_ClassificationEnable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_ClassificationEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_ClassificationStatus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_ClassificationStatus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQCt_ClassificationOrder(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_ClassificationOrder, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_ClassificationOrder(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_ClassificationOrder, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_ClassInterface(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_ClassInterface, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_ClassInterface(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_ClassInterface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestIP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestIP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestIP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestIP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestMask(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestMask, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestMask(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestIPExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestIPExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestIPExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestIPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourceIP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourceIP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourceIP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourceIP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourceMask(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourceMask, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourceMask(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourceMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourceIPExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourceIPExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourceIPExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourceIPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_Protocol(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_Protocol, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_Protocol(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_Protocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_ProtocolExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_ProtocolExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_ProtocolExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_ProtocolExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestPort(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestPort, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestPort(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestPortRangeMax(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestPortRangeMax, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestPortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestPortRangeMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestPortExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestPortExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestPortExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestPortExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourcePort(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourcePort, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourcePort(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourcePort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourcePortRangeMax(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourcePortRangeMax, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourcePortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourcePortRangeMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourcePortExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourcePortExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourcePortExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourcePortExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourceMACAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourceMACAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourceMACAddress(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourceMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourceMACMask(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourceMACMask, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourceMACMask(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourceMACMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourceMACExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourceMACExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourceMACExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourceMACExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestMACAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestMACAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestMACAddress(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestMACMask(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestMACMask, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestMACMask(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestMACMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestMACExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestMACExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestMACExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestMACExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_Ethertype(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_Ethertype, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_Ethertype(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_Ethertype, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_EthertypeExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_EthertypeExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_EthertypeExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_EthertypeExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SSAP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SSAP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SSAP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SSAP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SSAPExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SSAPExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SSAPExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SSAPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DSAP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DSAP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DSAP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DSAP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DSAPExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DSAPExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DSAPExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DSAPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_LLCControl(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_LLCControl, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_LLCControl(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_LLCControl, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_LLCControlExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_LLCControlExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_LLCControlExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_LLCControlExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SNAPOUI(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SNAPOUI, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SNAPOUI(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SNAPOUI, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SNAPOUIExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SNAPOUIExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SNAPOUIExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SNAPOUIExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourceVendorClassID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourceVendorClassID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourceVendorClassID(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourceVendorClassID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourceVendorClassIDExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourceVendorClassIDExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourceVendorClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourceVendorClassIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourceVendorClassIDMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourceVendorClassIDMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourceVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourceVendorClassIDMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestVendorClassID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestVendorClassID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestVendorClassID(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestVendorClassID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestVendorClassIDExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestVendorClassIDExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestVendorClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestVendorClassIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestVendorClassIDMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestVendorClassIDMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestVendorClassIDMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourceClientID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourceClientID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourceClientID(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourceClientID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourceClientIDExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourceClientIDExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourceClientIDExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourceClientIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestClientID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestClientID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestClientID(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestClientID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestClientIDExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestClientIDExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestClientIDExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestClientIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourceUserClassID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourceUserClassID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourceUserClassID(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourceUserClassID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourceUserClassIDExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourceUserClassIDExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourceUserClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourceUserClassIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestUserClassID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestUserClassID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestUserClassID(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestUserClassID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestUserClassIDExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestUserClassIDExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestUserClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestUserClassIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourceVendorSpecificInfo(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourceVendorSpecificInfo, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourceVendorSpecificInfo(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourceVendorSpecificInfo, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourceVendorSpecificInfoExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourceVendorSpecificInfoExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourceVendorSpecificInfoExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourceVendorSpecificInfoExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourceVendorSpecificInfoEnterprise(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourceVendorSpecificInfoEnterprise, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourceVendorSpecificInfoEnterprise(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourceVendorSpecificInfoEnterprise, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourceVendorSpecificInfoSubOption(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourceVendorSpecificInfoSubOption, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourceVendorSpecificInfoSubOption(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourceVendorSpecificInfoSubOption, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_SourceVendorSpecificInfoMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_SourceVendorSpecificInfoMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_SourceVendorSpecificInfoMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_SourceVendorSpecificInfoMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestVendorSpecificInfo(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestVendorSpecificInfo, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestVendorSpecificInfo(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestVendorSpecificInfo, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestVendorSpecificInfoExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestVendorSpecificInfoExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestVendorSpecificInfoExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestVendorSpecificInfoExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestVendorSpecificInfoEnterprise(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestVendorSpecificInfoEnterprise, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestVendorSpecificInfoEnterprise(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestVendorSpecificInfoEnterprise, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestVendorSpecificInfoSubOption(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestVendorSpecificInfoSubOption, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestVendorSpecificInfoSubOption(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestVendorSpecificInfoSubOption, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DestVendorSpecificInfoMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DestVendorSpecificInfoMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DestVendorSpecificInfoMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DestVendorSpecificInfoMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_TCPACK(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_TCPACK, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_TCPACK(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_TCPACK, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_TCPACKExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_TCPACKExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_TCPACKExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_TCPACKExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_IPLengthMin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_IPLengthMin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_IPLengthMin(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_IPLengthMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_IPLengthMax(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_IPLengthMax, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_IPLengthMax(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_IPLengthMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_IPLengthExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_IPLengthExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_IPLengthExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_IPLengthExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DSCPCheck(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DSCPCheck, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DSCPCheck(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DSCPCheck, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DSCPExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DSCPExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DSCPExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DSCPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_DSCPMark(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_DSCPMark, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_DSCPMark(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_DSCPMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_EthernetPriorityCheck(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_EthernetPriorityCheck, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_EthernetPriorityCheck(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_EthernetPriorityCheck, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_EthernetPriorityExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_EthernetPriorityExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_EthernetPriorityExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_EthernetPriorityExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_EthernetPriorityMark(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_EthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_EthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_EthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_VLANIDCheck(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_VLANIDCheck, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_VLANIDCheck(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_VLANIDCheck, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_VLANIDExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_VLANIDExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_VLANIDExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_VLANIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_OutOfBandInfo(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_OutOfBandInfo, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_OutOfBandInfo(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_OutOfBandInfo, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_ForwardingPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_ForwardingPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_ForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_ForwardingPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_TrafficClass(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_TrafficClass, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_TrafficClass(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_TrafficClass, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_ClassPolicer(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_ClassPolicer, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_ClassPolicer(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_ClassPolicer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_ClassQueue(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_ClassQueue, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_ClassQueue(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_ClassQueue, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQCt_ClassApp(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQCt_ClassApp, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQCt_ClassApp(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQCt_ClassApp, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQAt_AppKey(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQAt_AppKey, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQAt_AppEnable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQAt_AppEnable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQAt_AppEnable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQAt_AppEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQAt_AppStatus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQAt_AppStatus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQAt_ProtocolIdentifier(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQAt_ProtocolIdentifier, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQAt_ProtocolIdentifier(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQAt_ProtocolIdentifier, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQAt_AppName(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQAt_AppName, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQAt_AppName(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQAt_AppName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQAt_AppDefaultForwardingPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQAt_AppDefaultForwardingPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQAt_AppDefaultForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQAt_AppDefaultForwardingPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQAt_AppDefaultTrafficClass(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQAt_AppDefaultTrafficClass, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQAt_AppDefaultTrafficClass(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQAt_AppDefaultTrafficClass, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQAt_AppDefaultPolicer(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQAt_AppDefaultPolicer, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQAt_AppDefaultPolicer(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQAt_AppDefaultPolicer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQAt_AppDefaultQueue(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQAt_AppDefaultQueue, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQAt_AppDefaultQueue(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQAt_AppDefaultQueue, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQAt_AppDefaultDSCPMark(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQAt_AppDefaultDSCPMark, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQAt_AppDefaultDSCPMark(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQAt_AppDefaultDSCPMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQAt_AppDefaultEthernetPriorityMark(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQAt_AppDefaultEthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQAt_AppDefaultEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQAt_AppDefaultEthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQFt_FlowKey(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQFt_FlowKey, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQFt_FlowEnable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQFt_FlowEnable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQFt_FlowEnable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQFt_FlowEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQFt_FlowStatus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQFt_FlowStatus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQFt_FlowType(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQFt_FlowType, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQFt_FlowType(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQFt_FlowType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQFt_FlowTypeParameters(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQFt_FlowTypeParameters, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQFt_FlowTypeParameters(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQFt_FlowTypeParameters, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQFt_FlowName(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQFt_FlowName, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQFt_FlowName(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQFt_FlowName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQFt_AppIdentifier(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQFt_AppIdentifier, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQFt_AppIdentifier(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQFt_AppIdentifier, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQFt_FlowForwardingPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQFt_FlowForwardingPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQFt_FlowForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQFt_FlowForwardingPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQFt_FlowTrafficClass(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQFt_FlowTrafficClass, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQFt_FlowTrafficClass(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQFt_FlowTrafficClass, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQFt_FlowPolicer(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQFt_FlowPolicer, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQFt_FlowPolicer(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQFt_FlowPolicer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQFt_FlowQueue(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQFt_FlowQueue, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQFt_FlowQueue(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQFt_FlowQueue, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQFt_FlowDSCPMark(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQFt_FlowDSCPMark, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQFt_FlowDSCPMark(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQFt_FlowDSCPMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQFt_FlowEthernetPriorityMark(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQFt_FlowEthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQFt_FlowEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQFt_FlowEthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQPt_PolicerKey(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_PolicerKey, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQPt_PolicerEnable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_PolicerEnable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQPt_PolicerEnable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQPt_PolicerEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQPt_PolicerStatus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_PolicerStatus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQPt_CommittedRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_CommittedRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQPt_CommittedRate(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQPt_CommittedRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQPt_CommittedBurstSize(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_CommittedBurstSize, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQPt_CommittedBurstSize(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQPt_CommittedBurstSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQPt_ExcessBurstSize(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_ExcessBurstSize, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQPt_ExcessBurstSize(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQPt_ExcessBurstSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQPt_PeakRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_PeakRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQPt_PeakRate(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQPt_PeakRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQPt_PeakBurstSize(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_PeakBurstSize, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQPt_PeakBurstSize(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQPt_PeakBurstSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQPt_MeterType(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_MeterType, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQPt_MeterType(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQPt_MeterType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQPt_PossibleMeterTypes(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_PossibleMeterTypes, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQPt_ConformingAction(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_ConformingAction, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQPt_ConformingAction(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQPt_ConformingAction, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQPt_PartialConformingAction(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_PartialConformingAction, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQPt_PartialConformingAction(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQPt_PartialConformingAction, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQPt_NonConformingAction(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_NonConformingAction, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQPt_NonConformingAction(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQPt_NonConformingAction, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQPt_CountedPackets(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_CountedPackets, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQPt_CountedBytes(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_CountedBytes, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQPt_TotalCountedPackets(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_TotalCountedPackets, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQPt_TotalCountedBytes(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_TotalCountedBytes, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQPt_ConformingCountedPackets(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_ConformingCountedPackets, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQPt_ConformingCountedBytes(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_ConformingCountedBytes, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQPt_PartiallyConformingCountedPackets(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_PartiallyConformingCountedPackets, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQPt_PartiallyConformingCountedBytes(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_PartiallyConformingCountedBytes, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQPt_NonConformingCountedPackets(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_NonConformingCountedPackets, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQPt_NonConformingCountedBytes(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQPt_NonConformingCountedBytes, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQQt_QueueKey(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_QueueKey, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQQt_QueueEnable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_QueueEnable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQQt_QueueEnable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQQt_QueueEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQQt_QueueStatus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_QueueStatus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQQt_TrafficClasses(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_TrafficClasses, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQQt_TrafficClasses(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQQt_TrafficClasses, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQQt_QueueInterface(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_QueueInterface, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQQt_QueueInterface(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQQt_QueueInterface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQQt_QueueBufferLength(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_QueueBufferLength, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQQt_QueueWeight(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_QueueWeight, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQQt_QueueWeight(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQQt_QueueWeight, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQQt_QueuePrecedence(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_QueuePrecedence, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQQt_QueuePrecedence(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQQt_QueuePrecedence, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQQt_REDThreshold(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_REDThreshold, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQQt_REDThreshold(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQQt_REDThreshold, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQQt_REDPercentage(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_REDPercentage, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQQt_REDPercentage(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQQt_REDPercentage, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQQt_DropAlgorithm(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_DropAlgorithm, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQQt_DropAlgorithm(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQQt_DropAlgorithm, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQQt_SchedulerAlgorithm(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_SchedulerAlgorithm, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQQt_SchedulerAlgorithm(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQQt_SchedulerAlgorithm, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQQt_ShapingRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_ShapingRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQQt_ShapingRate(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQQt_ShapingRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQQt_ShapingBurstSize(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_ShapingBurstSize, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQQt_ShapingBurstSize(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQQt_ShapingBurstSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQQt_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQQt_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQQt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQQt_Status(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_Status, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQQt_Queue(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_Queue, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQQt_Queue(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQQt_Queue, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQQt_Interface(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_Interface, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IQQt_Interface(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IQQt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IQQt_OutputPackets(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_OutputPackets, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQQt_OutputBytes(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_OutputBytes, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQQt_DroppedPackets(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_DroppedPackets, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQQt_DroppedBytes(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_DroppedBytes, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQQt_QueueOccupancyPackets(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_QueueOccupancyPackets, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IQQt_QueueOccupancyPercentage(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IQQt_QueueOccupancyPercentage, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IL_ConfigPassword(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IL_ConfigPassword, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IL_ConfigPassword(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IL_ConfigPassword, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_II_DiagnosticsState(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(II_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_II_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(II_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_II_Interface(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(II_Interface, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_II_Interface(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(II_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_II_Host(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(II_Host, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_II_Host(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(II_Host, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_II_NumberOfRepetitions(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(II_NumberOfRepetitions, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_II_NumberOfRepetitions(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(II_NumberOfRepetitions, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_II_Timeout(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(II_Timeout, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_II_Timeout(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(II_Timeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_II_DataBlockSize(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(II_DataBlockSize, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_II_DataBlockSize(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(II_DataBlockSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_II_DSCP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(II_DSCP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_II_DSCP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(II_DSCP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_II_SuccessCount(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(II_SuccessCount, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_II_FailureCount(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(II_FailureCount, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_II_AverageResponseTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(II_AverageResponseTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_II_MinimumResponseTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(II_MinimumResponseTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_II_MaximumResponseTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(II_MaximumResponseTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IT_DiagnosticsState(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IT_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IT_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IT_Interface(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_Interface, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IT_Interface(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IT_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IT_Host(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_Host, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IT_Host(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IT_Host, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IT_NumberOfTries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_NumberOfTries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IT_NumberOfTries(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IT_NumberOfTries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IT_Timeout(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_Timeout, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IT_Timeout(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IT_Timeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IT_DataBlockSize(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_DataBlockSize, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IT_DataBlockSize(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IT_DataBlockSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IT_DSCP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_DSCP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IT_DSCP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IT_DSCP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IT_MaxHopCount(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_MaxHopCount, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IT_MaxHopCount(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IT_MaxHopCount, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IT_ResponseTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_ResponseTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IT_RouteHopsNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IT_RouteHopsNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ITR1_HopHost(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ITR1_HopHost, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ITR1_HopHostAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ITR1_HopHostAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ITR1_HopErrorCode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ITR1_HopErrorCode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ITR1_HopRTTimes(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ITR1_HopRTTimes, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_DiagnosticsState(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ID_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ID_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ID_Interface(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_Interface, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ID_Interface(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ID_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ID_DownloadURL(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_DownloadURL, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ID_DownloadURL(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ID_DownloadURL, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ID_DSCP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_DSCP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ID_DSCP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ID_DSCP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ID_EthernetPriority(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_EthernetPriority, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ID_EthernetPriority(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ID_EthernetPriority, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ID_ROMTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_ROMTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_BOMTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_BOMTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_EOMTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_EOMTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_TestBytesReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_TestBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_TotalBytesReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_TotalBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_TCPOpenRequestTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_TCPOpenRequestTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ID_TCPOpenResponseTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ID_TCPOpenResponseTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IU_DiagnosticsState(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_Interface(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_Interface, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_Interface(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_UploadURL(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_UploadURL, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_UploadURL(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_UploadURL, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_DSCP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_DSCP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_DSCP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_DSCP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_EthernetPriority(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_EthernetPriority, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_EthernetPriority(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_EthernetPriority, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_TestFileLength(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_TestFileLength, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_TestFileLength(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_TestFileLength, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_ROMTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_ROMTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IU_BOMTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_BOMTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IU_EOMTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_EOMTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IU_TotalBytesSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_TotalBytesSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IU_TCPOpenRequestTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_TCPOpenRequestTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IU_TCPOpenResponseTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_TCPOpenResponseTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IU_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_Interface_678(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_Interface_678, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_Interface_678(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_Interface_678, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_SourceIPAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_SourceIPAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_SourceIPAddress(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_SourceIPAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_UDPPort(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_UDPPort, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_UDPPort(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_UDPPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_EchoPlusEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_EchoPlusEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IU_EchoPlusEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IU_EchoPlusEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IU_EchoPlusSupported(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_EchoPlusSupported, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IU_PacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IU_PacketsResponded(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_PacketsResponded, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IU_BytesReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IU_BytesResponded(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_BytesResponded, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IU_TimeFirstPacketReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_TimeFirstPacketReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IU_TimeLastPacketReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IU_TimeLastPacketReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILt_LANEthernetInterfaceNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILt_LANEthernetInterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILt_LANUSBInterfaceNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILt_LANUSBInterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILt_LANWLANConfigurationNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILt_LANWLANConfigurationNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL_MACAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL_DHCPServerConfigurable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_DHCPServerConfigurable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL_DHCPServerConfigurable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL_DHCPServerConfigurable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL_DHCPServerEnable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_DHCPServerEnable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL_DHCPServerEnable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL_DHCPServerEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL_DHCPRelay(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_DHCPRelay, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL_MinAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_MinAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL_MinAddress(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL_MinAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL_MaxAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_MaxAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL_MaxAddress(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL_MaxAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL_ReservedAddresses(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_ReservedAddresses, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL_ReservedAddresses(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL_ReservedAddresses, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL_SubnetMask(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_SubnetMask, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL_SubnetMask(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL_SubnetMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL_DNSServers(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_DNSServers, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL_DNSServers(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL_DNSServers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL_DomainName(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_DomainName, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL_DomainName(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL_DomainName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL_IPRouters(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_IPRouters, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL_IPRouters(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL_IPRouters, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL_DHCPLeaseTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_DHCPLeaseTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL_DHCPLeaseTime(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL_DHCPLeaseTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL_UseAllocatedWAN(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_UseAllocatedWAN, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL_UseAllocatedWAN(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL_UseAllocatedWAN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL_AssociatedConnection(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_AssociatedConnection, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL_AssociatedConnection(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL_AssociatedConnection, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL_PassthroughLease(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_PassthroughLease, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL_PassthroughLease(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL_PassthroughLease, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL_PassthroughMACAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_PassthroughMACAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL_PassthroughMACAddress(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL_PassthroughMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL_AllowedMACAddresses(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_AllowedMACAddresses, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL_AllowedMACAddresses(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL_AllowedMACAddresses, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL_IPInterfaceNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_IPInterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL_DHCPStaticAddressNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_DHCPStaticAddressNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL_DHCPOptionNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_DHCPOptionNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL_DHCPConditionalPoolNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL_DHCPConditionalPoolNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtLIt_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLIt_IPInterfaceIPAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLIt_IPInterfaceIPAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLIt_IPInterfaceIPAddress(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLIt_IPInterfaceIPAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLIt_IPInterfaceSubnetMask(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLIt_IPInterfaceSubnetMask, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLIt_IPInterfaceSubnetMask(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLIt_IPInterfaceSubnetMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLIt_IPInterfaceAddressingType(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLIt_IPInterfaceAddressingType, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLIt_IPInterfaceAddressingType(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLIt_IPInterfaceAddressingType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_Chaddr(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_Chaddr, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_Chaddr(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_Chaddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_Yiaddr(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_Yiaddr, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_Yiaddr(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_Yiaddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_Enable_746(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_Enable_746, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_Enable_746(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_Enable_746, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_Tag(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_Tag, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_Tag(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_Tag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_Value(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_Value, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_Value(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_Value, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_Enable_752(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_Enable_752, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_Enable_752(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_Enable_752, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_PoolOrder(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_PoolOrder, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_PoolOrder(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_PoolOrder, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_SourceInterface(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_SourceInterface, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_SourceInterface(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_SourceInterface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_VendorClassID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_VendorClassID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_VendorClassID(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_VendorClassID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_VendorClassIDExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_VendorClassIDExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_VendorClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_VendorClassIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_VendorClassIDMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_VendorClassIDMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_VendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_VendorClassIDMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_ClientID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_ClientID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_ClientID(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_ClientID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_ClientIDExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_ClientIDExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_ClientIDExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_ClientIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_UserClassID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_UserClassID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_UserClassID(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_UserClassID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_UserClassIDExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_UserClassIDExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_UserClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_UserClassIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_Chaddr_772(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_Chaddr_772, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_Chaddr_772(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_Chaddr_772, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_ChaddrMask(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_ChaddrMask, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_ChaddrMask(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_ChaddrMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_ChaddrExclude(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_ChaddrExclude, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_ChaddrExclude(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_ChaddrExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_LocallyServed(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_LocallyServed, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_LocallyServed(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_LocallyServed, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_MinAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_MinAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_MinAddress(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_MinAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_MaxAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_MaxAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_MaxAddress(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_MaxAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_ReservedAddresses(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_ReservedAddresses, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_ReservedAddresses(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_ReservedAddresses, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_SubnetMask(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_SubnetMask, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_SubnetMask(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_SubnetMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_DNSServers(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_DNSServers, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_DNSServers(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_DNSServers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_DomainName(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_DomainName, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_DomainName(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_DomainName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_IPRouters(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_IPRouters, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_IPRouters(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_IPRouters, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_DHCPLeaseTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_DHCPLeaseTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_DHCPLeaseTime(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_DHCPLeaseTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_UseAllocatedWAN(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_UseAllocatedWAN, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_UseAllocatedWAN(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_UseAllocatedWAN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_AssociatedConnection(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_AssociatedConnection, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_AssociatedConnection(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_AssociatedConnection, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_DHCPServerIPAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_DHCPServerIPAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDt_DHCPServerIPAddress(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDt_DHCPServerIPAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDt_DHCPStaticAddressNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_DHCPStaticAddressNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtLDt_DHCPOptionNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDt_DHCPOptionNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtLDtDt_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDtDt_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDtDt_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDtDt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDtDt_Chaddr(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDtDt_Chaddr, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDtDt_Chaddr(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDtDt_Chaddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDtDt_Yiaddr(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDtDt_Yiaddr, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDtDt_Yiaddr(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDtDt_Yiaddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDtDt_Enable_810(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDtDt_Enable_810, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDtDt_Enable_810(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDtDt_Enable_810, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDtDt_Tag(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDtDt_Tag, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDtDt_Tag(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDtDt_Tag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtLDtDt_Value(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtLDtDt_Value, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtLDtDt_Value(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtLDtDt_Value, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL1_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL1_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL1_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL1_Status(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1_Status, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1_Name(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1_Name, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1_MACAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1_MACAddressControlEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1_MACAddressControlEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL1_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL1_MACAddressControlEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL1_MaxBitRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL1_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL1_MaxBitRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL1_DuplexMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1_DuplexMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL1_DuplexMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL1_DuplexMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL1S_BytesSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_BytesReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_PacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_PacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_ErrorsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_ErrorsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_UnicastPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_UnicastPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_DiscardPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_DiscardPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_MulticastPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_MulticastPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_BroadcastPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_BroadcastPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_UnknownProtoPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1_Enable_842(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1_Enable_842, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL1_Enable_842(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL1_Enable_842, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL1_Status_844(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1_Status_844, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1_Name_845(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1_Name_845, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1_MACAddress_846(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1_MACAddress_846, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1_MACAddressControlEnabled_847(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1_MACAddressControlEnabled_847, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtL1_MACAddressControlEnabled_847(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtL1_MACAddressControlEnabled_847, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtL1_Standard(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1_Standard, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1_Type(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1_Type, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1_Rate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1_Rate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1_Power(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1_Power, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_BytesSent_853(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_BytesSent_853, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_BytesReceived_854(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_BytesReceived_854, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_CellsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_CellsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_CellsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_CellsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_ErrorsSent_857(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_ErrorsSent_857, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_ErrorsReceived_858(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_ErrorsReceived_858, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_UnicastPacketsSent_859(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_UnicastPacketsSent_859, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_UnicastPacketsReceived_860(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_UnicastPacketsReceived_860, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_DiscardPacketsSent_861(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_DiscardPacketsSent_861, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_DiscardPacketsReceived_862(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_DiscardPacketsReceived_862, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_MulticastPacketsSent_863(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_MulticastPacketsSent_863, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_MulticastPacketsReceived_864(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_MulticastPacketsReceived_864, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_BroadcastPacketsSent_865(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_BroadcastPacketsSent_865, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_BroadcastPacketsReceived_866(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_BroadcastPacketsReceived_866, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtL1S_UnknownProtoPacketsReceived_867(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtL1S_UnknownProtoPacketsReceived_867, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_Status(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_Status, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1_Name(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_Name, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1_BSSID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_BSSID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1_MaxBitRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_MaxBitRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_Channel(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_Channel, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_Channel(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_Channel, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_AutoChannelEnable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_AutoChannelEnable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_AutoChannelEnable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_AutoChannelEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_SSID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_SSID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_SSID(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_SSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_BeaconType(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_BeaconType, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_BeaconType(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_BeaconType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_MACAddressControlEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_MACAddressControlEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_MACAddressControlEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_Standard(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_Standard, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1_WEPKeyIndex(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_WEPKeyIndex, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_WEPKeyIndex(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_WEPKeyIndex, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_KeyPassphrase(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_WEPEncryptionLevel(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_WEPEncryptionLevel, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1_BasicEncryptionModes(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_BasicEncryptionModes, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_BasicEncryptionModes(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_BasicEncryptionModes, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_BasicAuthenticationMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_BasicAuthenticationMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_BasicAuthenticationMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_BasicAuthenticationMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_WPAEncryptionModes(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_WPAEncryptionModes, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_WPAEncryptionModes(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_WPAEncryptionModes, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_WPAAuthenticationMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_WPAAuthenticationMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_WPAAuthenticationMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_WPAAuthenticationMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_IEEE11iEncryptionModes(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_IEEE11iEncryptionModes, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_IEEE11iEncryptionModes(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_IEEE11iEncryptionModes, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_IEEE11iAuthenticationMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_IEEE11iAuthenticationMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_IEEE11iAuthenticationMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_IEEE11iAuthenticationMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_PossibleChannels(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_PossibleChannels, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1_BasicDataTransmitRates(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_BasicDataTransmitRates, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_BasicDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_BasicDataTransmitRates, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_OperationalDataTransmitRates(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_OperationalDataTransmitRates, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_OperationalDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_OperationalDataTransmitRates, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_PossibleDataTransmitRates(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_PossibleDataTransmitRates, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1_InsecureOOBAccessEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_InsecureOOBAccessEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_InsecureOOBAccessEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_InsecureOOBAccessEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_BeaconAdvertisementEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_BeaconAdvertisementEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_BeaconAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_BeaconAdvertisementEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_SSIDAdvertisementEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_RadioEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_RadioEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_RadioEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_RadioEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_TransmitPowerSupported(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_TransmitPowerSupported, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1_TransmitPower(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_TransmitPower, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_TransmitPower(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_TransmitPower, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_AutoRateFallBackEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_AutoRateFallBackEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_AutoRateFallBackEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_AutoRateFallBackEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_LocationDescription(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_LocationDescription, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_LocationDescription(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_LocationDescription, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_RegulatoryDomain(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_RegulatoryDomain, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_RegulatoryDomain(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_RegulatoryDomain, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_TotalPSKFailures(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_TotalPSKFailures, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1_TotalIntegrityFailures(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_TotalIntegrityFailures, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1_ChannelsInUse(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_ChannelsInUse, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1_DeviceOperationMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_DeviceOperationMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_DeviceOperationMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_DeviceOperationMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_DistanceFromRoot(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_DistanceFromRoot, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_DistanceFromRoot(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_DistanceFromRoot, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_PeerBSSID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_PeerBSSID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_PeerBSSID(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_PeerBSSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_AuthenticationServiceMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_AuthenticationServiceMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_AuthenticationServiceMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_AuthenticationServiceMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_WMMSupported(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_WMMSupported, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1_UAPSDSupported(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_UAPSDSupported, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1_WMMEnable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_WMMEnable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_WMMEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_UAPSDEnable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_UAPSDEnable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1_UAPSDEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1_TotalBytesSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_TotalBytesSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1_TotalBytesReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_TotalBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1_TotalPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_TotalPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1_TotalPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_TotalPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1_TotalAssociations(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1_TotalAssociations, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1S_ErrorsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1S_ErrorsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1S_UnicastPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1S_UnicastPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1S_DiscardPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1S_DiscardPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1S_MulticastPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1S_MulticastPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1S_BroadcastPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1S_BroadcastPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1S_UnknownProtoPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1W_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1W_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1W_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1W_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1W_DeviceName(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1W_DeviceName, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1W_DevicePassword(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1W_DevicePassword, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1W_DevicePassword(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1W_DevicePassword, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1W_UUID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1W_UUID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1W_Version(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1W_Version, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1W_ConfigMethodsSupported(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1W_ConfigMethodsSupported, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1W_ConfigMethodsEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1W_ConfigMethodsEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1W_ConfigMethodsEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1W_ConfigMethodsEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1W_SetupLockedState(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1W_SetupLockedState, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1W_SetupLock(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1W_SetupLock, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1W_SetupLock(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1W_SetupLock, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1W_ConfigurationState(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1W_ConfigurationState, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1W_LastConfigurationError(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1W_LastConfigurationError, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1W_RegistrarNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1W_RegistrarNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1W_RegistrarEstablished(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1W_RegistrarEstablished, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1WR1_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1WR1_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1WR1_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1WR1_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1WR1_UUID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1WR1_UUID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1WR1_DeviceName(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1WR1_DeviceName, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1A1_AssociatedDeviceMACAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A1_AssociatedDeviceMACAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1A1_AssociatedDeviceIPAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A1_AssociatedDeviceIPAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1A1_AssociatedDeviceAuthenticationState(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A1_AssociatedDeviceAuthenticationState, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1A1_LastRequestedUnicastCipher(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A1_LastRequestedUnicastCipher, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1A1_LastRequestedMulticastCipher(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A1_LastRequestedMulticastCipher, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1A1_LastPMKId(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A1_LastPMKId, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1A1_LastDataTransmitRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A1_LastDataTransmitRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtW1W1_WEPKey(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1W1_WEPKey, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1W1_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1W1_WEPKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1P1_PreSharedKey(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1P1_PreSharedKey, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1P1_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1P1_PreSharedKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1P1_KeyPassphrase(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1P1_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1P1_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1P1_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1P1_AssociatedDeviceMACAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1P1_AssociatedDeviceMACAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1P1_AssociatedDeviceMACAddress(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1P1_AssociatedDeviceMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A1_AIFSN(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A1_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A1_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A1_ECWMin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A1_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A1_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A1_ECWMax(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A1_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A1_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A1_TXOP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A1_TXOP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A1_TXOP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A1_TXOP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A1_AckPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A1_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A1_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A2_AIFSN(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A2_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A2_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A2_ECWMin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A2_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A2_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A2_ECWMax(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A2_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A2_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A2_TXOP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A2_TXOP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A2_TXOP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A2_TXOP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A2_AckPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A2_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A2_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A3_AIFSN(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A3_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A3_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A3_ECWMin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A3_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A3_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A3_ECWMax(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A3_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A3_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A3_TXOP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A3_TXOP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A3_TXOP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A3_TXOP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A3_AckPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A3_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A3_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A4_AIFSN(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A4_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A4_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A4_ECWMin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A4_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A4_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A4_ECWMax(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A4_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A4_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A4_TXOP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A4_TXOP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A4_TXOP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A4_TXOP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1A4_AckPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1A4_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1A4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1A4_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S1_AIFSN(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S1_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S1_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S1_ECWMin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S1_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S1_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S1_ECWMax(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S1_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S1_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S1_TXOP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S1_TXOP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S1_TXOP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S1_TXOP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S1_AckPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S1_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S1_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S2_AIFSN(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S2_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S2_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S2_ECWMin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S2_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S2_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S2_ECWMax(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S2_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S2_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S2_TXOP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S2_TXOP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S2_TXOP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S2_TXOP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S2_AckPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S2_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S2_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S3_AIFSN(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S3_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S3_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S3_ECWMin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S3_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S3_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S3_ECWMax(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S3_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S3_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S3_TXOP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S3_TXOP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S3_TXOP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S3_TXOP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S3_AckPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S3_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S3_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S4_AIFSN(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S4_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S4_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S4_ECWMin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S4_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S4_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S4_ECWMax(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S4_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S4_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S4_TXOP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S4_TXOP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S4_TXOP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S4_TXOP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtW1S4_AckPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtW1S4_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILtW1S4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILtW1S4_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILtH_HostNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtH_HostNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtHH1_IPAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtHH1_IPAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtHH1_AddressSource(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtHH1_AddressSource, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtHH1_LeaseTimeRemaining(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtHH1_LeaseTimeRemaining, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtHH1_MACAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtHH1_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtHH1_Layer2Interface(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtHH1_Layer2Interface, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtHH1_VendorClassID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtHH1_VendorClassID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtHH1_ClientID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtHH1_ClientID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtHH1_UserClassID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtHH1_UserClassID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtHH1_HostName(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtHH1_HostName, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtHH1_InterfaceType(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtHH1_InterfaceType, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILtHH1_Active(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILtHH1_Active, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IL_LANEthernetInterfaceNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IL_LANEthernetInterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IL_LANUSBInterfaceNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IL_LANUSBInterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IL_LANWLANConfigurationNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IL_LANWLANConfigurationNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILL1_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILL1_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILL1_Status(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1_Status, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1_Name(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1_Name, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1_MACAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1_MACAddressControlEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1_MACAddressControlEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILL1_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILL1_MACAddressControlEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILL1_MaxBitRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILL1_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILL1_MaxBitRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILL1_DuplexMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1_DuplexMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILL1_DuplexMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILL1_DuplexMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILL1S_BytesSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_BytesReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_PacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_PacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_ErrorsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_ErrorsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_UnicastPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_UnicastPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_DiscardPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_DiscardPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_MulticastPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_MulticastPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_BroadcastPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_BroadcastPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_UnknownProtoPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1_Enable_1116(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1_Enable_1116, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILL1_Enable_1116(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILL1_Enable_1116, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILL1_Status_1118(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1_Status_1118, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1_Name_1119(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1_Name_1119, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1_MACAddress_1120(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1_MACAddress_1120, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1_MACAddressControlEnabled_1121(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1_MACAddressControlEnabled_1121, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILL1_MACAddressControlEnabled_1121(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILL1_MACAddressControlEnabled_1121, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILL1_Standard(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1_Standard, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1_Type(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1_Type, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1_Rate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1_Rate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1_Power(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1_Power, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_BytesSent_1127(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_BytesSent_1127, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_BytesReceived_1128(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_BytesReceived_1128, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_CellsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_CellsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_CellsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_CellsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_ErrorsSent_1131(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_ErrorsSent_1131, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_ErrorsReceived_1132(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_ErrorsReceived_1132, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_UnicastPacketsSent_1133(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_UnicastPacketsSent_1133, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_UnicastPacketsReceived_1134(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_UnicastPacketsReceived_1134, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_DiscardPacketsSent_1135(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_DiscardPacketsSent_1135, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_DiscardPacketsReceived_1136(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_DiscardPacketsReceived_1136, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_MulticastPacketsSent_1137(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_MulticastPacketsSent_1137, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_MulticastPacketsReceived_1138(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_MulticastPacketsReceived_1138, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_BroadcastPacketsSent_1139(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_BroadcastPacketsSent_1139, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_BroadcastPacketsReceived_1140(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_BroadcastPacketsReceived_1140, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILL1S_UnknownProtoPacketsReceived_1141(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILL1S_UnknownProtoPacketsReceived_1141, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_Status(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_Status, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1_Name(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_Name, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1_BSSID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_BSSID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1_MaxBitRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_MaxBitRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_Channel(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_Channel, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_Channel(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_Channel, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_AutoChannelEnable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_AutoChannelEnable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_AutoChannelEnable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_AutoChannelEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_SSID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_SSID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_SSID(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_SSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_BeaconType(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_BeaconType, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_BeaconType(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_BeaconType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_MACAddressControlEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_MACAddressControlEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_MACAddressControlEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_Standard(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_Standard, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1_WEPKeyIndex(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_WEPKeyIndex, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_WEPKeyIndex(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_WEPKeyIndex, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_KeyPassphrase(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_WEPEncryptionLevel(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_WEPEncryptionLevel, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1_BasicEncryptionModes(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_BasicEncryptionModes, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_BasicEncryptionModes(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_BasicEncryptionModes, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_BasicAuthenticationMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_BasicAuthenticationMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_BasicAuthenticationMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_BasicAuthenticationMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_WPAEncryptionModes(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_WPAEncryptionModes, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_WPAEncryptionModes(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_WPAEncryptionModes, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_WPAAuthenticationMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_WPAAuthenticationMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_WPAAuthenticationMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_WPAAuthenticationMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_IEEE11iEncryptionModes(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_IEEE11iEncryptionModes, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_IEEE11iEncryptionModes(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_IEEE11iEncryptionModes, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_IEEE11iAuthenticationMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_IEEE11iAuthenticationMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_IEEE11iAuthenticationMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_IEEE11iAuthenticationMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_PossibleChannels(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_PossibleChannels, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1_BasicDataTransmitRates(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_BasicDataTransmitRates, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_BasicDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_BasicDataTransmitRates, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_OperationalDataTransmitRates(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_OperationalDataTransmitRates, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_OperationalDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_OperationalDataTransmitRates, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_PossibleDataTransmitRates(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_PossibleDataTransmitRates, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1_InsecureOOBAccessEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_InsecureOOBAccessEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_InsecureOOBAccessEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_InsecureOOBAccessEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_BeaconAdvertisementEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_BeaconAdvertisementEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_BeaconAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_BeaconAdvertisementEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_SSIDAdvertisementEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_RadioEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_RadioEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_RadioEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_RadioEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_TransmitPowerSupported(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_TransmitPowerSupported, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1_TransmitPower(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_TransmitPower, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_TransmitPower(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_TransmitPower, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_AutoRateFallBackEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_AutoRateFallBackEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_AutoRateFallBackEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_AutoRateFallBackEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_LocationDescription(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_LocationDescription, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_LocationDescription(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_LocationDescription, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_RegulatoryDomain(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_RegulatoryDomain, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_RegulatoryDomain(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_RegulatoryDomain, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_TotalPSKFailures(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_TotalPSKFailures, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1_TotalIntegrityFailures(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_TotalIntegrityFailures, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1_ChannelsInUse(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_ChannelsInUse, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1_DeviceOperationMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_DeviceOperationMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_DeviceOperationMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_DeviceOperationMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_DistanceFromRoot(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_DistanceFromRoot, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_DistanceFromRoot(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_DistanceFromRoot, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_PeerBSSID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_PeerBSSID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_PeerBSSID(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_PeerBSSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_AuthenticationServiceMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_AuthenticationServiceMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_AuthenticationServiceMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_AuthenticationServiceMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_WMMSupported(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_WMMSupported, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1_UAPSDSupported(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_UAPSDSupported, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1_WMMEnable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_WMMEnable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_WMMEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_UAPSDEnable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_UAPSDEnable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1_UAPSDEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1_TotalBytesSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_TotalBytesSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1_TotalBytesReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_TotalBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1_TotalPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_TotalPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1_TotalPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_TotalPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1_TotalAssociations(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1_TotalAssociations, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1S_ErrorsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1S_ErrorsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1S_UnicastPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1S_UnicastPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1S_DiscardPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1S_DiscardPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1S_MulticastPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1S_MulticastPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1S_BroadcastPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1S_BroadcastPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1S_UnknownProtoPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1W_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1W_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1W_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1W_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1W_DeviceName(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1W_DeviceName, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1W_DevicePassword(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1W_DevicePassword, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1W_DevicePassword(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1W_DevicePassword, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1W_UUID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1W_UUID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1W_Version(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1W_Version, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1W_ConfigMethodsSupported(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1W_ConfigMethodsSupported, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1W_ConfigMethodsEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1W_ConfigMethodsEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1W_ConfigMethodsEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1W_ConfigMethodsEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1W_SetupLockedState(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1W_SetupLockedState, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1W_SetupLock(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1W_SetupLock, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1W_SetupLock(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1W_SetupLock, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1W_ConfigurationState(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1W_ConfigurationState, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1W_LastConfigurationError(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1W_LastConfigurationError, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1W_RegistrarNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1W_RegistrarNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1W_RegistrarEstablished(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1W_RegistrarEstablished, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1WR1_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1WR1_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1WR1_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1WR1_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1WR1_UUID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1WR1_UUID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1WR1_DeviceName(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1WR1_DeviceName, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1A1_AssociatedDeviceMACAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A1_AssociatedDeviceMACAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1A1_AssociatedDeviceIPAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A1_AssociatedDeviceIPAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1A1_AssociatedDeviceAuthenticationState(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A1_AssociatedDeviceAuthenticationState, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1A1_LastRequestedUnicastCipher(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A1_LastRequestedUnicastCipher, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1A1_LastRequestedMulticastCipher(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A1_LastRequestedMulticastCipher, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1A1_LastPMKId(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A1_LastPMKId, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1A1_LastDataTransmitRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A1_LastDataTransmitRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_ILW1W1_WEPKey(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1W1_WEPKey, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1W1_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1W1_WEPKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1P1_PreSharedKey(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1P1_PreSharedKey, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1P1_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1P1_PreSharedKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1P1_KeyPassphrase(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1P1_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1P1_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1P1_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1P1_AssociatedDeviceMACAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1P1_AssociatedDeviceMACAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1P1_AssociatedDeviceMACAddress(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1P1_AssociatedDeviceMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A1_AIFSN(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A1_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A1_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A1_ECWMin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A1_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A1_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A1_ECWMax(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A1_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A1_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A1_TXOP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A1_TXOP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A1_TXOP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A1_TXOP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A1_AckPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A1_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A1_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A2_AIFSN(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A2_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A2_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A2_ECWMin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A2_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A2_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A2_ECWMax(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A2_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A2_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A2_TXOP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A2_TXOP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A2_TXOP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A2_TXOP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A2_AckPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A2_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A2_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A3_AIFSN(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A3_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A3_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A3_ECWMin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A3_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A3_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A3_ECWMax(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A3_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A3_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A3_TXOP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A3_TXOP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A3_TXOP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A3_TXOP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A3_AckPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A3_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A3_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A4_AIFSN(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A4_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A4_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A4_ECWMin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A4_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A4_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A4_ECWMax(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A4_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A4_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A4_TXOP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A4_TXOP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A4_TXOP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A4_TXOP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1A4_AckPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1A4_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1A4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1A4_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S1_AIFSN(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S1_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S1_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S1_ECWMin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S1_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S1_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S1_ECWMax(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S1_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S1_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S1_TXOP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S1_TXOP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S1_TXOP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S1_TXOP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S1_AckPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S1_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S1_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S2_AIFSN(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S2_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S2_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S2_ECWMin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S2_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S2_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S2_ECWMax(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S2_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S2_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S2_TXOP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S2_TXOP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S2_TXOP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S2_TXOP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S2_AckPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S2_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S2_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S3_AIFSN(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S3_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S3_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S3_ECWMin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S3_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S3_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S3_ECWMax(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S3_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S3_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S3_TXOP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S3_TXOP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S3_TXOP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S3_TXOP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S3_AckPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S3_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S3_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S4_AIFSN(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S4_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S4_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S4_ECWMin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S4_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S4_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S4_ECWMax(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S4_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S4_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S4_TXOP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S4_TXOP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S4_TXOP(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S4_TXOP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_ILW1S4_AckPolicy(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(ILW1S4_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_ILW1S4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(ILW1S4_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1_WANConnectionNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1_WANConnectionNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_EnabledForInternet(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_EnabledForInternet, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1W_EnabledForInternet(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1W_EnabledForInternet, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1W_WANAccessType(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_WANAccessType, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_Layer1UpstreamMaxBitRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_Layer1UpstreamMaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_Layer1DownstreamMaxBitRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_Layer1DownstreamMaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_PhysicalLinkStatus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_PhysicalLinkStatus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_WANAccessProvider(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_WANAccessProvider, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_TotalBytesSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_TotalBytesSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_TotalBytesReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_TotalBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_TotalPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_TotalPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_TotalPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_TotalPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_MaximumActiveConnections(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_MaximumActiveConnections, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_NumberOfActiveConnections(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_NumberOfActiveConnections, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WC1_ActiveConnectionDeviceContainer(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WC1_ActiveConnectionDeviceContainer, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WC1_ActiveConnectionServiceID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WC1_ActiveConnectionServiceID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1W_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1W_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1W_Status(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_Status, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_LinkEncapsulationSupported(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_LinkEncapsulationSupported, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_LinkEncapsulationRequested(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_LinkEncapsulationRequested, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1W_LinkEncapsulationRequested(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1W_LinkEncapsulationRequested, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1W_LinkEncapsulationUsed(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_LinkEncapsulationUsed, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_ModulationType(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ModulationType, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_StandardsSupported(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_StandardsSupported, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_StandardUsed(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_StandardUsed, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_LineEncoding(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_LineEncoding, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_AllowedProfiles(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_AllowedProfiles, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_CurrentProfile(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_CurrentProfile, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_PowerManagementState(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_PowerManagementState, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_SuccessFailureCause(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_SuccessFailureCause, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_LastStateTransmittedDownstream(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_LastStateTransmittedDownstream, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_LastStateTransmittedUpstream(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_LastStateTransmittedUpstream, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_UPBOKLE(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_UPBOKLE, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_MREFPSDds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_MREFPSDds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_MREFPSDus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_MREFPSDus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_LIMITMASK(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_LIMITMASK, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_US0MASK(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_US0MASK, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_DataPath(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_DataPath, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_InterleaveDepth(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_InterleaveDepth, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_LPATH(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_LPATH, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_INTLVDEPTH(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_INTLVDEPTH, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_INTLVBLOCK(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_INTLVBLOCK, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_ActualInterleavingDelay(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ActualInterleavingDelay, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_ACTINP(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ACTINP, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_INPREPORT(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_INPREPORT, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_NFEC(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_NFEC, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_RFEC(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_RFEC, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_LSYMB(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_LSYMB, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_TRELLISds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_TRELLISds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_TRELLISus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_TRELLISus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_ACTSNRMODEds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ACTSNRMODEds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_ACTSNRMODEus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ACTSNRMODEus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_VirtualNoisePSDds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_VirtualNoisePSDds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_VirtualNoisePSDus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_VirtualNoisePSDus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_ACTUALCE(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ACTUALCE, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_LineNumber(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_LineNumber, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_UpstreamCurrRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_UpstreamCurrRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_DownstreamCurrRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_DownstreamCurrRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_UpstreamMaxRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_UpstreamMaxRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_DownstreamMaxRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_DownstreamMaxRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_UpstreamNoiseMargin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_UpstreamNoiseMargin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_DownstreamNoiseMargin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_DownstreamNoiseMargin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_SNRMpbus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_SNRMpbus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_SNRMpbds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_SNRMpbds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_INMIATOds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_INMIATOds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_INMIATSds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_INMIATSds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_INMCCds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_INMCCds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_INMINPEQMODEds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_INMINPEQMODEds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_UpstreamAttenuation(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_UpstreamAttenuation, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_DownstreamAttenuation(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_DownstreamAttenuation, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_UpstreamPower(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_UpstreamPower, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_DownstreamPower(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_DownstreamPower, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_ATURVendor(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ATURVendor, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_ATURCountry(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ATURCountry, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_ATURANSIStd(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ATURANSIStd, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_ATURANSIRev(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ATURANSIRev, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_ATUCVendor(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ATUCVendor, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_ATUCCountry(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ATUCCountry, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_ATUCANSIStd(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ATUCANSIStd, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_ATUCANSIRev(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ATUCANSIRev, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_TotalStart(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_TotalStart, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_ShowtimeStart(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ShowtimeStart, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_LastShowtimeStart(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_LastShowtimeStart, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_CurrentDayStart(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_CurrentDayStart, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_QuarterHourStart(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_QuarterHourStart, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_HLOGGds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_HLOGGds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_HLOGGus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_HLOGGus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_HLOGpsds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_HLOGpsds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_HLOGpsus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_HLOGpsus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_HLOGMTds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_HLOGMTds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_HLOGMTus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_HLOGMTus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_QLNGds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_QLNGds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_QLNGus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_QLNGus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_QLNpsds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_QLNpsds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_QLNpsus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_QLNpsus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_QLNMTds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_QLNMTds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_QLNMTus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_QLNMTus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_SNRGds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_SNRGds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_SNRGus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_SNRGus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_SNRpsds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_SNRpsds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_SNRpsus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_SNRpsus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_SNRMTds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_SNRMTds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_SNRMTus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_SNRMTus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_LATNds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_LATNds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_LATNus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_LATNus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_SATNds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_SATNds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WT_SATNus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WT_SATNus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WST_ReceiveBlocks(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WST_ReceiveBlocks, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WST_TransmitBlocks(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WST_TransmitBlocks, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WST_CellDelin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WST_CellDelin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WST_LinkRetrain(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WST_LinkRetrain, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WST_InitErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WST_InitErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WST_LInit(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WST_LInit, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WST_InitTimeouts(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WST_InitTimeouts, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WST_LossOfFraming(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WST_LossOfFraming, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WST_LOF(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WST_LOF, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WST_ErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WST_ErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WST_ATUCErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WST_ATUCErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WST_SeverelyErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WST_SeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WST_ATUCSeverelyErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WST_ATUCSeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WST_FECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WST_FECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WST_ATUCFECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WST_ATUCFECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WST_HECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WST_HECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WST_ATUCHECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WST_ATUCHECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WST_CRCErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WST_CRCErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WST_ATUCCRCErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WST_ATUCCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSS_ReceiveBlocks(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSS_ReceiveBlocks, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSS_TransmitBlocks(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSS_TransmitBlocks, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSS_CellDelin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSS_CellDelin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSS_LinkRetrain(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSS_LinkRetrain, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSS_InitErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSS_InitErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSS_LInit(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSS_LInit, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSS_InitTimeouts(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSS_InitTimeouts, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSS_LossOfFraming(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSS_LossOfFraming, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSS_LOF(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSS_LOF, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSS_ErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSS_ErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSS_ATUCErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSS_ATUCErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSS_SeverelyErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSS_SeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSS_ATUCSeverelyErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSS_ATUCSeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSS_FECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSS_FECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSS_ATUCFECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSS_ATUCFECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSS_HECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSS_HECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSS_ATUCHECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSS_ATUCHECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSS_CRCErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSS_CRCErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSS_ATUCCRCErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSS_ATUCCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSL_ReceiveBlocks(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSL_ReceiveBlocks, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSL_TransmitBlocks(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSL_TransmitBlocks, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSL_CellDelin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSL_CellDelin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSL_LinkRetrain(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSL_LinkRetrain, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSL_InitErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSL_InitErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSL_LInit(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSL_LInit, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSL_InitTimeouts(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSL_InitTimeouts, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSL_LossOfFraming(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSL_LossOfFraming, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSL_LOF(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSL_LOF, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSL_ErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSL_ErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSL_ATUCErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSL_ATUCErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSL_SeverelyErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSL_SeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSL_ATUCSeverelyErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSL_ATUCSeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSL_FECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSL_FECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSL_ATUCFECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSL_ATUCFECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSL_HECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSL_HECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSL_ATUCHECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSL_ATUCHECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSL_CRCErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSL_CRCErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSL_ATUCCRCErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSL_ATUCCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSC_ReceiveBlocks(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSC_ReceiveBlocks, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSC_TransmitBlocks(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSC_TransmitBlocks, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSC_CellDelin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSC_CellDelin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSC_LinkRetrain(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSC_LinkRetrain, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSC_InitErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSC_InitErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSC_LInit(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSC_LInit, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSC_InitTimeouts(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSC_InitTimeouts, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSC_LossOfFraming(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSC_LossOfFraming, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSC_LOF(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSC_LOF, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSC_ErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSC_ErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSC_ATUCErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSC_ATUCErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSC_SeverelyErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSC_SeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSC_ATUCSeverelyErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSC_ATUCSeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSC_FECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSC_FECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSC_ATUCFECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSC_ATUCFECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSC_HECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSC_HECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSC_ATUCHECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSC_ATUCHECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSC_CRCErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSC_CRCErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSC_ATUCCRCErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSC_ATUCCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSQ_ReceiveBlocks(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSQ_ReceiveBlocks, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSQ_TransmitBlocks(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSQ_TransmitBlocks, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSQ_CellDelin(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSQ_CellDelin, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSQ_LinkRetrain(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSQ_LinkRetrain, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSQ_InitErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSQ_InitErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSQ_LInit(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSQ_LInit, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSQ_InitTimeouts(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSQ_InitTimeouts, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSQ_LossOfFraming(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSQ_LossOfFraming, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSQ_LOF(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSQ_LOF, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSQ_ErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSQ_ErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSQ_ATUCErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSQ_ATUCErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSQ_SeverelyErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSQ_SeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSQ_ATUCSeverelyErroredSecs(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSQ_ATUCSeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSQ_FECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSQ_FECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSQ_ATUCFECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSQ_ATUCFECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSQ_HECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSQ_HECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSQ_ATUCHECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSQ_ATUCHECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSQ_CRCErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSQ_CRCErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WSQ_ATUCCRCErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WSQ_ATUCCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_Enable_1552(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_Enable_1552, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1W_Enable_1552(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1W_Enable_1552, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1W_Status_1554(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_Status_1554, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_MACAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_MaxBitRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1W_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1W_MaxBitRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1W_DuplexMode(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_DuplexMode, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1W_DuplexMode(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1W_DuplexMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1W_ShapingRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ShapingRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1W_ShapingRate(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1W_ShapingRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1W_ShapingBurstSize(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ShapingBurstSize, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1W_ShapingBurstSize(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1W_ShapingBurstSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WS_BytesSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WS_BytesReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WS_PacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WS_PacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_ConnectionServiceNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ConnectionServiceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WC1_WANConnectionDevice(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WC1_WANConnectionDevice, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WC1_WANConnectionService(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WC1_WANConnectionService, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WC1_DestinationAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WC1_DestinationAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WC1_LinkType(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WC1_LinkType, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WC1_ConnectionType(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WC1_ConnectionType, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WC1_Name(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WC1_Name, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_LoopDiagnosticsState(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_LoopDiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1W_LoopDiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1W_LoopDiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1W_ACTPSDds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ACTPSDds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_ACTPSDus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ACTPSDus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_ACTATPds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ACTATPds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_ACTATPus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_ACTATPus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_HLINSCds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_HLINSCds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_HLINSCus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_HLINSCus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_HLINGds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_HLINGds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_HLINGus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_HLINGus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_HLOGGds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_HLOGGds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_HLOGGus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_HLOGGus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_HLOGpsds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_HLOGpsds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_HLOGpsus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_HLOGpsus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_HLOGMTds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_HLOGMTds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_HLOGMTus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_HLOGMTus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_LATNpbds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_LATNpbds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_LATNpbus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_LATNpbus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_SATNds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_SATNds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_SATNus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_SATNus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_HLINpsds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_HLINpsds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_HLINpsus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_HLINpsus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_QLNGds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_QLNGds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_QLNGus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_QLNGus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_QLNpsds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_QLNpsds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_QLNpsus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_QLNpsus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_QLNMTds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_QLNMTds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_QLNMTus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_QLNMTus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_SNRGds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_SNRGds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_SNRGus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_SNRGus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_SNRpsds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_SNRpsds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_SNRpsus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_SNRpsus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_SNRMTds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_SNRMTds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_SNRMTus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_SNRMTus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_BITSpsds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_BITSpsds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_BITSpsus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_BITSpsus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1W_GAINSpsds(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1W_GAINSpsds, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1Wt_WANIPConnectionNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1Wt_WANIPConnectionNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1Wt_WANPPPConnectionNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1Wt_WANPPPConnectionNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_LinkStatus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_LinkStatus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_LinkType(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_LinkType, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_LinkType(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_LinkType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_AutoConfig(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_AutoConfig, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_ModulationType(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_ModulationType, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_DestinationAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_DestinationAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_DestinationAddress(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_DestinationAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_ATMEncapsulation(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_ATMEncapsulation, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_ATMEncapsulation(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_ATMEncapsulation, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_FCSPreserved(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_FCSPreserved, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_FCSPreserved(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_FCSPreserved, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_VCSearchList(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_VCSearchList, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_VCSearchList(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_VCSearchList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_ATMAAL(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_ATMAAL, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_ATMTransmittedBlocks(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_ATMTransmittedBlocks, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_ATMReceivedBlocks(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_ATMReceivedBlocks, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_ATMQoS(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_ATMQoS, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_ATMQoS(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_ATMQoS, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_ATMPeakCellRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_ATMPeakCellRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_ATMPeakCellRate(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_ATMPeakCellRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_ATMMaximumBurstSize(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_ATMMaximumBurstSize, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_ATMMaximumBurstSize(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_ATMMaximumBurstSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_ATMSustainableCellRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_ATMSustainableCellRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_ATMSustainableCellRate(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_ATMSustainableCellRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_AAL5CRCErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_AAL5CRCErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_ATMCRCErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_ATMCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_ATMHECErrors(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_ATMHECErrors, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_DiagnosticsState(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_NumberOfRepetitions(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_NumberOfRepetitions, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_NumberOfRepetitions(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_NumberOfRepetitions, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_Timeout(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_Timeout, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_Timeout(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_Timeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_SuccessCount(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_SuccessCount, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_FailureCount(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_FailureCount, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_AverageResponseTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_AverageResponseTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_MinimumResponseTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_MinimumResponseTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_MaximumResponseTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_MaximumResponseTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_Enable_1654(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_Enable_1654, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_Enable_1654(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_Enable_1654, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_LinkStatus_1656(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_LinkStatus_1656, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_MACAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWS_BytesSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWS_BytesReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWS_FramesSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWS_FramesSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWS_FramesReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWS_FramesReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWS_OOSNearEnd(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWS_OOSNearEnd, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWS_OOSFarEnd(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWS_OOSFarEnd, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWS_ErrorsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWS_ErrorsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWS_UnicastPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWS_UnicastPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWS_DiscardPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWS_DiscardPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWS_MulticastPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWS_MulticastPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWS_BroadcastPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWS_BroadcastPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWS_UnknownProtoPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_EthernetLinkStatus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_EthernetLinkStatus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_Enable_1676(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_Enable_1676, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_Enable_1676(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_Enable_1676, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_LinkStatus_1678(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_LinkStatus_1678, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_ISPPhoneNumber(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_ISPPhoneNumber, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_ISPPhoneNumber(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_ISPPhoneNumber, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_ISPInfo(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_ISPInfo, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_ISPInfo(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_ISPInfo, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_LinkType_1683(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_LinkType_1683, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_LinkType_1683(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_LinkType_1683, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_NumberOfRetries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_NumberOfRetries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_NumberOfRetries(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_NumberOfRetries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_DelayBetweenRetries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_DelayBetweenRetries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtW_DelayBetweenRetries(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtW_DelayBetweenRetries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtW_Fclass(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_Fclass, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_DataModulationSupported(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_DataModulationSupported, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_DataProtocol(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_DataProtocol, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_DataCompression(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_DataCompression, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtW_PlusVTRCommandSupported(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtW_PlusVTRCommandSupported, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_Reset(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_Reset, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_Reset(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int set_IW1WtWt_Reset(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_ConnectionStatus(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_ConnectionStatus, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_PossibleConnectionTypes(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_PossibleConnectionTypes, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_ConnectionType(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_ConnectionType, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_ConnectionType(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_ConnectionType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_Name(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_Name, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_Name(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_Name, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_Uptime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_Uptime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_LastConnectionError(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_LastConnectionError, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_AutoDisconnectTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_AutoDisconnectTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_AutoDisconnectTime(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_AutoDisconnectTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_IdleDisconnectTime(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_IdleDisconnectTime, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_IdleDisconnectTime(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_IdleDisconnectTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_WarnDisconnectDelay(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_WarnDisconnectDelay, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_WarnDisconnectDelay(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_WarnDisconnectDelay, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_RSIPAvailable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_RSIPAvailable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_NATEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_NATEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_NATEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_NATEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_AddressingType(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_AddressingType, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_AddressingType(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_AddressingType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_ExternalIPAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_ExternalIPAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_ExternalIPAddress(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_ExternalIPAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_SubnetMask(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_SubnetMask, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_SubnetMask(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_SubnetMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_DefaultGateway(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_DefaultGateway, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_DefaultGateway(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_DefaultGateway, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_DNSEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_DNSEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_DNSEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_DNSEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_DNSOverrideAllowed(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_DNSOverrideAllowed, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_DNSOverrideAllowed(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_DNSOverrideAllowed, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_DNSServers(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_DNSServers, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_DNSServers(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_DNSServers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_MaxMTUSize(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_MaxMTUSize, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_MaxMTUSize(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_MaxMTUSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_MACAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_MACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_MACAddressOverride(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_MACAddressOverride, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_MACAddressOverride(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_MACAddressOverride, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_ConnectionTrigger(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_ConnectionTrigger, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_ConnectionTrigger(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_ConnectionTrigger, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_RouteProtocolRx(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_RouteProtocolRx, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_RouteProtocolRx(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_RouteProtocolRx, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_ShapingRate(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_ShapingRate, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_ShapingRate(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_ShapingRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_ShapingBurstSize(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_ShapingBurstSize, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_ShapingBurstSize(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_ShapingBurstSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_PortMappingNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_PortMappingNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtD_SentDHCPOptionNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtD_SentDHCPOptionNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtD_ReqDHCPOptionNumberOfEntries(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtD_ReqDHCPOptionNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtDSt_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtDSt_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtDSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtDSt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtDSt_Tag(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtDSt_Tag, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtDSt_Tag(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtDSt_Tag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtDSt_Value(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtDSt_Value, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtDSt_Value(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtDSt_Value, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtDRt_Enable(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtDRt_Enable, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtDRt_Enable(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtDRt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtDRt_Order(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtDRt_Order, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtDRt_Order(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtDRt_Order, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtDRt_Tag(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtDRt_Tag, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtDRt_Tag(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtDRt_Tag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtDRt_Value(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtDRt_Value, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtPt_PortMappingEnabled(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtPt_PortMappingEnabled, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtPt_PortMappingEnabled(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtPt_PortMappingEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtPt_PortMappingLeaseDuration(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtPt_PortMappingLeaseDuration, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtPt_PortMappingLeaseDuration(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtPt_PortMappingLeaseDuration, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtPt_RemoteHost(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtPt_RemoteHost, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtPt_RemoteHost(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtPt_RemoteHost, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtPt_ExternalPort(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtPt_ExternalPort, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtPt_ExternalPort(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtPt_ExternalPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtPt_ExternalPortEndRange(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtPt_ExternalPortEndRange, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtPt_ExternalPortEndRange(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtPt_ExternalPortEndRange, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtPt_InternalPort(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtPt_InternalPort, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtPt_InternalPort(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtPt_InternalPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtPt_PortMappingProtocol(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtPt_PortMappingProtocol, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtPt_PortMappingProtocol(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtPt_PortMappingProtocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtPt_InternalClient(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtPt_InternalClient, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtPt_InternalClient(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtPt_InternalClient, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtPt_PortMappingDescription(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtPt_PortMappingDescription, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtPt_PortMappingDescription(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtPt_PortMappingDescription, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtS_EthernetBytesSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetBytesSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetBytesReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetErrorsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetErrorsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetUnicastPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetUnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetUnicastPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetUnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetDiscardPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetDiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetDiscardPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetDiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetMulticastPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetMulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetMulticastPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetMulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetBroadcastPacketsSent(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetBroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetBroadcastPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetBroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetUnknownProtoPacketsReceived(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetUnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_Enable_1792(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_Enable_1792, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_Enable_1792(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_Enable_1792, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_Reset_1794(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_Reset_1794, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_Reset_1794(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_Reset_1794, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int set_IW1WtWt_Reset_1794(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_Reset_1794, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_ConnectionStatus_1796(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_ConnectionStatus_1796, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_PossibleConnectionTypes_1797(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_PossibleConnectionTypes_1797, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_ConnectionType_1798(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_ConnectionType_1798, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_ConnectionType_1798(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_ConnectionType_1798, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_PPPoESessionID(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_PPPoESessionID, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_DefaultGateway_1801(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_DefaultGateway_1801, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_Name_1802(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_Name_1802, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_Name_1802(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_Name_1802, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_Uptime_1804(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_Uptime_1804, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_LastConnectionError_1805(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_LastConnectionError_1805, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_AutoDisconnectTime_1806(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_AutoDisconnectTime_1806, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_AutoDisconnectTime_1806(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_AutoDisconnectTime_1806, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_IdleDisconnectTime_1808(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_IdleDisconnectTime_1808, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_IdleDisconnectTime_1808(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_IdleDisconnectTime_1808, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_WarnDisconnectDelay_1810(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_WarnDisconnectDelay_1810, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_WarnDisconnectDelay_1810(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_WarnDisconnectDelay_1810, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_RSIPAvailable_1812(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_RSIPAvailable_1812, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_NATEnabled_1813(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_NATEnabled_1813, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_NATEnabled_1813(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_NATEnabled_1813, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_Username(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_Username, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_Username(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_Username, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_Password(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_Password, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_Password(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_Password, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_PPPEncryptionProtocol(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_PPPEncryptionProtocol, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_PPPCompressionProtocol(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_PPPCompressionProtocol, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_PPPAuthenticationProtocol(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_PPPAuthenticationProtocol, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_ExternalIPAddress_1822(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_ExternalIPAddress_1822, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_RemoteIPAddress(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_RemoteIPAddress, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_MaxMRUSize(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_MaxMRUSize, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_MaxMRUSize(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_MaxMRUSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_CurrentMRUSize(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_CurrentMRUSize, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_DNSEnabled_1827(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_DNSEnabled_1827, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_DNSEnabled_1827(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_DNSEnabled_1827, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_DNSOverrideAllowed_1829(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_DNSOverrideAllowed_1829, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_DNSOverrideAllowed_1829(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_DNSOverrideAllowed_1829, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_DNSServers_1831(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_DNSServers_1831, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_DNSServers_1831(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_DNSServers_1831, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_MACAddress_1833(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_MACAddress_1833, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_MACAddress_1833(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_MACAddress_1833, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_MACAddressOverride_1835(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_MACAddressOverride_1835, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_MACAddressOverride_1835(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_MACAddressOverride_1835, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_TransportType(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_TransportType, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_PPPoEACName(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_PPPoEACName, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_PPPoEACName(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_PPPoEACName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_PPPoEServiceName(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_PPPoEServiceName, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_PPPoEServiceName(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_PPPoEServiceName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_ConnectionTrigger_1842(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_ConnectionTrigger_1842, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_ConnectionTrigger_1842(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_ConnectionTrigger_1842, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_RouteProtocolRx_1844(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_RouteProtocolRx_1844, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_RouteProtocolRx_1844(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_RouteProtocolRx_1844, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_PPPLCPEcho(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_PPPLCPEcho, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_PPPLCPEchoRetry(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_PPPLCPEchoRetry, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWt_ShapingRate_1848(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_ShapingRate_1848, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_ShapingRate_1848(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_ShapingRate_1848, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_ShapingBurstSize_1850(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_ShapingBurstSize_1850, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWt_ShapingBurstSize_1850(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWt_ShapingBurstSize_1850, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWt_PortMappingNumberOfEntries_1852(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWt_PortMappingNumberOfEntries_1852, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtPt_PortMappingEnabled_1853(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtPt_PortMappingEnabled_1853, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtPt_PortMappingEnabled_1853(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtPt_PortMappingEnabled_1853, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtPt_PortMappingLeaseDuration_1855(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtPt_PortMappingLeaseDuration_1855, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtPt_PortMappingLeaseDuration_1855(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtPt_PortMappingLeaseDuration_1855, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtPt_RemoteHost_1857(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtPt_RemoteHost_1857, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtPt_RemoteHost_1857(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtPt_RemoteHost_1857, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtPt_ExternalPort_1859(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtPt_ExternalPort_1859, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtPt_ExternalPort_1859(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtPt_ExternalPort_1859, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtPt_ExternalPortEndRange_1861(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtPt_ExternalPortEndRange_1861, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtPt_ExternalPortEndRange_1861(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtPt_ExternalPortEndRange_1861, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtPt_InternalPort_1863(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtPt_InternalPort_1863, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtPt_InternalPort_1863(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtPt_InternalPort_1863, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtPt_PortMappingProtocol_1865(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtPt_PortMappingProtocol_1865, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtPt_PortMappingProtocol_1865(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtPt_PortMappingProtocol_1865, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtPt_InternalClient_1867(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtPt_InternalClient_1867, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtPt_InternalClient_1867(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtPt_InternalClient_1867, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtPt_PortMappingDescription_1869(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtPt_PortMappingDescription_1869, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int set_IW1WtWtPt_PortMappingDescription_1869(char * path_name, char *value)
{
	int ret = 0;
	ret = do_uci_set(IW1WtWtPt_PortMappingDescription_1869, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
}
int get_IW1WtWtS_EthernetBytesSent_1871(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetBytesSent_1871, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetBytesReceived_1872(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetBytesReceived_1872, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetPacketsSent_1873(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetPacketsSent_1873, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetPacketsReceived_1874(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetPacketsReceived_1874, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetErrorsSent_1875(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetErrorsSent_1875, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetErrorsReceived_1876(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetErrorsReceived_1876, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetUnicastPacketsSent_1877(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetUnicastPacketsSent_1877, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetUnicastPacketsReceived_1878(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetUnicastPacketsReceived_1878, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetDiscardPacketsSent_1879(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetDiscardPacketsSent_1879, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetDiscardPacketsReceived_1880(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetDiscardPacketsReceived_1880, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetMulticastPacketsSent_1881(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetMulticastPacketsSent_1881, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetMulticastPacketsReceived_1882(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetMulticastPacketsReceived_1882, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetBroadcastPacketsSent_1883(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetBroadcastPacketsSent_1883, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetBroadcastPacketsReceived_1884(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetBroadcastPacketsReceived_1884, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
int get_IW1WtWtS_EthernetUnknownProtoPacketsReceived_1885(char * path_name, char *value)
{	int ret = 0;
	ret = do_uci_get(IW1WtWtS_EthernetUnknownProtoPacketsReceived_1885, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
