#ifndef __TR69_HANDLER_H__
#define __TR69_HANDLER_H__

#include "tr69_handler_ext.h"
#include "tr69_handler_table.h"
#include "suci.h"
#include "tr_uciconfig.h"
#include "log.h"
#include "string.h"

int get_D_RootDataModelVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(D_RootDataModelVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_D_InterfaceStackNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(D_InterfaceStackNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_DeviceCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_DeviceCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_Manufacturer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_Manufacturer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_ManufacturerOUI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_ManufacturerOUI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_ModelName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_ModelName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_ModelNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_ModelNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_Description(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_Description, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_ProductClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_ProductClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_SerialNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_SerialNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_HardwareVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_HardwareVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_SoftwareVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_SoftwareVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_AdditionalHardwareVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_AdditionalHardwareVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_AdditionalSoftwareVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_AdditionalSoftwareVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_ProvisioningCode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_ProvisioningCode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DD_ProvisioningCode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DD_ProvisioningCode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DD_UpTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_UpTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_FirstUseDate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_FirstUseDate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_VendorConfigFileNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_VendorConfigFileNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_SupportedDataModelNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_SupportedDataModelNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_ProcessorNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_ProcessorNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_VendorLogFileNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_VendorLogFileNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_LocationNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_LocationNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDVt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDVt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDVt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDVt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDVt_Version(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_Version, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDVt_Date(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_Date, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDVt_Description(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_Description, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDVt_UseForBackupRestore(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_UseForBackupRestore, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDS1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDS1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDS1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDS1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDS1_URL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDS1_URL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDS1_UUID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDS1_UUID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDS1_URN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDS1_URN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDS1_Features(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDS1_Features, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSt_URL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSt_URL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSt_UUID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSt_UUID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSt_URN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSt_URN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSt_Features(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSt_Features, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDM_Total(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDM_Total, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDM_Free(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDM_Free, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDP_CPUUsage(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDP_CPUUsage, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDP_ProcessNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDP_ProcessNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDPPt_PID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDPPt_PID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDPPt_Command(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDPPt_Command, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDPPt_Size(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDPPt_Size, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDPPt_Priority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDPPt_Priority, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDPPt_CPUTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDPPt_CPUTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDPPt_State(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDPPt_State, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDT_TemperatureSensorNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDT_TemperatureSensorNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT1_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT1_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT1_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT1_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT1_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT1_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT1_ResetTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_ResetTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_LastUpdate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_LastUpdate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MinValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MinValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MinTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MinTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MaxValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MaxValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MaxTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MaxTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_LowAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_LowAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_LowAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_LowAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_HighAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_HighAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_PollingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_PollingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_HighAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_HighAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Alias_73(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Alias_73, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT1_Alias_73(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT1_Alias_73, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT1_Enable_75(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Enable_75, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT1_Enable_75(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT1_Enable_75, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT1_Status_77(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Status_77, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Reset_78(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Reset_78, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT1_Reset_78(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT1_Reset_78, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT1_ResetTime_80(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_ResetTime_80, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Name_81(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Name_81, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Value_82(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Value_82, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_LastUpdate_83(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_LastUpdate_83, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MinValue_84(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MinValue_84, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MinTime_85(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MinTime_85, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MaxValue_86(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MaxValue_86, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MaxTime_87(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MaxTime_87, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_LowAlarmValue_88(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_LowAlarmValue_88, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_LowAlarmTime_89(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_LowAlarmTime_89, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_HighAlarmValue_90(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_HighAlarmValue_90, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_PollingInterval_91(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_PollingInterval_91, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_HighAlarmTime_92(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_HighAlarmTime_92, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Alias_93(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Alias_93, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT1_Alias_93(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT1_Alias_93, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT1_Enable_95(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Enable_95, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT1_Enable_95(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT1_Enable_95, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT1_Status_97(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Status_97, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Reset_98(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Reset_98, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT1_Reset_98(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT1_Reset_98, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT1_ResetTime_100(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_ResetTime_100, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Name_101(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Name_101, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Value_102(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Value_102, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_LastUpdate_103(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_LastUpdate_103, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MinValue_104(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MinValue_104, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MinTime_105(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MinTime_105, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MaxValue_106(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MaxValue_106, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MaxTime_107(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MaxTime_107, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_LowAlarmValue_108(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_LowAlarmValue_108, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_LowAlarmTime_109(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_LowAlarmTime_109, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_HighAlarmValue_110(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_HighAlarmValue_110, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_PollingInterval_111(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_PollingInterval_111, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_HighAlarmTime_112(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_HighAlarmTime_112, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Alias_113(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Alias_113, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT1_Alias_113(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT1_Alias_113, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT1_Enable_115(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Enable_115, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT1_Enable_115(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT1_Enable_115, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT1_Status_117(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Status_117, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Reset_118(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Reset_118, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT1_Reset_118(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT1_Reset_118, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT1_ResetTime_120(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_ResetTime_120, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Name_121(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Name_121, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Value_122(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Value_122, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_LastUpdate_123(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_LastUpdate_123, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MinValue_124(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MinValue_124, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MinTime_125(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MinTime_125, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MaxValue_126(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MaxValue_126, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MaxTime_127(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MaxTime_127, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_LowAlarmValue_128(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_LowAlarmValue_128, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_LowAlarmTime_129(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_LowAlarmTime_129, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_HighAlarmValue_130(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_HighAlarmValue_130, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_PollingInterval_131(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_PollingInterval_131, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_HighAlarmTime_132(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_HighAlarmTime_132, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT9_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT9_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT9_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT9_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT9_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT9_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT9_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT9_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT9_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT9_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT9_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT9_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT9_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT9_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT9_ResetTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT9_ResetTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT9_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT9_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT9_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT9_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT9_LastUpdate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT9_LastUpdate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT9_MinValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT9_MinValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT9_MinTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT9_MinTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT9_MaxValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT9_MaxValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT9_MaxTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT9_MaxTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT9_LowAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT9_LowAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT9_LowAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT9_LowAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT9_HighAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT9_HighAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT9_PollingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT9_PollingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT9_HighAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT9_HighAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT8_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT8_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT8_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT8_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT8_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT8_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT8_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT8_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT8_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT8_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT8_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT8_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT8_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT8_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT8_ResetTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT8_ResetTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT8_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT8_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT8_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT8_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT8_LastUpdate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT8_LastUpdate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT8_MinValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT8_MinValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT8_MinTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT8_MinTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT8_MaxValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT8_MaxValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT8_MaxTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT8_MaxTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT8_LowAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT8_LowAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT8_LowAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT8_LowAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT8_HighAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT8_HighAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT8_PollingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT8_PollingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT8_HighAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT8_HighAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT7_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT7_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT7_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT7_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT7_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT7_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT7_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT7_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT7_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT7_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT7_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT7_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT7_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT7_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT7_ResetTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT7_ResetTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT7_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT7_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT7_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT7_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT7_LastUpdate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT7_LastUpdate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT7_MinValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT7_MinValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT7_MinTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT7_MinTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT7_MaxValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT7_MaxValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT7_MaxTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT7_MaxTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT7_LowAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT7_LowAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT7_LowAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT7_LowAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT7_HighAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT7_HighAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT7_PollingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT7_PollingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT7_HighAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT7_HighAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT6_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT6_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT6_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT6_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT6_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT6_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT6_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT6_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT6_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT6_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT6_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT6_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT6_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT6_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT6_ResetTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT6_ResetTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT6_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT6_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT6_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT6_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT6_LastUpdate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT6_LastUpdate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT6_MinValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT6_MinValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT6_MinTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT6_MinTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT6_MaxValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT6_MaxValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT6_MaxTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT6_MaxTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT6_LowAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT6_LowAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT6_LowAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT6_LowAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT6_HighAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT6_HighAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT6_PollingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT6_PollingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT6_HighAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT6_HighAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT5_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT5_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT5_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT5_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT5_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT5_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT5_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT5_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT5_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT5_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT5_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT5_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT5_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT5_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT5_ResetTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT5_ResetTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT5_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT5_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT5_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT5_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT5_LastUpdate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT5_LastUpdate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT5_MinValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT5_MinValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT5_MinTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT5_MinTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT5_MaxValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT5_MaxValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT5_MaxTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT5_MaxTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT5_LowAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT5_LowAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT5_LowAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT5_LowAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT5_HighAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT5_HighAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT5_PollingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT5_PollingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT5_HighAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT5_HighAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT4_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT4_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT4_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT4_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT4_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT4_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT4_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT4_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT4_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT4_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT4_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT4_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT4_ResetTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT4_ResetTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT4_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT4_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT4_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT4_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT4_LastUpdate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT4_LastUpdate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT4_MinValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT4_MinValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT4_MinTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT4_MinTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT4_MaxValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT4_MaxValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT4_MaxTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT4_MaxTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT4_LowAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT4_LowAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT4_LowAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT4_LowAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT4_HighAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT4_HighAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT4_PollingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT4_PollingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT4_HighAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT4_HighAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT3_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT3_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT3_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT3_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT3_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT3_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT3_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT3_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT3_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT3_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT3_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT3_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT3_ResetTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT3_ResetTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT3_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT3_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT3_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT3_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT3_LastUpdate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT3_LastUpdate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT3_MinValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT3_MinValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT3_MinTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT3_MinTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT3_MaxValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT3_MaxValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT3_MaxTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT3_MaxTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT3_LowAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT3_LowAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT3_LowAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT3_LowAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT3_HighAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT3_HighAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT3_PollingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT3_PollingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT3_HighAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT3_HighAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT2_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT2_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT2_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT2_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT2_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT2_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT2_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT2_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT2_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT2_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT2_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT2_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT2_ResetTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT2_ResetTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT2_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT2_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT2_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT2_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT2_LastUpdate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT2_LastUpdate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT2_MinValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT2_MinValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT2_MinTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT2_MinTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT2_MaxValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT2_MaxValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT2_MaxTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT2_MaxTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT2_LowAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT2_LowAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT2_LowAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT2_LowAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT2_HighAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT2_HighAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT2_PollingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT2_PollingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT2_HighAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT2_HighAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Alias_293(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Alias_293, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT1_Alias_293(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT1_Alias_293, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT1_Enable_295(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Enable_295, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT1_Enable_295(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT1_Enable_295, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT1_Status_297(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Status_297, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Reset_298(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Reset_298, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTT1_Reset_298(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTT1_Reset_298, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTT1_ResetTime_300(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_ResetTime_300, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Name_301(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Name_301, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_Value_302(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_Value_302, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_LastUpdate_303(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_LastUpdate_303, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MinValue_304(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MinValue_304, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MinTime_305(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MinTime_305, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MaxValue_306(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MaxValue_306, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_MaxTime_307(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_MaxTime_307, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_LowAlarmValue_308(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_LowAlarmValue_308, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_LowAlarmTime_309(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_LowAlarmTime_309, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_HighAlarmValue_310(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_HighAlarmValue_310, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_PollingInterval_311(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_PollingInterval_311, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTT1_HighAlarmTime_312(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTT1_HighAlarmTime_312, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTTt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTTt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTTt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTTt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTTt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTTt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTTt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTTt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTTt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTTt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTTt_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTTt_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTTt_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTTt_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTTt_ResetTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTTt_ResetTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTTt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTTt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTTt_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTTt_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTTt_LastUpdate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTTt_LastUpdate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTTt_MinValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTTt_MinValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTTt_MinTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTTt_MinTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTTt_MaxValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTTt_MaxValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTTt_MaxTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTTt_MaxTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTTt_LowAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTTt_LowAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTTt_LowAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTTt_LowAlarmValue, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTTt_LowAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTTt_LowAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDTTt_HighAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTTt_HighAlarmValue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTTt_HighAlarmValue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTTt_HighAlarmValue, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTTt_PollingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTTt_PollingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDTTt_PollingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDTTt_PollingInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDTTt_HighAlarmTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDTTt_HighAlarmTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDN_MaxTCPWindowSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDN_MaxTCPWindowSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDN_TCPImplementation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDN_TCPImplementation, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDP2_Architecture(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDP2_Architecture, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDP2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDP2_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDP2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDP2_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDP1_Architecture(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDP1_Architecture, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDP1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDP1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDP1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDP1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDPt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDPt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDPt_Architecture(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDPt_Architecture, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDV1_Persistent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDV1_Persistent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDV1_MaximumSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDV1_MaximumSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDV1_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDV1_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDV1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDV1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDV1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDV1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDVt_Alias_352(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_Alias_352, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDVt_Alias_352(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDVt_Alias_352, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDVt_Name_354(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_Name_354, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDVt_MaximumSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_MaximumSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDVt_Persistent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_Persistent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDP_ManufacturerOUI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDP_ManufacturerOUI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDP_ProductClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDP_ProductClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDP_SerialNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDP_SerialNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDP_ProxyProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDP_ProxyProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_Source(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_Source, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_AcquiredTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_AcquiredTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_ExternalSource(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_ExternalSource, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_ExternalProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_ExternalProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_DataObject(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_DataObject, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLt_DataObject(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLt_DataObject, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_EnableCWMP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_EnableCWMP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_EnableCWMP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_EnableCWMP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_URL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_URL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_URL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_URL, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_Username(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_Username, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_Username(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_Username, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_Password(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_Password, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_Password(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_Password, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_PeriodicInformEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_PeriodicInformEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_PeriodicInformEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_PeriodicInformEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_PeriodicInformInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_PeriodicInformInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_PeriodicInformInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_PeriodicInformInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_PeriodicInformTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_PeriodicInformTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_PeriodicInformTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_PeriodicInformTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_ParameterKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_ParameterKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_ParameterKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_ParameterKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_ConnectionRequestURL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_ConnectionRequestURL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_ConnectionRequestUsername(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_ConnectionRequestUsername, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_ConnectionRequestUsername(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_ConnectionRequestUsername, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_ConnectionRequestPassword(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_ConnectionRequestPassword, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_ConnectionRequestPassword(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_ConnectionRequestPassword, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_UpgradesManaged(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_UpgradesManaged, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_UpgradesManaged(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_UpgradesManaged, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_KickURL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_KickURL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_DownloadProgressURL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_DownloadProgressURL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_DefaultActiveNotificationThrottle(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_DefaultActiveNotificationThrottle, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_DefaultActiveNotificationThrottle(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_DefaultActiveNotificationThrottle, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_CWMPRetryMinimumWaitInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_CWMPRetryMinimumWaitInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_CWMPRetryMinimumWaitInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_CWMPRetryMinimumWaitInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_CWMPRetryIntervalMultiplier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_CWMPRetryIntervalMultiplier, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_CWMPRetryIntervalMultiplier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_CWMPRetryIntervalMultiplier, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_UDPConnectionRequestAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_UDPConnectionRequestAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_STUNEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_STUNEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_STUNEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_STUNEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_STUNServerAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_STUNServerAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_STUNServerAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_STUNServerAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_STUNServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_STUNServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_STUNServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_STUNServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_STUNUsername(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_STUNUsername, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_STUNUsername(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_STUNUsername, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_STUNPassword(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_STUNPassword, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_STUNPassword(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_STUNPassword, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_STUNMaximumKeepAlivePeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_STUNMaximumKeepAlivePeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_STUNMaximumKeepAlivePeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_STUNMaximumKeepAlivePeriod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_STUNMinimumKeepAlivePeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_STUNMinimumKeepAlivePeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_STUNMinimumKeepAlivePeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_STUNMinimumKeepAlivePeriod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_NATDetected(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_NATDetected, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_AliasBasedAddressing(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_AliasBasedAddressing, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_InstanceMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_InstanceMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_InstanceMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_InstanceMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_AutoCreateInstances(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_AutoCreateInstances, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_AutoCreateInstances(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_AutoCreateInstances, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_ManageableDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_ManageableDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_ManageableDeviceNotificationLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_ManageableDeviceNotificationLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DM_ManageableDeviceNotificationLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_ManageableDeviceNotificationLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DM_EmbeddedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_EmbeddedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_VirtualDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_VirtualDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_SupportedConnReqMethods(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_SupportedConnReqMethods, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_ConnReqXMPPConnection(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_ConnReqXMPPConnection, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_ConnReqAllowedJabberIDs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_ConnReqAllowedJabberIDs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_ConnReqJabberID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_ConnReqJabberID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_HTTPCompressionSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_HTTPCompressionSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_HTTPCompression(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_HTTPCompression, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_LightweightNotificationProtocolsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_LightweightNotificationProtocolsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_LightweightNotificationProtocolsUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_LightweightNotificationProtocolsUsed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_UDPLightweightNotificationHost(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_UDPLightweightNotificationHost, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_UDPLightweightNotificationPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_UDPLightweightNotificationPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_InformParameterNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_InformParameterNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMMt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMMt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMMt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMMt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMMt_ManufacturerOUI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMMt_ManufacturerOUI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMMt_SerialNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMMt_SerialNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMMt_ProductClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMMt_ProductClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMMt_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMMt_Host, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMA_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMA_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMA_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMA_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMA_TransferTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMA_TransferTypeFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMA_TransferTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMA_TransferTypeFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMA_ResultTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMA_ResultTypeFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMA_ResultTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMA_ResultTypeFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMA_FileTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMA_FileTypeFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMA_FileTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMA_FileTypeFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMA_Enable_449(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMA_Enable_449, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMA_Enable_449(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMA_Enable_449, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMA_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMA_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMA_GroupNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMA_GroupNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMAGt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMAGt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMAGt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMAGt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMAGt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMAGt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMAGt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMAGt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMAGt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMAGt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMAGt_URL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMAGt_URL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMAQ_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMAQ_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMAQ_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMAQ_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMAQ_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMAQ_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMAQ_URL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMAQ_URL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMAQ_URL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMAQ_URL, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMD_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMD_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMD_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMD_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMD_OperationTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMD_OperationTypeFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMD_OperationTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMD_OperationTypeFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMD_ResultTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMD_ResultTypeFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMD_ResultTypeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMD_ResultTypeFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMD_FaultCodeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMD_FaultCodeFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMD_FaultCodeFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMD_FaultCodeFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMEt_ControllerID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_ControllerID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_ProxiedDeviceID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_ProxiedDeviceID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_Reference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_Reference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_SupportedDataModel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_SupportedDataModel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_Host, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_ProxyProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_ProxyProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_ProxyProtocolReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_ProxyProtocolReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_DiscoveryProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_DiscoveryProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_DiscoveryProtocolReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_DiscoveryProtocolReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_CommandProcessed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_CommandProcessed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_ommandProcessingErrMsg(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_ommandProcessingErrMsg, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMEt_LastSyncTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMEt_LastSyncTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMEt_LastSyncTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMEt_LastSyncTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMVt_ManufacturerOUI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMVt_ManufacturerOUI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMVt_ProductClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMVt_ProductClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMVt_SerialNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMVt_SerialNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMVt_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMVt_Host, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMVt_ProxyProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMVt_ProxyProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMVt_ProxyProtocolReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMVt_ProxyProtocolReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMVt_DiscoveryProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMVt_DiscoveryProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMVt_DiscoveryProtocolReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMVt_DiscoveryProtocolReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMS_CRUnawarenessMaxDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMS_CRUnawarenessMaxDuration, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMS_CRUnawarenessMaxDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMS_CRUnawarenessMaxDuration, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMS_MaxMissedPeriodic(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMS_MaxMissedPeriodic, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMS_MaxMissedPeriodic(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMS_MaxMissedPeriodic, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMS_NotifyMissedScheduled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMS_NotifyMissedScheduled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMS_NotifyMissedScheduled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMS_NotifyMissedScheduled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMS_NetworkAwarenessCapable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMS_NetworkAwarenessCapable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMS_SelfTimerCapable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMS_SelfTimerCapable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMS_CRAwarenessRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMS_CRAwarenessRequested, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMS_CRAwarenessRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMS_CRAwarenessRequested, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMS_PeriodicAwarenessRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMS_PeriodicAwarenessRequested, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMS_PeriodicAwarenessRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMS_PeriodicAwarenessRequested, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMS_ScheduledAwarenessRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMS_ScheduledAwarenessRequested, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMS_ScheduledAwarenessRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMS_ScheduledAwarenessRequested, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_ParameterName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_ParameterName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_ParameterName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_ParameterName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_EventList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_EventList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_EventList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_EventList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DG_ManufacturerOUI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DG_ManufacturerOUI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DG_ProductClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DG_ProductClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DG_SerialNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DG_SerialNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DT_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DT_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DT_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DT_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DT_NTPServer1(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DT_NTPServer1, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DT_NTPServer1(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DT_NTPServer1, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DT_NTPServer2(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DT_NTPServer2, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DT_NTPServer2(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DT_NTPServer2, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DT_NTPServer3(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DT_NTPServer3, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DT_NTPServer3(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DT_NTPServer3, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DT_NTPServer4(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DT_NTPServer4, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DT_NTPServer4(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DT_NTPServer4, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DT_NTPServer5(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DT_NTPServer5, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DT_NTPServer5(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DT_NTPServer5, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DT_CurrentLocalTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DT_CurrentLocalTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DT_LocalTimeZone(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DT_LocalTimeZone, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DT_LocalTimeZone(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DT_LocalTimeZone, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_PasswordRequired(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_PasswordRequired, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DU_PasswordUserSelectable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_PasswordUserSelectable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DU_PasswordReset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_PasswordReset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_PasswordReset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_PasswordReset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_UpgradeAvailable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_UpgradeAvailable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DU_WarrantyDate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_WarrantyDate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_WarrantyDate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_WarrantyDate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_ISPName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ISPName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_ISPName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_ISPName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_ISPHelpDesk(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ISPHelpDesk, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_ISPHelpDesk(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_ISPHelpDesk, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_ISPHomePage(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ISPHomePage, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_ISPHomePage(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_ISPHomePage, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_ISPHelpPage(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ISPHelpPage, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_ISPHelpPage(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_ISPHelpPage, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_ISPLogo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ISPLogo, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_ISPLogo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_ISPLogo, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_ISPLogoSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ISPLogoSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_ISPLogoSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_ISPLogoSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_ISPMailServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ISPMailServer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_ISPMailServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_ISPMailServer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_ISPNewsServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ISPNewsServer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_ISPNewsServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_ISPNewsServer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_TextColor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_TextColor, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_TextColor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_TextColor, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_BackgroundColor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_BackgroundColor, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_BackgroundColor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_BackgroundColor, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_ButtonColor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ButtonColor, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_ButtonColor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_ButtonColor, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_ButtonTextColor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_ButtonTextColor, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_ButtonTextColor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_ButtonTextColor, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_AutoUpdateServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_AutoUpdateServer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_AutoUpdateServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_AutoUpdateServer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_UserUpdateServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_UserUpdateServer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_UserUpdateServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_UserUpdateServer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DU_AvailableLanguages(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_AvailableLanguages, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DU_CurrentLanguage(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_CurrentLanguage, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DU_CurrentLanguage(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_CurrentLanguage, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUR_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUR_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUR_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUR_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUR_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUR_Port, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUR_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUR_Port, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUR_SupportedProtocols(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUR_SupportedProtocols, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUR_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUR_Protocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUR_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUR_Protocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUX_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUX_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUX_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUX_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUX_Ports(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUX_Ports, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUX_Ports(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUX_Ports, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUX_SupportedProtocols(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUX_SupportedProtocols, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUX_Protocols(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUX_Protocols, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUX_Protocols(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUX_Protocols, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUX_AllowAnyIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUX_AllowAnyIP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUX_AllowAnyIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUX_AllowAnyIP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUX_AllowedIpRanges(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUX_AllowedIpRanges, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUX_AllowedIpRanges(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUX_AllowedIpRanges, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUX_MaxAllowedIpRangeNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUX_MaxAllowedIpRangeNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUL_Movable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUL_Movable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUL_Movable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUL_Movable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUL_Resizable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUL_Resizable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUL_Resizable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUL_Resizable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUL_PosX(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUL_PosX, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUL_PosX(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUL_PosX, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUL_PosY(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUL_PosY, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUL_PosY(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUL_PosY, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUL_Width(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUL_Width, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUL_Width(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUL_Width, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUL_Height(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUL_Height, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUL_Height(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUL_Height, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUL_DisplayWidth(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUL_DisplayWidth, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUL_DisplayHeight(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUL_DisplayHeight, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIt_HigherLayer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIt_HigherLayer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIt_LowerLayer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIt_LowerLayer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIt_HigherAlias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIt_HigherAlias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIt_LowerAlias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIt_LowerAlias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DE_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DE_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DE_LinkNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DE_LinkNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DE_VLANTerminationNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DE_VLANTerminationNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DE_RMONStatsNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DE_RMONStatsNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DERt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DERt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DERt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DERt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DERt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DERt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DERt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DERt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DERt_VLANID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_VLANID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DERt_VLANID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DERt_VLANID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DERt_Queue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Queue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DERt_Queue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DERt_Queue, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DERt_AllQueues(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_AllQueues, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DERt_AllQueues(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DERt_AllQueues, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DERt_DropEvents(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_DropEvents, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Bytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Bytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Packets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Packets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_BroadcastPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_BroadcastPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_MulticastPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_MulticastPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_CRCErroredPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_CRCErroredPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_UndersizePackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_UndersizePackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_OversizePackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_OversizePackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Packets64Bytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Packets64Bytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Packets65to127Bytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Packets65to127Bytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Packets128to255Bytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Packets128to255Bytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Packets512to1023Bytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Packets512to1023Bytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DERt_Packets1024to1518Bytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DERt_Packets1024to1518Bytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEI2_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEI2_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEI2_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEI2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEI2_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEI2_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2_CurrentBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2_CurrentBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2_DuplexMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2_DuplexMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2_EEECapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2_EEECapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2_EEEEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2_EEEEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2S_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2S_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2S_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2S_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2S_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2S_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2S_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2S_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2S_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2S_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2S_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2S_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI2S_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI2S_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEI1_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEI1_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEI1_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEI1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEI1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEI1_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1_CurrentBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1_CurrentBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1_DuplexMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1_DuplexMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1_EEECapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1_EEECapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1_EEEEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1_EEEEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1S_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1S_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1S_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1S_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1S_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1S_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1S_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1S_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1S_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1S_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1S_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1S_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEI1S_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEI1S_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEIt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEIt_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIt_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEIt_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEIt_MaxBitRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEIt_CurrentBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_CurrentBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIt_DuplexMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_DuplexMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEIt_DuplexMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEIt_DuplexMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEIt_EEECapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_EEECapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEIt_EEEEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEIt_EEEEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEIt_EEEEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEIt_EEEEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEItS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEItS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEItS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEItS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEItS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEItS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEItS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEItS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEItS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEItS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEItS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEItS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEItS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEItS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEItS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEItS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEItS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEItS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEItS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEItS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEItS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEItS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEItS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEItS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEItS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEItS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEItS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEItS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEItS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEItS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEL2_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEL2_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEL2_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEL2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEL2_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEL2_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2_PriorityTagging(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2_PriorityTagging, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEL2_PriorityTagging(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEL2_PriorityTagging, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEL2S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2S_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2S_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2S_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2S_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2S_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2S_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2S_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2S_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2S_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2S_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2S_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2S_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL2S_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL2S_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEL1_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEL1_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEL1_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEL1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEL1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEL1_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1_PriorityTagging(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1_PriorityTagging, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEL1_PriorityTagging(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEL1_PriorityTagging, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEL1S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1S_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1S_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1S_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1S_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1S_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1S_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1S_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1S_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1S_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1S_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1S_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1S_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEL1S_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEL1S_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DELt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DELt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DELt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DELt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DELt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DELt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DELt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DELt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DELt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELt_PriorityTagging(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELt_PriorityTagging, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DELt_PriorityTagging(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DELt_PriorityTagging, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DELtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELtS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELtS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELtS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELtS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELtS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELtS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELtS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELtS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELtS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELtS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELtS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELtS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DELtS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DELtS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEVt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEVt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEVt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEVt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEVt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEVt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEVt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEVt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEVt_VLANID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVt_VLANID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEVt_VLANID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEVt_VLANID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEVt_TPID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVt_TPID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DEVt_TPID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DEVt_TPID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DEVtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVtS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVtS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVtS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVtS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVtS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVtS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVtS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVtS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVtS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVtS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVtS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVtS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DEVtS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DEVtS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DU_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DU_PortNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_PortNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Port, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUP2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUP2_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUP2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUP2_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUP2_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUP2_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUP2_Standard(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUP2_Standard, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUP2_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUP2_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUP2_Receptacle(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUP2_Receptacle, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUP2_Rate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUP2_Rate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUP2_Power(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUP2_Power, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUP1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUP1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUP1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUP1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUP1_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUP1_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUP1_Standard(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUP1_Standard, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUP1_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUP1_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUP1_Receptacle(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUP1_Receptacle, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUP1_Rate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUP1_Rate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUP1_Power(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUP1_Power, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUPt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUPt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUPt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUPt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUPt_Standard(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUPt_Standard, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUPt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUPt_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUPt_Receptacle(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUPt_Receptacle, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUPt_Rate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUPt_Rate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUPt_Power(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUPt_Power, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUU_HostNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUU_HostNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUH2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUH2_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUH2_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUH2_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUH2_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUH2_PowerManagementEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2_PowerManagementEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUH2_PowerManagementEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUH2_PowerManagementEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUH2_USBVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2_USBVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2_DeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2_DeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2Dt_DeviceNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2Dt_DeviceNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2Dt_USBVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2Dt_USBVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2Dt_DeviceClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2Dt_DeviceClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2Dt_DeviceSubClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2Dt_DeviceSubClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2Dt_DeviceVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2Dt_DeviceVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2Dt_DeviceProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2Dt_DeviceProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2Dt_ProductID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2Dt_ProductID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2Dt_VendorID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2Dt_VendorID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2Dt_Manufacturer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2Dt_Manufacturer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2Dt_ProductClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2Dt_ProductClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2Dt_SerialNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2Dt_SerialNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2Dt_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2Dt_Port, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2Dt_USBPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2Dt_USBPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2Dt_Rate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2Dt_Rate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2Dt_Parent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2Dt_Parent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2Dt_MaxChildren(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2Dt_MaxChildren, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2Dt_IsSuspended(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2Dt_IsSuspended, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2Dt_IsSelfPowered(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2Dt_IsSelfPowered, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2Dt_ConfigurationNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2Dt_ConfigurationNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2DtCt_ConfigurationNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2DtCt_ConfigurationNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2DtCt_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2DtCt_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2DtCtIt_InterfaceNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2DtCtIt_InterfaceNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2DtCtIt_nterfaceClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2DtCtIt_nterfaceClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2DtCtIt_InterfaceSubClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2DtCtIt_InterfaceSubClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH2DtCtIt_InterfaceProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH2DtCtIt_InterfaceProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUH1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUH1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUH1_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUH1_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUH1_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUH1_PowerManagementEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1_PowerManagementEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUH1_PowerManagementEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUH1_PowerManagementEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUH1_USBVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1_USBVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1_DeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1_DeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1Dt_DeviceNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1Dt_DeviceNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1Dt_USBVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1Dt_USBVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1Dt_DeviceClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1Dt_DeviceClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1Dt_DeviceSubClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1Dt_DeviceSubClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1Dt_DeviceVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1Dt_DeviceVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1Dt_DeviceProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1Dt_DeviceProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1Dt_ProductID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1Dt_ProductID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1Dt_VendorID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1Dt_VendorID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1Dt_Manufacturer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1Dt_Manufacturer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1Dt_ProductClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1Dt_ProductClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1Dt_SerialNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1Dt_SerialNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1Dt_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1Dt_Port, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1Dt_USBPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1Dt_USBPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1Dt_Rate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1Dt_Rate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1Dt_Parent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1Dt_Parent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1Dt_MaxChildren(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1Dt_MaxChildren, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1Dt_IsSuspended(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1Dt_IsSuspended, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1Dt_IsSelfPowered(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1Dt_IsSelfPowered, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1Dt_ConfigurationNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1Dt_ConfigurationNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1DtCt_ConfigurationNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1DtCt_ConfigurationNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1DtCt_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1DtCt_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1DtCtIt_InterfaceNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1DtCtIt_InterfaceNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1DtCtIt_nterfaceClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1DtCtIt_nterfaceClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1DtCtIt_InterfaceSubClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1DtCtIt_InterfaceSubClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUH1DtCtIt_InterfaceProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUH1DtCtIt_InterfaceProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHt_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHt_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHt_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHt_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHt_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHt_PowerManagementEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHt_PowerManagementEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHt_PowerManagementEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHt_PowerManagementEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHt_USBVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHt_USBVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHt_DeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHt_DeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHt_DeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHt_DeviceNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHtDt_DeviceNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDt_DeviceNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHtDt_USBVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDt_USBVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHtDt_DeviceClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDt_DeviceClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHtDt_DeviceSubClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDt_DeviceSubClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHtDt_DeviceSubClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHtDt_DeviceSubClass, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHtDt_DeviceVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDt_DeviceVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHtDt_DeviceVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHtDt_DeviceVersion, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHtDt_DeviceProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDt_DeviceProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHtDt_DeviceProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHtDt_DeviceProtocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHtDt_ProductID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDt_ProductID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHtDt_ProductID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHtDt_ProductID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHtDt_VendorID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDt_VendorID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHtDt_VendorID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHtDt_VendorID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHtDt_Manufacturer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDt_Manufacturer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHtDt_Manufacturer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHtDt_Manufacturer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHtDt_ProductClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDt_ProductClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHtDt_ProductClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHtDt_ProductClass, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHtDt_SerialNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDt_SerialNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUUHtDt_SerialNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUUHtDt_SerialNumber, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUUHtDt_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDt_Port, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHtDt_USBPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDt_USBPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHtDt_Rate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDt_Rate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHtDt_Parent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDt_Parent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHtDt_MaxChildren(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDt_MaxChildren, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHtDt_IsSuspended(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDt_IsSuspended, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHtDt_IsSelfPowered(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDt_IsSelfPowered, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHtDt_ConfigurationNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDt_ConfigurationNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHtDtCt_ConfigurationNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDtCt_ConfigurationNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHtDtCt_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDtCt_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHtDtCtIt_InterfaceNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDtCtIt_InterfaceNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHtDtCtIt_nterfaceClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDtCtIt_nterfaceClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHtDtCtIt_InterfaceSubClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDtCtIt_InterfaceSubClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUUHtDtCtIt_InterfaceProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUUHtDtCtIt_InterfaceProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DW_RadioNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DW_RadioNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DW_SSIDNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DW_SSIDNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DW_AccessPointNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DW_AccessPointNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DW_EndPointNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DW_EndPointNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_X_Charter_SpectralEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_X_Charter_SpectralEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_X_Charter_SpectralEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_X_Charter_SpectralEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_SupportedFrequencyBands(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_SupportedFrequencyBands, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_OperatingFrequencyBand(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_OperatingFrequencyBand, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_SupportedStandards(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_SupportedStandards, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_OperatingStandards(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_OperatingStandards, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_OperatingStandards(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_OperatingStandards, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_PossibleChannels(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_PossibleChannels, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_ChannelsInUse(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_ChannelsInUse, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_Channel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_Channel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_Channel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_Channel, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_AutoChannelSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_AutoChannelSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_AutoChannelEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_AutoChannelEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_AutoChannelEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_AutoChannelEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_AutoChannelRefreshPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_AutoChannelRefreshPeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_OperatingChannelBandwidth(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_OperatingChannelBandwidth, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_OperatingChannelBandwidth(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_OperatingChannelBandwidth, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_ExtensionChannel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_ExtensionChannel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_ExtensionChannel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_ExtensionChannel, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_GuardInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_GuardInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_GuardInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_GuardInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_MCS(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_MCS, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_TransmitPowerSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_TransmitPowerSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_TransmitPower(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_TransmitPower, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_TransmitPower(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_TransmitPower, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_IEEE80211hSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_IEEE80211hSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_IEEE80211hEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_IEEE80211hEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_RegulatoryDomain(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_RegulatoryDomain, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_RetryLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_RetryLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_CCARequest(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_CCARequest, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_CCARequest(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_CCARequest, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_CCAReport(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_CCAReport, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_RPIHistogramRequest(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_RPIHistogramRequest, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_RPIHistogramRequest(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_RPIHistogramRequest, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_RPIHistogramReport(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_RPIHistogramReport, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_FragmentationThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_FragmentationThreshold, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_FragmentationThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_FragmentationThreshold, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_RTSThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_RTSThreshold, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_RTSThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_RTSThreshold, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_LongRetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_LongRetryLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_LongRetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_LongRetryLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_BeaconPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_BeaconPeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_BeaconPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_BeaconPeriod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_DTIMPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_DTIMPeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_DTIMPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_DTIMPeriod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_PacketAggregationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_PacketAggregationEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2_PreambleType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_PreambleType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_PreambleType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_PreambleType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_BasicDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_BasicDataTransmitRates, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_BasicDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_BasicDataTransmitRates, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_OperationalDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_OperationalDataTransmitRates, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR2_OperationalDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR2_OperationalDataTransmitRates, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR2_SupportedDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2_SupportedDataTransmitRates, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2S_PLCPErrorCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2S_PLCPErrorCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2S_FCSErrorCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2S_FCSErrorCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2S_InvalidMACCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2S_InvalidMACCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2S_PacketsOtherReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2S_PacketsOtherReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR2S_Noise(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR2S_Noise, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_X_Charter_SpectralEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_X_Charter_SpectralEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_X_Charter_SpectralEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_X_Charter_SpectralEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_SupportedFrequencyBands(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_SupportedFrequencyBands, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_OperatingFrequencyBand(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_OperatingFrequencyBand, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_SupportedStandards(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_SupportedStandards, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_OperatingStandards(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_OperatingStandards, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_OperatingStandards(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_OperatingStandards, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_PossibleChannels(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_PossibleChannels, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_ChannelsInUse(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_ChannelsInUse, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_Channel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_Channel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_Channel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_Channel, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_AutoChannelSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_AutoChannelSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_AutoChannelEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_AutoChannelEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_AutoChannelEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_AutoChannelEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_AutoChannelRefreshPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_AutoChannelRefreshPeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_OperatingChannelBandwidth(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_OperatingChannelBandwidth, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_OperatingChannelBandwidth(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_OperatingChannelBandwidth, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_ExtensionChannel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_ExtensionChannel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_ExtensionChannel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_ExtensionChannel, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_GuardInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_GuardInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_GuardInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_GuardInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_MCS(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_MCS, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_TransmitPowerSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_TransmitPowerSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_TransmitPower(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_TransmitPower, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_TransmitPower(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_TransmitPower, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_IEEE80211hSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_IEEE80211hSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_IEEE80211hEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_IEEE80211hEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_RegulatoryDomain(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_RegulatoryDomain, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_RetryLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_RetryLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_CCARequest(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_CCARequest, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_CCARequest(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_CCARequest, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_CCAReport(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_CCAReport, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_RPIHistogramRequest(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_RPIHistogramRequest, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_RPIHistogramRequest(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_RPIHistogramRequest, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_RPIHistogramReport(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_RPIHistogramReport, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_FragmentationThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_FragmentationThreshold, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_FragmentationThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_FragmentationThreshold, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_RTSThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_RTSThreshold, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_RTSThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_RTSThreshold, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_LongRetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_LongRetryLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_LongRetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_LongRetryLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_BeaconPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_BeaconPeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_BeaconPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_BeaconPeriod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_DTIMPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_DTIMPeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_DTIMPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_DTIMPeriod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_PacketAggregationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_PacketAggregationEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1_PreambleType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_PreambleType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_PreambleType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_PreambleType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_BasicDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_BasicDataTransmitRates, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_BasicDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_BasicDataTransmitRates, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_OperationalDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_OperationalDataTransmitRates, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWR1_OperationalDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWR1_OperationalDataTransmitRates, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWR1_SupportedDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1_SupportedDataTransmitRates, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1S_PLCPErrorCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1S_PLCPErrorCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1S_FCSErrorCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1S_FCSErrorCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1S_InvalidMACCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1S_InvalidMACCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1S_PacketsOtherReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1S_PacketsOtherReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWR1S_Noise(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWR1S_Noise, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_SupportedFrequencyBands(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_SupportedFrequencyBands, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_OperatingFrequencyBand(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_OperatingFrequencyBand, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_OperatingFrequencyBand(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_OperatingFrequencyBand, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_SupportedStandards(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_SupportedStandards, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_OperatingStandards(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_OperatingStandards, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_OperatingStandards(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_OperatingStandards, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_PossibleChannels(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_PossibleChannels, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_ChannelsInUse(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_ChannelsInUse, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_Channel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_Channel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_Channel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_Channel, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_AutoChannelSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_AutoChannelSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_AutoChannelEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_AutoChannelEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_AutoChannelEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_AutoChannelEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_AutoChannelRefreshPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_AutoChannelRefreshPeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_AutoChannelRefreshPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_AutoChannelRefreshPeriod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_OperatingChannelBandwidth(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_OperatingChannelBandwidth, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_OperatingChannelBandwidth(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_OperatingChannelBandwidth, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_ExtensionChannel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_ExtensionChannel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_ExtensionChannel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_ExtensionChannel, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_GuardInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_GuardInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_GuardInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_GuardInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_MCS(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_MCS, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_MCS(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_MCS, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_TransmitPowerSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_TransmitPowerSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_TransmitPower(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_TransmitPower, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_TransmitPower(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_TransmitPower, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_IEEE80211hSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_IEEE80211hSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_IEEE80211hEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_IEEE80211hEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_IEEE80211hEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_IEEE80211hEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_RegulatoryDomain(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_RegulatoryDomain, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_RegulatoryDomain(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_RegulatoryDomain, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_RetryLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_RetryLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_CCARequest(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_CCARequest, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_CCARequest(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_CCARequest, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_CCAReport(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_CCAReport, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_RPIHistogramRequest(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_RPIHistogramRequest, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_RPIHistogramRequest(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_RPIHistogramRequest, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_RPIHistogramReport(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_RPIHistogramReport, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRt_FragmentationThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_FragmentationThreshold, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_FragmentationThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_FragmentationThreshold, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_RTSThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_RTSThreshold, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_RTSThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_RTSThreshold, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_LongRetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_LongRetryLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_LongRetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_LongRetryLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_BeaconPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_BeaconPeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_BeaconPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_BeaconPeriod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_DTIMPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_DTIMPeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_DTIMPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_DTIMPeriod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_PacketAggregationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_PacketAggregationEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_PacketAggregationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_PacketAggregationEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_PreambleType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_PreambleType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_PreambleType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_PreambleType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_BasicDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_BasicDataTransmitRates, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_BasicDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_BasicDataTransmitRates, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_OperationalDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_OperationalDataTransmitRates, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWRt_OperationalDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWRt_OperationalDataTransmitRates, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWRt_SupportedDataTransmitRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRt_SupportedDataTransmitRates, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRtS_PLCPErrorCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRtS_PLCPErrorCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRtS_FCSErrorCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRtS_FCSErrorCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRtS_InvalidMACCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRtS_InvalidMACCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRtS_PacketsOtherReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRtS_PacketsOtherReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWRtS_Noise(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWRtS_Noise, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWN_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWN_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWN_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWN_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWN_ResultNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWN_ResultNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_Radio(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_Radio, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_SSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_BSSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_BSSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_Mode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_Mode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_Channel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_Channel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_SignalStrength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_SignalStrength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_SecurityModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_SecurityModeEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_EncryptionMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_EncryptionMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_OperatingFrequencyBand(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_OperatingFrequencyBand, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_SupportedStandards(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_SupportedStandards, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_OperatingStandards(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_OperatingStandards, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_OperatingChannelBandwidth(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_OperatingChannelBandwidth, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_BeaconPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_BeaconPeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_Noise(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_Noise, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_BasicDataTransferRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_BasicDataTransferRates, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_SupportedDataTransferRates(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_SupportedDataTransferRates, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWNRt_DTIMPeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWNRt_DTIMPeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS8_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS8_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS8_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8_BSSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8_BSSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8_SSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS8_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS8_SSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS8S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_ACKFailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_ACKFailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_AggregatedPacketCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_AggregatedPacketCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS8S_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS8S_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS7_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS7_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS7_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7_BSSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7_BSSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7_SSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS7_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS7_SSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS7S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_ACKFailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_ACKFailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_AggregatedPacketCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_AggregatedPacketCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS7S_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS7S_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS6_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS6_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS6_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS6_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS6_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS6_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6_BSSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6_BSSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6_SSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS6_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS6_SSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS6S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_ACKFailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_ACKFailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_AggregatedPacketCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_AggregatedPacketCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS6S_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS6S_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS5_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS5_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS5_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS5_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS5_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS5_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5_BSSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5_BSSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5_SSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS5_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS5_SSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS5S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_ACKFailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_ACKFailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_AggregatedPacketCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_AggregatedPacketCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS5S_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS5S_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS4_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS4_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS4_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS4_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS4_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4_BSSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4_BSSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4_SSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS4_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS4_SSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS4S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_ACKFailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_ACKFailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_AggregatedPacketCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_AggregatedPacketCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS4S_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS4S_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS3_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS3_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS3_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS3_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS3_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3_BSSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3_BSSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3_SSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS3_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS3_SSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS3S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_ACKFailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_ACKFailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_AggregatedPacketCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_AggregatedPacketCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS3S_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS3S_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS2_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS2_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS2_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS2_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS2_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2_BSSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2_BSSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2_SSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS2_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS2_SSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS2S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_ACKFailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_ACKFailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_AggregatedPacketCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_AggregatedPacketCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS2S_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS2S_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS1_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS1_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS1_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS1_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1_BSSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1_BSSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1_SSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWS1_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWS1_SSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWS1S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_ACKFailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_ACKFailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_AggregatedPacketCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_AggregatedPacketCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWS1S_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWS1S_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWSt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWSt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWSt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWSt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWSt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWSt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWSt_BSSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSt_BSSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWSt_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWSt_SSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWSt_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWSt_SSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWStS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_ACKFailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_ACKFailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_AggregatedPacketCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_AggregatedPacketCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWStS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWStS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8_SSIDReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8_SSIDReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8_RetryLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8_WMMCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8_WMMCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8_WMMCapability_1581(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8_WMMCapability_1581, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8_UAPSDCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8_UAPSDCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8_WMMEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8_WMMEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8_UAPSDEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8_UAPSDEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8_MaxAssociatedDevices, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8_MaxAssociatedDevices, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8_IsolationEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8_IsolationEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8_MACAddressControlEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8_MACAddressControlEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8_AllowedMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8_AllowedMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8S_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8S_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8S_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8S_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8S_ModesSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8S_ModesSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8S_ModeEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8S_ModeEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8S_WEPKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8S_WEPKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8S_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8S_PreSharedKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8S_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8S_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8S_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8S_RekeyingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8S_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8S_RekeyingInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8S_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8S_RadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8S_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8S_RadiusServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8S_SecondaryRadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8S_SecondaryRadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8S_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8S_RadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8S_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8S_RadiusServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8S_SecondaryRadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8S_SecondaryRadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8S_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8S_RadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8S_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8S_RadiusSecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8S_SecondaryRadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8S_SecondaryRadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A_ServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A_ServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A_SecondaryServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A_SecondaryServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A_ServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A_ServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A_SecondaryServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A_SecondaryServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A_Secret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A_Secret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A_SecondarySecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A_SecondarySecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A_InterimInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A_InterimInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8W_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8W_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8W_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8W_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8W_ConfigMethodsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8W_ConfigMethodsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8W_ConfigMethodsEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8W_ConfigMethodsEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8At_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8At_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8At_AuthenticationState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8At_AuthenticationState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8At_LastDataDownlinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8At_LastDataDownlinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8At_LastDataUplinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8At_LastDataUplinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8At_SignalStrength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8At_SignalStrength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8At_Retransmissions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8At_Retransmissions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8At_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8At_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8AtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8AtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8AtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8AtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8AtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8AtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8AtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8AtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8AtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8AtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8AtS_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8AtS_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8AtS_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8AtS_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8AtS_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8AtS_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8AtS_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8AtS_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A4_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A4_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A4_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A4_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A4_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A4_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A4_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A4_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A4_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A4_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A4_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A4_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A4_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A4_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A4_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A4_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A4_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A4_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A4_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A4_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A4_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A4_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A4_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A4_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A4S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A4S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A4S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A4S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A4S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A4S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A4S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A4S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A4S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A4S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A4S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A4S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A4S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A4S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A4S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A4S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A4S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A4S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A4S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A4S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A3_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A3_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A3_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A3_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A3_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A3_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A3_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A3_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A3_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A3_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A3_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A3_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A3_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A3_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A3_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A3_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A3_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A3_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A3_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A3_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A3_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A3_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A3_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A3_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A3S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A3S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A3S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A3S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A3S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A3S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A3S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A3S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A3S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A3S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A3S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A3S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A3S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A3S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A3S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A3S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A3S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A3S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A3S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A3S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A2_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A2_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A2_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A2_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A2_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A2_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A2_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A2_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A2_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A2_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A2_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A2_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A2_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A2_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A2_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A2_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A2_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A2_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A2_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A2_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A2_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A2_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A2_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A2_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A2S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A2S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A2S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A2S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A2S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A2S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A2S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A2S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A2S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A2S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A2S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A2S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A2S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A2S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A2S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A2S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A2S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A2S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A2S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A2S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A1_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A1_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A1_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A1_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A1_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A1_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A1_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A1_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A1_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A1_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A1_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A1_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A1_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A1_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A1_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A1_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A1_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A1_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A1_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A1_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8A1_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8A1_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8A1S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A1S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A1S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A1S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A1S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A1S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A1S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A1S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A1S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A1S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A1S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A1S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A1S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A1S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A1S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A1S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A1S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A1S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8A1S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8A1S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8At_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8At_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8At_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8At_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8At_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8At_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8At_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8At_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8At_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8At_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8At_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8At_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8At_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8At_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8At_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8At_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8At_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8At_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8At_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8At_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8At_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8At_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8At_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8At_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8At_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8At_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8At_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8At_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8At_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8At_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8At_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8At_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA8At_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA8At_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA8AtS_BytesSent_1778(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8AtS_BytesSent_1778, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8AtS_BytesReceived_1779(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8AtS_BytesReceived_1779, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8AtS_PacketsSent_1780(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8AtS_PacketsSent_1780, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8AtS_PacketsReceived_1781(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8AtS_PacketsReceived_1781, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8AtS_ErrorsSent_1782(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8AtS_ErrorsSent_1782, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8AtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8AtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8AtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8AtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8AtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8AtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8AtS_RetransCount_1786(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8AtS_RetransCount_1786, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA8AtS_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA8AtS_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7_SSIDReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7_SSIDReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7_RetryLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7_WMMCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7_WMMCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7_WMMCapability_1798(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7_WMMCapability_1798, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7_UAPSDCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7_UAPSDCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7_WMMEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7_WMMEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7_UAPSDEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7_UAPSDEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7_MaxAssociatedDevices, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7_MaxAssociatedDevices, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7_IsolationEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7_IsolationEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7_MACAddressControlEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7_MACAddressControlEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7_AllowedMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7_AllowedMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7S_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7S_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7S_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7S_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7S_ModesSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7S_ModesSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7S_ModeEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7S_ModeEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7S_WEPKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7S_WEPKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7S_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7S_PreSharedKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7S_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7S_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7S_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7S_RekeyingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7S_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7S_RekeyingInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7S_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7S_RadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7S_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7S_RadiusServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7S_SecondaryRadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7S_SecondaryRadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7S_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7S_RadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7S_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7S_RadiusServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7S_SecondaryRadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7S_SecondaryRadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7S_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7S_RadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7S_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7S_RadiusSecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7S_SecondaryRadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7S_SecondaryRadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A_ServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A_ServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A_SecondaryServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A_SecondaryServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A_ServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A_ServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A_SecondaryServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A_SecondaryServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A_Secret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A_Secret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A_SecondarySecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A_SecondarySecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A_InterimInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A_InterimInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7W_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7W_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7W_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7W_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7W_ConfigMethodsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7W_ConfigMethodsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7W_ConfigMethodsEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7W_ConfigMethodsEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7At_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7At_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7At_AuthenticationState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7At_AuthenticationState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7At_LastDataDownlinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7At_LastDataDownlinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7At_LastDataUplinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7At_LastDataUplinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7At_SignalStrength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7At_SignalStrength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7At_Retransmissions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7At_Retransmissions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7At_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7At_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7AtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7AtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7AtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7AtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7AtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7AtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7AtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7AtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7AtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7AtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7AtS_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7AtS_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7AtS_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7AtS_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7AtS_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7AtS_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7AtS_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7AtS_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A4_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A4_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A4_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A4_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A4_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A4_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A4_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A4_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A4_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A4_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A4_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A4_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A4_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A4_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A4_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A4_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A4_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A4_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A4_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A4_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A4_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A4_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A4_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A4_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A4S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A4S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A4S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A4S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A4S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A4S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A4S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A4S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A4S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A4S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A4S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A4S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A4S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A4S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A4S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A4S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A4S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A4S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A4S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A4S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A3_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A3_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A3_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A3_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A3_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A3_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A3_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A3_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A3_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A3_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A3_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A3_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A3_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A3_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A3_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A3_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A3_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A3_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A3_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A3_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A3_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A3_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A3_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A3_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A3S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A3S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A3S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A3S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A3S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A3S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A3S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A3S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A3S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A3S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A3S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A3S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A3S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A3S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A3S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A3S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A3S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A3S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A3S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A3S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A2_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A2_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A2_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A2_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A2_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A2_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A2_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A2_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A2_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A2_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A2_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A2_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A2_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A2_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A2_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A2_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A2_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A2_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A2_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A2_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A2_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A2_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A2_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A2_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A2S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A2S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A2S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A2S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A2S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A2S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A2S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A2S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A2S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A2S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A2S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A2S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A2S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A2S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A2S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A2S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A2S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A2S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A2S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A2S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A1_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A1_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A1_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A1_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A1_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A1_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A1_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A1_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A1_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A1_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A1_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A1_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A1_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A1_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A1_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A1_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A1_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A1_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A1_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A1_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7A1_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7A1_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7A1S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A1S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A1S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A1S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A1S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A1S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A1S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A1S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A1S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A1S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A1S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A1S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A1S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A1S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A1S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A1S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A1S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A1S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7A1S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7A1S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7At_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7At_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7At_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7At_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7At_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7At_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7At_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7At_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7At_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7At_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7At_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7At_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7At_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7At_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7At_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7At_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7At_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7At_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7At_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7At_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7At_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7At_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7At_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7At_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7At_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7At_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7At_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7At_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7At_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7At_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7At_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7At_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA7At_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA7At_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA7AtS_BytesSent_1995(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7AtS_BytesSent_1995, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7AtS_BytesReceived_1996(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7AtS_BytesReceived_1996, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7AtS_PacketsSent_1997(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7AtS_PacketsSent_1997, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7AtS_PacketsReceived_1998(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7AtS_PacketsReceived_1998, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7AtS_ErrorsSent_1999(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7AtS_ErrorsSent_1999, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7AtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7AtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7AtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7AtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7AtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7AtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7AtS_RetransCount_2003(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7AtS_RetransCount_2003, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA7AtS_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA7AtS_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6_SSIDReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6_SSIDReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6_RetryLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6_WMMCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6_WMMCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6_WMMCapability_2015(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6_WMMCapability_2015, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6_UAPSDCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6_UAPSDCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6_WMMEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6_WMMEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6_UAPSDEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6_UAPSDEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6_MaxAssociatedDevices, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6_MaxAssociatedDevices, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6_IsolationEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6_IsolationEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6_MACAddressControlEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6_MACAddressControlEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6_AllowedMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6_AllowedMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6S_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6S_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6S_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6S_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6S_ModesSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6S_ModesSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6S_ModeEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6S_ModeEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6S_WEPKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6S_WEPKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6S_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6S_PreSharedKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6S_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6S_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6S_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6S_RekeyingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6S_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6S_RekeyingInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6S_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6S_RadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6S_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6S_RadiusServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6S_SecondaryRadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6S_SecondaryRadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6S_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6S_RadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6S_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6S_RadiusServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6S_SecondaryRadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6S_SecondaryRadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6S_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6S_RadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6S_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6S_RadiusSecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6S_SecondaryRadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6S_SecondaryRadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A_ServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A_ServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A_SecondaryServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A_SecondaryServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A_ServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A_ServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A_SecondaryServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A_SecondaryServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A_Secret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A_Secret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A_SecondarySecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A_SecondarySecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A_InterimInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A_InterimInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6W_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6W_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6W_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6W_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6W_ConfigMethodsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6W_ConfigMethodsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6W_ConfigMethodsEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6W_ConfigMethodsEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6At_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6At_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6At_AuthenticationState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6At_AuthenticationState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6At_LastDataDownlinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6At_LastDataDownlinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6At_LastDataUplinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6At_LastDataUplinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6At_SignalStrength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6At_SignalStrength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6At_Retransmissions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6At_Retransmissions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6At_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6At_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6AtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6AtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6AtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6AtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6AtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6AtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6AtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6AtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6AtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6AtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6AtS_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6AtS_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6AtS_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6AtS_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6AtS_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6AtS_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6AtS_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6AtS_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A4_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A4_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A4_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A4_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A4_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A4_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A4_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A4_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A4_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A4_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A4_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A4_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A4_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A4_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A4_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A4_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A4_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A4_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A4_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A4_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A4_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A4_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A4_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A4_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A4S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A4S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A4S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A4S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A4S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A4S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A4S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A4S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A4S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A4S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A4S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A4S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A4S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A4S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A4S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A4S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A4S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A4S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A4S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A4S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A3_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A3_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A3_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A3_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A3_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A3_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A3_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A3_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A3_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A3_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A3_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A3_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A3_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A3_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A3_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A3_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A3_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A3_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A3_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A3_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A3_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A3_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A3_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A3_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A3S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A3S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A3S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A3S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A3S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A3S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A3S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A3S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A3S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A3S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A3S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A3S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A3S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A3S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A3S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A3S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A3S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A3S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A3S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A3S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A2_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A2_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A2_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A2_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A2_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A2_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A2_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A2_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A2_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A2_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A2_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A2_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A2_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A2_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A2_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A2_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A2_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A2_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A2_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A2_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A2_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A2_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A2_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A2_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A2S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A2S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A2S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A2S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A2S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A2S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A2S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A2S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A2S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A2S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A2S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A2S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A2S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A2S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A2S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A2S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A2S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A2S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A2S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A2S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A1_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A1_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A1_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A1_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A1_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A1_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A1_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A1_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A1_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A1_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A1_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A1_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A1_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A1_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A1_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A1_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A1_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A1_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A1_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A1_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6A1_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6A1_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6A1S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A1S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A1S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A1S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A1S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A1S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A1S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A1S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A1S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A1S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A1S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A1S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A1S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A1S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A1S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A1S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A1S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A1S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6A1S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6A1S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6At_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6At_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6At_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6At_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6At_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6At_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6At_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6At_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6At_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6At_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6At_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6At_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6At_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6At_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6At_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6At_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6At_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6At_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6At_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6At_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6At_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6At_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6At_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6At_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6At_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6At_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6At_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6At_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6At_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6At_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6At_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6At_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA6At_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA6At_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA6AtS_BytesSent_2212(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6AtS_BytesSent_2212, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6AtS_BytesReceived_2213(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6AtS_BytesReceived_2213, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6AtS_PacketsSent_2214(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6AtS_PacketsSent_2214, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6AtS_PacketsReceived_2215(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6AtS_PacketsReceived_2215, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6AtS_ErrorsSent_2216(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6AtS_ErrorsSent_2216, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6AtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6AtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6AtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6AtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6AtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6AtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6AtS_RetransCount_2220(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6AtS_RetransCount_2220, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA6AtS_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA6AtS_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5_SSIDReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5_SSIDReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5_RetryLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5_WMMCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5_WMMCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5_WMMCapability_2232(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5_WMMCapability_2232, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5_UAPSDCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5_UAPSDCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5_WMMEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5_WMMEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5_UAPSDEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5_UAPSDEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5_MaxAssociatedDevices, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5_MaxAssociatedDevices, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5_IsolationEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5_IsolationEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5_MACAddressControlEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5_MACAddressControlEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5_AllowedMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5_AllowedMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5S_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5S_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5S_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5S_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5S_ModesSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5S_ModesSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5S_ModeEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5S_ModeEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5S_WEPKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5S_WEPKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5S_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5S_PreSharedKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5S_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5S_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5S_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5S_RekeyingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5S_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5S_RekeyingInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5S_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5S_RadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5S_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5S_RadiusServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5S_SecondaryRadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5S_SecondaryRadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5S_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5S_RadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5S_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5S_RadiusServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5S_SecondaryRadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5S_SecondaryRadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5S_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5S_RadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5S_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5S_RadiusSecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5S_SecondaryRadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5S_SecondaryRadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A_ServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A_ServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A_SecondaryServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A_SecondaryServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A_ServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A_ServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A_SecondaryServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A_SecondaryServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A_Secret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A_Secret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A_SecondarySecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A_SecondarySecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A_InterimInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A_InterimInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5W_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5W_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5W_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5W_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5W_ConfigMethodsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5W_ConfigMethodsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5W_ConfigMethodsEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5W_ConfigMethodsEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5At_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5At_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5At_AuthenticationState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5At_AuthenticationState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5At_LastDataDownlinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5At_LastDataDownlinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5At_LastDataUplinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5At_LastDataUplinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5At_SignalStrength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5At_SignalStrength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5At_Retransmissions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5At_Retransmissions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5At_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5At_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5AtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5AtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5AtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5AtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5AtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5AtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5AtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5AtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5AtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5AtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5AtS_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5AtS_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5AtS_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5AtS_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5AtS_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5AtS_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5AtS_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5AtS_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A4_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A4_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A4_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A4_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A4_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A4_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A4_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A4_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A4_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A4_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A4_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A4_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A4_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A4_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A4_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A4_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A4_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A4_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A4_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A4_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A4_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A4_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A4_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A4_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A4S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A4S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A4S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A4S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A4S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A4S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A4S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A4S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A4S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A4S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A4S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A4S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A4S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A4S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A4S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A4S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A4S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A4S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A4S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A4S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A3_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A3_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A3_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A3_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A3_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A3_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A3_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A3_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A3_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A3_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A3_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A3_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A3_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A3_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A3_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A3_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A3_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A3_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A3_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A3_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A3_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A3_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A3_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A3_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A3S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A3S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A3S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A3S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A3S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A3S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A3S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A3S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A3S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A3S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A3S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A3S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A3S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A3S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A3S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A3S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A3S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A3S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A3S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A3S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A2_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A2_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A2_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A2_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A2_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A2_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A2_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A2_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A2_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A2_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A2_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A2_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A2_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A2_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A2_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A2_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A2_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A2_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A2_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A2_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A2_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A2_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A2_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A2_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A2S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A2S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A2S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A2S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A2S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A2S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A2S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A2S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A2S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A2S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A2S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A2S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A2S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A2S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A2S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A2S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A2S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A2S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A2S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A2S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A1_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A1_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A1_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A1_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A1_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A1_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A1_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A1_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A1_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A1_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A1_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A1_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A1_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A1_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A1_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A1_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A1_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A1_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A1_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A1_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5A1_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5A1_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5A1S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A1S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A1S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A1S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A1S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A1S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A1S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A1S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A1S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A1S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A1S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A1S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A1S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A1S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A1S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A1S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A1S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A1S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5A1S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5A1S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5At_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5At_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5At_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5At_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5At_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5At_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5At_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5At_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5At_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5At_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5At_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5At_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5At_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5At_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5At_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5At_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5At_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5At_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5At_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5At_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5At_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5At_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5At_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5At_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5At_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5At_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5At_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5At_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5At_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5At_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5At_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5At_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA5At_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA5At_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA5AtS_BytesSent_2429(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5AtS_BytesSent_2429, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5AtS_BytesReceived_2430(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5AtS_BytesReceived_2430, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5AtS_PacketsSent_2431(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5AtS_PacketsSent_2431, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5AtS_PacketsReceived_2432(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5AtS_PacketsReceived_2432, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5AtS_ErrorsSent_2433(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5AtS_ErrorsSent_2433, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5AtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5AtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5AtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5AtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5AtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5AtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5AtS_RetransCount_2437(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5AtS_RetransCount_2437, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA5AtS_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA5AtS_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4_SSIDReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4_SSIDReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4_RetryLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4_WMMCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4_WMMCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4_WMMCapability_2449(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4_WMMCapability_2449, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4_UAPSDCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4_UAPSDCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4_WMMEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4_WMMEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4_UAPSDEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4_UAPSDEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4_MaxAssociatedDevices, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4_MaxAssociatedDevices, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4_IsolationEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4_IsolationEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4_MACAddressControlEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4_MACAddressControlEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4_AllowedMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4_AllowedMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4S_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4S_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4S_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4S_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4S_ModesSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4S_ModesSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4S_ModeEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4S_ModeEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4S_WEPKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4S_WEPKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4S_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4S_PreSharedKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4S_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4S_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4S_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4S_RekeyingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4S_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4S_RekeyingInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4S_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4S_RadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4S_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4S_RadiusServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4S_SecondaryRadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4S_SecondaryRadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4S_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4S_RadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4S_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4S_RadiusServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4S_SecondaryRadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4S_SecondaryRadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4S_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4S_RadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4S_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4S_RadiusSecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4S_SecondaryRadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4S_SecondaryRadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A_ServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A_ServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A_SecondaryServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A_SecondaryServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A_ServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A_ServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A_SecondaryServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A_SecondaryServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A_Secret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A_Secret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A_SecondarySecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A_SecondarySecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A_InterimInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A_InterimInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4W_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4W_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4W_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4W_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4W_ConfigMethodsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4W_ConfigMethodsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4W_ConfigMethodsEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4W_ConfigMethodsEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4At_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4At_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4At_AuthenticationState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4At_AuthenticationState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4At_LastDataDownlinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4At_LastDataDownlinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4At_LastDataUplinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4At_LastDataUplinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4At_SignalStrength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4At_SignalStrength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4At_Retransmissions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4At_Retransmissions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4At_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4At_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4AtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4AtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4AtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4AtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4AtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4AtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4AtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4AtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4AtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4AtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4AtS_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4AtS_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4AtS_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4AtS_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4AtS_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4AtS_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4AtS_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4AtS_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A4_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A4_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A4_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A4_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A4_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A4_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A4_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A4_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A4_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A4_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A4_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A4_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A4_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A4_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A4_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A4_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A4_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A4_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A4_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A4_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A4_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A4_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A4_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A4_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A4S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A4S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A4S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A4S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A4S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A4S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A4S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A4S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A4S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A4S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A4S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A4S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A4S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A4S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A4S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A4S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A4S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A4S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A4S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A4S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A3_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A3_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A3_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A3_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A3_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A3_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A3_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A3_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A3_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A3_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A3_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A3_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A3_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A3_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A3_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A3_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A3_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A3_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A3_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A3_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A3_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A3_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A3_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A3_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A3S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A3S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A3S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A3S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A3S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A3S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A3S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A3S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A3S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A3S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A3S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A3S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A3S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A3S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A3S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A3S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A3S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A3S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A3S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A3S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A2_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A2_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A2_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A2_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A2_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A2_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A2_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A2_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A2_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A2_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A2_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A2_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A2_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A2_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A2_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A2_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A2_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A2_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A2_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A2_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A2_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A2_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A2_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A2_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A2S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A2S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A2S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A2S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A2S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A2S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A2S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A2S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A2S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A2S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A2S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A2S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A2S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A2S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A2S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A2S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A2S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A2S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A2S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A2S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A1_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A1_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A1_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A1_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A1_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A1_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A1_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A1_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A1_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A1_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A1_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A1_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A1_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A1_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A1_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A1_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A1_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A1_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A1_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A1_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4A1_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4A1_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4A1S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A1S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A1S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A1S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A1S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A1S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A1S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A1S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A1S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A1S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A1S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A1S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A1S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A1S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A1S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A1S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A1S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A1S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4A1S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4A1S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4At_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4At_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4At_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4At_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4At_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4At_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4At_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4At_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4At_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4At_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4At_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4At_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4At_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4At_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4At_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4At_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4At_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4At_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4At_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4At_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4At_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4At_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4At_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4At_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4At_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4At_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4At_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4At_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4At_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4At_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4At_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4At_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA4At_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA4At_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA4AtS_BytesSent_2646(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4AtS_BytesSent_2646, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4AtS_BytesReceived_2647(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4AtS_BytesReceived_2647, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4AtS_PacketsSent_2648(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4AtS_PacketsSent_2648, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4AtS_PacketsReceived_2649(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4AtS_PacketsReceived_2649, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4AtS_ErrorsSent_2650(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4AtS_ErrorsSent_2650, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4AtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4AtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4AtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4AtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4AtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4AtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4AtS_RetransCount_2654(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4AtS_RetransCount_2654, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA4AtS_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA4AtS_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3_SSIDReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3_SSIDReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3_RetryLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3_WMMCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3_WMMCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3_WMMCapability_2666(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3_WMMCapability_2666, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3_UAPSDCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3_UAPSDCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3_WMMEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3_WMMEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3_UAPSDEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3_UAPSDEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3_MaxAssociatedDevices, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3_MaxAssociatedDevices, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3_IsolationEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3_IsolationEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3_MACAddressControlEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3_MACAddressControlEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3_AllowedMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3_AllowedMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3S_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3S_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3S_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3S_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3S_ModesSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3S_ModesSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3S_ModeEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3S_ModeEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3S_WEPKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3S_WEPKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3S_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3S_PreSharedKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3S_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3S_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3S_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3S_RekeyingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3S_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3S_RekeyingInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3S_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3S_RadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3S_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3S_RadiusServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3S_SecondaryRadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3S_SecondaryRadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3S_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3S_RadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3S_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3S_RadiusServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3S_SecondaryRadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3S_SecondaryRadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3S_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3S_RadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3S_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3S_RadiusSecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3S_SecondaryRadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3S_SecondaryRadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A_ServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A_ServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A_SecondaryServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A_SecondaryServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A_ServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A_ServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A_SecondaryServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A_SecondaryServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A_Secret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A_Secret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A_SecondarySecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A_SecondarySecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A_InterimInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A_InterimInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3W_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3W_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3W_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3W_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3W_ConfigMethodsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3W_ConfigMethodsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3W_ConfigMethodsEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3W_ConfigMethodsEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3At_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3At_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3At_AuthenticationState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3At_AuthenticationState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3At_LastDataDownlinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3At_LastDataDownlinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3At_LastDataUplinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3At_LastDataUplinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3At_SignalStrength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3At_SignalStrength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3At_Retransmissions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3At_Retransmissions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3At_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3At_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3AtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3AtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3AtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3AtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3AtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3AtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3AtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3AtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3AtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3AtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3AtS_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3AtS_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3AtS_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3AtS_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3AtS_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3AtS_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3AtS_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3AtS_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A4_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A4_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A4_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A4_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A4_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A4_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A4_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A4_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A4_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A4_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A4_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A4_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A4_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A4_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A4_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A4_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A4_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A4_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A4_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A4_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A4_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A4_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A4_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A4_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A4S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A4S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A4S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A4S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A4S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A4S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A4S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A4S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A4S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A4S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A4S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A4S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A4S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A4S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A4S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A4S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A4S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A4S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A4S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A4S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A3_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A3_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A3_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A3_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A3_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A3_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A3_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A3_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A3_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A3_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A3_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A3_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A3_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A3_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A3_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A3_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A3_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A3_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A3_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A3_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A3_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A3_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A3_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A3_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A3S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A3S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A3S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A3S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A3S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A3S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A3S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A3S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A3S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A3S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A3S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A3S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A3S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A3S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A3S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A3S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A3S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A3S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A3S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A3S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A2_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A2_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A2_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A2_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A2_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A2_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A2_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A2_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A2_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A2_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A2_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A2_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A2_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A2_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A2_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A2_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A2_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A2_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A2_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A2_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A2_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A2_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A2_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A2_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A2S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A2S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A2S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A2S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A2S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A2S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A2S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A2S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A2S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A2S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A2S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A2S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A2S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A2S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A2S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A2S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A2S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A2S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A2S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A2S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A1_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A1_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A1_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A1_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A1_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A1_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A1_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A1_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A1_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A1_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A1_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A1_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A1_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A1_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A1_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A1_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A1_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A1_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A1_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A1_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3A1_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3A1_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3A1S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A1S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A1S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A1S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A1S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A1S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A1S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A1S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A1S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A1S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A1S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A1S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A1S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A1S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A1S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A1S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A1S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A1S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3A1S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3A1S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3At_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3At_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3At_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3At_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3At_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3At_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3At_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3At_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3At_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3At_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3At_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3At_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3At_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3At_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3At_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3At_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3At_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3At_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3At_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3At_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3At_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3At_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3At_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3At_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3At_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3At_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3At_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3At_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3At_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3At_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3At_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3At_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA3At_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA3At_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA3AtS_BytesSent_2863(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3AtS_BytesSent_2863, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3AtS_BytesReceived_2864(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3AtS_BytesReceived_2864, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3AtS_PacketsSent_2865(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3AtS_PacketsSent_2865, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3AtS_PacketsReceived_2866(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3AtS_PacketsReceived_2866, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3AtS_ErrorsSent_2867(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3AtS_ErrorsSent_2867, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3AtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3AtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3AtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3AtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3AtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3AtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3AtS_RetransCount_2871(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3AtS_RetransCount_2871, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA3AtS_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA3AtS_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2_SSIDReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2_SSIDReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2_RetryLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2_WMMCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2_WMMCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2_WMMCapability_2883(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2_WMMCapability_2883, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2_UAPSDCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2_UAPSDCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2_WMMEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2_WMMEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2_UAPSDEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2_UAPSDEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2_MaxAssociatedDevices, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2_MaxAssociatedDevices, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2_IsolationEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2_IsolationEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2_MACAddressControlEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2_MACAddressControlEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2_AllowedMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2_AllowedMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2S_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2S_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2S_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2S_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2S_ModesSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2S_ModesSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2S_ModeEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2S_ModeEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2S_WEPKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2S_WEPKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2S_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2S_PreSharedKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2S_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2S_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2S_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2S_RekeyingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2S_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2S_RekeyingInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2S_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2S_RadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2S_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2S_RadiusServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2S_SecondaryRadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2S_SecondaryRadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2S_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2S_RadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2S_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2S_RadiusServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2S_SecondaryRadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2S_SecondaryRadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2S_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2S_RadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2S_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2S_RadiusSecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2S_SecondaryRadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2S_SecondaryRadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A_ServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A_ServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A_SecondaryServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A_SecondaryServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A_ServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A_ServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A_SecondaryServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A_SecondaryServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A_Secret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A_Secret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A_SecondarySecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A_SecondarySecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A_InterimInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A_InterimInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2W_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2W_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2W_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2W_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2W_ConfigMethodsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2W_ConfigMethodsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2W_ConfigMethodsEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2W_ConfigMethodsEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2At_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2At_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2At_AuthenticationState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2At_AuthenticationState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2At_LastDataDownlinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2At_LastDataDownlinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2At_LastDataUplinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2At_LastDataUplinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2At_SignalStrength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2At_SignalStrength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2At_Retransmissions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2At_Retransmissions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2At_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2At_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2AtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2AtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2AtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2AtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2AtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2AtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2AtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2AtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2AtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2AtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2AtS_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2AtS_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2AtS_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2AtS_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2AtS_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2AtS_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2AtS_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2AtS_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A4_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A4_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A4_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A4_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A4_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A4_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A4_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A4_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A4_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A4_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A4_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A4_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A4_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A4_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A4_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A4_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A4_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A4_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A4_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A4_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A4_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A4_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A4_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A4_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A4S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A4S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A4S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A4S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A4S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A4S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A4S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A4S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A4S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A4S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A4S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A4S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A4S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A4S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A4S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A4S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A4S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A4S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A4S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A4S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A3_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A3_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A3_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A3_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A3_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A3_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A3_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A3_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A3_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A3_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A3_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A3_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A3_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A3_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A3_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A3_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A3_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A3_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A3_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A3_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A3_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A3_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A3_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A3_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A3S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A3S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A3S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A3S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A3S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A3S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A3S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A3S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A3S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A3S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A3S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A3S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A3S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A3S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A3S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A3S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A3S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A3S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A3S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A3S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A2_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A2_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A2_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A2_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A2_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A2_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A2_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A2_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A2_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A2_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A2_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A2_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A2_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A2_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A2_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A2_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A2_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A2_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A2_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A2_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A2_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A2_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A2_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A2_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A2S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A2S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A2S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A2S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A2S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A2S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A2S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A2S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A2S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A2S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A2S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A2S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A2S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A2S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A2S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A2S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A2S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A2S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A2S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A2S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A1_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A1_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A1_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A1_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A1_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A1_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A1_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A1_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A1_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A1_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A1_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A1_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A1_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A1_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A1_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A1_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A1_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A1_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A1_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A1_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2A1_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2A1_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2A1S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A1S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A1S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A1S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A1S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A1S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A1S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A1S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A1S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A1S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A1S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A1S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A1S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A1S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A1S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A1S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A1S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A1S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2A1S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2A1S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2At_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2At_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2At_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2At_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2At_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2At_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2At_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2At_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2At_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2At_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2At_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2At_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2At_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2At_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2At_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2At_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2At_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2At_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2At_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2At_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2At_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2At_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2At_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2At_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2At_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2At_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2At_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2At_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2At_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2At_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2At_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2At_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA2At_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA2At_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA2AtS_BytesSent_3080(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2AtS_BytesSent_3080, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2AtS_BytesReceived_3081(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2AtS_BytesReceived_3081, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2AtS_PacketsSent_3082(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2AtS_PacketsSent_3082, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2AtS_PacketsReceived_3083(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2AtS_PacketsReceived_3083, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2AtS_ErrorsSent_3084(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2AtS_ErrorsSent_3084, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2AtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2AtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2AtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2AtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2AtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2AtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2AtS_RetransCount_3088(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2AtS_RetransCount_3088, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA2AtS_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA2AtS_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1_SSIDReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1_SSIDReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1_RetryLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1_WMMCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1_WMMCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1_WMMCapability_3100(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1_WMMCapability_3100, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1_UAPSDCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1_UAPSDCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1_WMMEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1_WMMEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1_UAPSDEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1_UAPSDEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1_MaxAssociatedDevices, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1_MaxAssociatedDevices, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1_IsolationEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1_IsolationEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1_MACAddressControlEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1_MACAddressControlEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1_AllowedMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1_AllowedMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1S_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1S_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1S_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1S_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1S_ModesSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1S_ModesSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1S_ModeEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1S_ModeEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1S_WEPKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1S_WEPKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1S_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1S_PreSharedKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1S_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1S_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1S_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1S_RekeyingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1S_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1S_RekeyingInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1S_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1S_RadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1S_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1S_RadiusServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1S_SecondaryRadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1S_SecondaryRadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1S_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1S_RadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1S_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1S_RadiusServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1S_SecondaryRadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1S_SecondaryRadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1S_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1S_RadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1S_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1S_RadiusSecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1S_SecondaryRadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1S_SecondaryRadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A_ServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A_ServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A_SecondaryServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A_SecondaryServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A_ServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A_ServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A_SecondaryServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A_SecondaryServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A_Secret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A_Secret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A_SecondarySecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A_SecondarySecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A_InterimInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A_InterimInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1W_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1W_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1W_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1W_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1W_ConfigMethodsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1W_ConfigMethodsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1W_ConfigMethodsEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1W_ConfigMethodsEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1At_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1At_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1At_AuthenticationState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1At_AuthenticationState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1At_LastDataDownlinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1At_LastDataDownlinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1At_LastDataUplinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1At_LastDataUplinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1At_SignalStrength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1At_SignalStrength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1At_Retransmissions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1At_Retransmissions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1At_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1At_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1AtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1AtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1AtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1AtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1AtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1AtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1AtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1AtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1AtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1AtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1AtS_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1AtS_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1AtS_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1AtS_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1AtS_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1AtS_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1AtS_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1AtS_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A4_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A4_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A4_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A4_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A4_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A4_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A4_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A4_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A4_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A4_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A4_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A4_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A4_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A4_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A4_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A4_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A4_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A4_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A4_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A4_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A4_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A4_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A4_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A4_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A4_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A4_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A4_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A4_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A4_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A4S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A4S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A4S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A4S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A4S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A4S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A4S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A4S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A4S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A4S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A4S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A4S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A4S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A4S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A4S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A4S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A4S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A4S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A4S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A4S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A3_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A3_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A3_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A3_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A3_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A3_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A3_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A3_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A3_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A3_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A3_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A3_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A3_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A3_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A3_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A3_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A3_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A3_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A3_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A3_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A3_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A3_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A3_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A3_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A3_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A3_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A3_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A3_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A3_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A3S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A3S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A3S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A3S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A3S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A3S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A3S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A3S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A3S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A3S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A3S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A3S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A3S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A3S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A3S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A3S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A3S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A3S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A3S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A3S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A2_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A2_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A2_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A2_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A2_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A2_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A2_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A2_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A2_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A2_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A2_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A2_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A2_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A2_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A2_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A2_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A2_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A2_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A2_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A2_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A2_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A2_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A2_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A2_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A2_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A2_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A2_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A2_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A2S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A2S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A2S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A2S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A2S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A2S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A2S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A2S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A2S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A2S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A2S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A2S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A2S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A2S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A2S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A2S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A2S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A2S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A2S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A2S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A1_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A1_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A1_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A1_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A1_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A1_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A1_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A1_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A1_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A1_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A1_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A1_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A1_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A1_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A1_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A1_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A1_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A1_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A1_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A1_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A1_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A1_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A1_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A1_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1A1_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1A1_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1A1S_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A1S_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A1S_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A1S_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A1S_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A1S_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A1S_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A1S_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A1S_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A1S_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A1S_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A1S_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A1S_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A1S_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A1S_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A1S_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A1S_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A1S_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1A1S_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1A1S_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1At_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1At_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1At_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1At_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1At_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1At_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1At_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1At_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1At_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1At_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1At_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1At_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1At_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1At_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1At_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1At_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1At_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1At_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1At_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1At_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1At_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1At_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1At_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1At_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1At_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1At_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1At_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1At_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1At_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1At_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1At_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1At_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWA1At_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWA1At_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWA1AtS_BytesSent_3297(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1AtS_BytesSent_3297, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1AtS_BytesReceived_3298(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1AtS_BytesReceived_3298, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1AtS_PacketsSent_3299(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1AtS_PacketsSent_3299, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1AtS_PacketsReceived_3300(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1AtS_PacketsReceived_3300, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1AtS_ErrorsSent_3301(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1AtS_ErrorsSent_3301, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1AtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1AtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1AtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1AtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1AtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1AtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1AtS_RetransCount_3305(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1AtS_RetransCount_3305, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWA1AtS_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWA1AtS_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_SSIDReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_SSIDReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_SSIDReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_SSIDReference, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_SSIDAdvertisementEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_SSIDAdvertisementEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_RetryLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_RetryLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_RetryLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_WMMCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_WMMCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAt_WMMCapability_3319(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_WMMCapability_3319, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAt_UAPSDCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_UAPSDCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAt_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_WMMEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_WMMEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_WMMEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_UAPSDEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_UAPSDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_UAPSDEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAt_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_MaxAssociatedDevices, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_MaxAssociatedDevices(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_MaxAssociatedDevices, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_IsolationEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_IsolationEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_IsolationEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_MACAddressControlEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_MACAddressControlEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_MACAddressControlEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAt_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_AllowedMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAt_AllowedMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAt_AllowedMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtS_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtS_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtS_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtS_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtS_ModesSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtS_ModesSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtS_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtS_ModeEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtS_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtS_ModeEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtS_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtS_WEPKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtS_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtS_WEPKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtS_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtS_PreSharedKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtS_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtS_PreSharedKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtS_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtS_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtS_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtS_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtS_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtS_RekeyingInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtS_RekeyingInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtS_RekeyingInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtS_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtS_RadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtS_RadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtS_RadiusServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtS_SecondaryRadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtS_SecondaryRadiusServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtS_SecondaryRadiusServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtS_SecondaryRadiusServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtS_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtS_RadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtS_RadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtS_RadiusServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtS_SecondaryRadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtS_SecondaryRadiusServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtS_SecondaryRadiusServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtS_SecondaryRadiusServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtS_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtS_RadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtS_RadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtS_RadiusSecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtS_SecondaryRadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtS_SecondaryRadiusSecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtS_SecondaryRadiusSecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtS_SecondaryRadiusSecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtA_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtA_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtA_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtA_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtA_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtA_ServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtA_ServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtA_ServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtA_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtA_SecondaryServerIPAddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtA_SecondaryServerIPAddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtA_SecondaryServerIPAddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtA_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtA_ServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtA_ServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtA_ServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtA_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtA_SecondaryServerPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtA_SecondaryServerPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtA_SecondaryServerPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtA_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtA_Secret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtA_Secret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtA_Secret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtA_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtA_SecondarySecret, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtA_SecondarySecret(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtA_SecondarySecret, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtA_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtA_InterimInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtA_InterimInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtA_InterimInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtW_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtW_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtW_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtW_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtW_ConfigMethodsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtW_ConfigMethodsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtW_ConfigMethodsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtW_ConfigMethodsSupported, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtW_ConfigMethodsEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtW_ConfigMethodsEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtW_ConfigMethodsEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtW_ConfigMethodsEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtAt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAt_AuthenticationState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAt_AuthenticationState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAt_LastDataDownlinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAt_LastDataDownlinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAt_LastDataUplinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAt_LastDataUplinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAt_SignalStrength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAt_SignalStrength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAt_Retransmissions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAt_Retransmissions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAt_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAt_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_FailedRetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_FailedRetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_RetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_RetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_MultipleRetryCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_MultipleRetryCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAt_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAt_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtAt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtAt_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAt_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtAt_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtAt_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtAt_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAt_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtAt_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtAt_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtAt_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAt_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtAt_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtAt_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtAt_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAt_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtAt_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtAt_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtAt_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAt_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtAt_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtAt_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtAt_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAt_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtAt_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtAt_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtAt_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAt_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWAtAt_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWAtAt_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWAtAtS_BytesSent_3414(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_BytesSent_3414, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_BytesReceived_3415(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_BytesReceived_3415, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_PacketsSent_3416(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_PacketsSent_3416, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_PacketsReceived_3417(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_PacketsReceived_3417, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_ErrorsSent_3418(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_ErrorsSent_3418, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_RetransCount_3422(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_RetransCount_3422, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1_ProfileReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1_ProfileReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1_SSIDReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1_SSIDReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1_ProfileNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1_ProfileNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1S_LastDataDownlinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1S_LastDataDownlinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1S_LastDataUplinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1S_LastDataUplinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1S_SignalStrength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1S_SignalStrength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1S_Retransmissions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1S_Retransmissions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1S_ModesSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1S_ModesSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1P2_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P2_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1P2_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P2_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1P2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P2_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1P2_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1P2_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1P2_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P2_SSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1P2_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1P2_SSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1P2_Location(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P2_Location, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1P2_Location(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1P2_Location, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1P2_Priority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P2_Priority, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1P2S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P2S_ModeEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1P2S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1P2S_ModeEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1P2S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P2S_WEPKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1P2S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1P2S_WEPKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1P2S_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P2S_PreSharedKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1P2S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P2S_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1P2S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1P2S_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1P1_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P1_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1P1_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P1_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1P1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1P1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1P1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1P1_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P1_SSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1P1_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1P1_SSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1P1_Location(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P1_Location, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1P1_Location(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1P1_Location, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1P1_Priority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P1_Priority, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1P1S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P1S_ModeEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1P1S_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1P1S_ModeEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1P1S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P1S_WEPKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1P1S_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1P1S_WEPKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1P1S_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P1S_PreSharedKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1P1S_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1P1S_PreSharedKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1P1S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1P1S_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1P1S_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1P1S_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1Pt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1Pt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1Pt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1Pt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1Pt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1Pt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1Pt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1Pt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1Pt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1Pt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1Pt_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1Pt_SSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1Pt_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1Pt_SSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1Pt_Location(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1Pt_Location, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1Pt_Location(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1Pt_Location, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1Pt_Priority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1Pt_Priority, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1Pt_Priority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1Pt_Priority, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1PtS_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1PtS_ModeEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1PtS_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1PtS_ModeEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1PtS_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1PtS_WEPKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1PtS_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1PtS_WEPKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1PtS_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1PtS_PreSharedKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1PtS_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1PtS_PreSharedKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1PtS_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1PtS_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1PtS_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1PtS_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1W_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1W_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1W_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1W_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1W_ConfigMethodsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1W_ConfigMethodsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1W_ConfigMethodsEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1W_ConfigMethodsEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1At_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1At_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1At_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1At_AccessCategory, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1At_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1At_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1At_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1At_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1At_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1At_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1At_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1At_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1At_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1At_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1At_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1At_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1At_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1At_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1At_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1At_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1At_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1At_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1At_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1At_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1At_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1At_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1At_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1At_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1At_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1At_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1At_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1At_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1At_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1At_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWE1At_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWE1At_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWE1AtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1AtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1AtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1AtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1AtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1AtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1AtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1AtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1AtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1AtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1AtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1AtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1AtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1AtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1AtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1AtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1AtS_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1AtS_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWE1AtS_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWE1AtS_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEt_ProfileReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEt_ProfileReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEt_ProfileReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEt_ProfileReference, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEt_SSIDReference(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEt_SSIDReference, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEt_ProfileNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEt_ProfileNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEtS_LastDataDownlinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtS_LastDataDownlinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEtS_LastDataUplinkRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtS_LastDataUplinkRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEtS_SignalStrength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtS_SignalStrength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEtS_Retransmissions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtS_Retransmissions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEtS_ModesSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtS_ModesSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtS_ModesSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtS_ModesSupported, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtPt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtPt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtPt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtPt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEtPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtPt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtPt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtPt_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtPt_SSID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtPt_SSID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtPt_SSID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtPt_Location(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtPt_Location, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtPt_Location(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtPt_Location, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtPt_Priority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtPt_Priority, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtPt_Priority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtPt_Priority, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtPtS_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtPtS_ModeEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtPtS_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtPtS_ModeEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtPtS_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtPtS_WEPKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtPtS_WEPKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtPtS_WEPKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtPtS_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtPtS_PreSharedKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtPtS_PreSharedKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtPtS_PreSharedKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtPtS_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtPtS_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtPtS_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtPtS_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtW_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtW_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtW_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtW_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtW_ConfigMethodsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtW_ConfigMethodsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEtW_ConfigMethodsEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtW_ConfigMethodsEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtW_ConfigMethodsEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtW_ConfigMethodsEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtAt_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtAt_AccessCategory, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtAt_AccessCategory(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtAt_AccessCategory, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtAt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtAt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtAt_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtAt_AIFSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtAt_AIFSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtAt_AIFSN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtAt_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtAt_ECWMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtAt_ECWMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtAt_ECWMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtAt_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtAt_ECWMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtAt_ECWMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtAt_ECWMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtAt_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtAt_TxOpMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtAt_TxOpMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtAt_TxOpMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtAt_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtAt_AckPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtAt_AckPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtAt_AckPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtAt_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtAt_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtAt_OutQLenHistogramIntervals(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtAt_OutQLenHistogramIntervals, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtAt_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtAt_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DWEtAt_OutQLenHistogramSampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DWEtAt_OutQLenHistogramSampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DWEtAtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtAtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEtAtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtAtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEtAtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtAtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEtAtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtAtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEtAtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtAtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEtAtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtAtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEtAtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtAtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEtAtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtAtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEtAtS_RetransCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtAtS_RetransCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWEtAtS_OutQLenHistogram(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWEtAtS_OutQLenHistogram, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DB_MaxBridgeEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DB_MaxBridgeEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DB_MaxDBridgeEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DB_MaxDBridgeEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DB_MaxQBridgeEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DB_MaxQBridgeEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DB_MaxVLANEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DB_MaxVLANEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DB_MaxProviderBridgeEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DB_MaxProviderBridgeEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DB_ProviderBridgeNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DB_ProviderBridgeNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DB_MaxFilterEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DB_MaxFilterEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DB_BridgeNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DB_BridgeNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DB_FilterNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DB_FilterNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBB1_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBB1_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBB1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBB1_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBB1_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBB1_Standard(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1_Standard, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBB1_PortNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1_PortNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBB1_VLANNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1_VLANNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBB1_VLANPortNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1_VLANPortNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBB1Pt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1Pt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBB1Pt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1Pt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBB1Pt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1Pt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBB1Pt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBB1Pt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBB1Pt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1Pt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBB1Pt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1Pt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBB1Pt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1Pt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBB1Pt_ManagementPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1Pt_ManagementPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBB1Pt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1Pt_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBB1Pt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBB1Pt_Type, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBB1Pt_DefaultUserPriority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1Pt_DefaultUserPriority, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBB1Pt_DefaultUserPriority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBB1Pt_DefaultUserPriority, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBB1Pt_PriorityRegeneration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1Pt_PriorityRegeneration, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBB1Pt_PriorityRegeneration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBB1Pt_PriorityRegeneration, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBB1Pt_PortState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1Pt_PortState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBB1Pt_PVID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1Pt_PVID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBB1Pt_PVID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBB1Pt_PVID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBB1Pt_TPID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1Pt_TPID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBB1Pt_TPID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBB1Pt_TPID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBB1Pt_AcceptableFrameTypes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1Pt_AcceptableFrameTypes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBB1Pt_AcceptableFrameTypes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBB1Pt_AcceptableFrameTypes, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBB1Pt_IngressFiltering(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1Pt_IngressFiltering, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBB1Pt_IngressFiltering(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBB1Pt_IngressFiltering, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBB1Pt_ServiceAccessPrioritySelection(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1Pt_ServiceAccessPrioritySelection, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBB1Pt_ServiceAccessPrioritySelection(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBB1Pt_ServiceAccessPrioritySelection, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBB1Pt_ServiceAccessPriorityTranslation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1Pt_ServiceAccessPriorityTranslation, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBB1Pt_ServiceAccessPriorityTranslation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBB1Pt_ServiceAccessPriorityTranslation, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBB1Pt_PriorityTagging(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1Pt_PriorityTagging, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBB1Pt_PriorityTagging(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBB1Pt_PriorityTagging, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBB1PtP_PCPSelection(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1PtP_PCPSelection, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBB1PtP_PCPSelection(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBB1PtP_PCPSelection, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBB1PtP_UseDEI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1PtP_UseDEI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBB1PtP_UseDEI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBB1PtP_UseDEI, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBB1PtP_RequireDropEncoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1PtP_RequireDropEncoding, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBB1PtP_RequireDropEncoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBB1PtP_RequireDropEncoding, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBB1PtP_PCPEncoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1PtP_PCPEncoding, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBB1PtP_PCPEncoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBB1PtP_PCPEncoding, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBB1PtP_PCPDecoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1PtP_PCPDecoding, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBB1PtP_PCPDecoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBB1PtP_PCPDecoding, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBB1PtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBB1PtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	return ret;
}
{
	if(ret)
	{