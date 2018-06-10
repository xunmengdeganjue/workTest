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
int get_DDT_ProcessNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDT_ProcessNumberOfEntries, value);
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
int get_DDVt_Alias_75(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_Alias_75, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDVt_Alias_75(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDVt_Alias_75, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDVt_Name_77(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDVt_Name_77, value);
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
int set_DM_ConnReqXMPPConnection(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_ConnReqXMPPConnection, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
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
int set_DM_ConnReqAllowedJabberIDs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_ConnReqAllowedJabberIDs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
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
int set_DM_HTTPCompression(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_HTTPCompression, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
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
int set_DM_LightweightNotificationProtocolsUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_LightweightNotificationProtocolsUsed, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
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
int set_DM_UDPLightweightNotificationHost(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_UDPLightweightNotificationHost, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
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
int set_DM_UDPLightweightNotificationPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DM_UDPLightweightNotificationPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
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
int get_DMA_Enable_177(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMA_Enable_177, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMA_Enable_177(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMA_Enable_177, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
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
int set_DT_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DT_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
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
int set_DU_PasswordRequired(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_PasswordRequired, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
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
int set_DU_UpgradeAvailable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_UpgradeAvailable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
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
int set_DU_AvailableLanguages(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DU_AvailableLanguages, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
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
int get_DD_LineNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_LineNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_ChannelNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_ChannelNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_BondingGroupNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_BondingGroupNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLt_EnableDataGathering(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_EnableDataGathering, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLt_EnableDataGathering(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLt_EnableDataGathering, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLt_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_FirmwareVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_FirmwareVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_LinkStatus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_LinkStatus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_StandardsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_StandardsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTSE(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTSE, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_StandardUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_StandardUsed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTSUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTSUsed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_LineEncoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_LineEncoding, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_AllowedProfiles(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_AllowedProfiles, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_CurrentProfile(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_CurrentProfile, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_PowerManagementState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_PowerManagementState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_SuccessFailureCause(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_SuccessFailureCause, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_UPBOKLER(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_UPBOKLER, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_UPBOKLEPb(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_UPBOKLEPb, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_UPBOKLERPb(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_UPBOKLERPb, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_RXTHRSHds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_RXTHRSHds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_ACTRAMODEds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_ACTRAMODEds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_ACTRAMODEus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_ACTRAMODEus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_ACTINPROCds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_ACTINPROCds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_ACTINPROCus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_ACTINPROCus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_SNRMROCds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_SNRMROCds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_SNRMROCus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_SNRMROCus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_LastStateTransmittedDownstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_LastStateTransmittedDownstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_LastStateTransmittedUpstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_LastStateTransmittedUpstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_UPBOKLE(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_UPBOKLE, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_MREFPSDds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_MREFPSDds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_MREFPSDus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_MREFPSDus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_LIMITMASK(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_LIMITMASK, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_US0MASK(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_US0MASK, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_TRELLISds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_TRELLISds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_TRELLISus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_TRELLISus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_ACTSNRMODEds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_ACTSNRMODEds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_ACTSNRMODEus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_ACTSNRMODEus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_VirtualNoisePSDds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_VirtualNoisePSDds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_VirtualNoisePSDus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_VirtualNoisePSDus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_ACTUALCE(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_ACTUALCE, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_LineNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_LineNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_UpstreamMaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_UpstreamMaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_DownstreamMaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_DownstreamMaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_UpstreamNoiseMargin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_UpstreamNoiseMargin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_DownstreamNoiseMargin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_DownstreamNoiseMargin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_SNRMpbus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_SNRMpbus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_SNRMpbds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_SNRMpbds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_INMIATOds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_INMIATOds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_INMIATSds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_INMIATSds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_INMCCds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_INMCCds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_INMINPEQMODEds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_INMINPEQMODEds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_UpstreamAttenuation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_UpstreamAttenuation, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_DownstreamAttenuation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_DownstreamAttenuation, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_UpstreamPower(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_UpstreamPower, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_DownstreamPower(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_DownstreamPower, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTURVendor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTURVendor, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTURCountry(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTURCountry, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTURANSIStd(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTURANSIStd, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTURANSIRev(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTURANSIRev, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTUCVendor(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTUCVendor, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTUCCountry(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTUCCountry, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTUCANSIStd(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTUCANSIStd, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLt_XTUCANSIRev(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLt_XTUCANSIRev, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDLtD_LoggingDepthR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtD_LoggingDepthR, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtD_LoggingDepthR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtD_LoggingDepthR, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtD_ActLoggingDepthReportingR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtD_ActLoggingDepthReportingR, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtD_ActLoggingDepthReportingR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtD_ActLoggingDepthReportingR, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtD_EventTraceBufferR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtD_EventTraceBufferR, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtD_EventTraceBufferR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtD_EventTraceBufferR, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtS_BytesSent, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtS_BytesReceived, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtS_PacketsSent, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtS_PacketsReceived, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtS_ErrorsSent, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtS_ErrorsReceived, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtS_DiscardPacketsSent, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtS_TotalStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtS_TotalStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtS_TotalStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtS_TotalStart, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtS_ShowtimeStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtS_ShowtimeStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtS_ShowtimeStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtS_ShowtimeStart, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtS_LastShowtimeStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtS_LastShowtimeStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtS_LastShowtimeStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtS_LastShowtimeStart, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtS_CurrentDayStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtS_CurrentDayStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtS_CurrentDayStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtS_CurrentDayStart, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtS_QuarterHourStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtS_QuarterHourStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtS_QuarterHourStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtS_QuarterHourStart, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtST_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtST_ErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtST_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtST_ErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtST_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtST_SeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtST_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtST_SeverelyErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtSS_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtSS_ErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtSS_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtSS_ErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtSS_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtSS_SeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtSS_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtSS_SeverelyErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtSL_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtSL_ErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtSL_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtSL_ErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtSL_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtSL_SeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtSL_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtSL_SeverelyErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtSC_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtSC_ErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtSC_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtSC_ErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtSC_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtSC_SeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtSC_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtSC_SeverelyErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtSQ_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtSQ_ErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtSQ_ErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtSQ_ErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtSQ_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtSQ_SeverelyErroredSecs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtSQ_SeverelyErroredSecs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtSQ_SeverelyErroredSecs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_HLOGGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_HLOGGds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_HLOGGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_HLOGGds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_HLOGGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_HLOGGus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_HLOGGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_HLOGGus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_HLOGpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_HLOGpsds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_HLOGpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_HLOGpsds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_HLOGpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_HLOGpsus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_HLOGpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_HLOGpsus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_HLOGMTds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_HLOGMTds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_HLOGMTds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_HLOGMTds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_HLOGMTus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_HLOGMTus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_HLOGMTus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_HLOGMTus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_QLNGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_QLNGds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_QLNGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_QLNGds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_QLNGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_QLNGus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_QLNGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_QLNGus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_QLNpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_QLNpsds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_QLNpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_QLNpsds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_QLNpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_QLNpsus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_QLNpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_QLNpsus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_QLNMTds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_QLNMTds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_QLNMTds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_QLNMTds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_QLNMTus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_QLNMTus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_QLNMTus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_QLNMTus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_SNRGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_SNRGds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_SNRGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_SNRGds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_SNRGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_SNRGus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_SNRGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_SNRGus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_SNRpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_SNRpsds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_SNRpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_SNRpsds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_SNRpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_SNRpsus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_SNRpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_SNRpsus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_SNRMTds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_SNRMTds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_SNRMTds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_SNRMTds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_SNRMTus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_SNRMTus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_SNRMTus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_SNRMTus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_LATNds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_LATNds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_LATNds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_LATNds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_LATNus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_LATNus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_LATNus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_LATNus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_SATNds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_SATNds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_SATNds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_SATNds, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDLtT_SATNus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDLtT_SATNus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDLtT_SATNus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDLtT_SATNus, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_LinkEncapsulationSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_LinkEncapsulationSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_LinkEncapsulationUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_LinkEncapsulationUsed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_LPATH(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_LPATH, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_INTLVDEPTH(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_INTLVDEPTH, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_INTLVBLOCK(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_INTLVBLOCK, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_ActualInterleavingDelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_ActualInterleavingDelay, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_ACTINP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_ACTINP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_INPREPORT(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_INPREPORT, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_NFEC(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_NFEC, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_RFEC(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_RFEC, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_LSYMB(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_LSYMB, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_UpstreamCurrRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_UpstreamCurrRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_DownstreamCurrRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_DownstreamCurrRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_ACTNDR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_ACTNDR, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_ACTINPREIN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_ACTINPREIN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtS_TotalStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtS_TotalStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtS_ShowtimeStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtS_ShowtimeStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtS_LastShowtimeStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtS_LastShowtimeStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtS_CurrentDayStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtS_CurrentDayStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtS_QuarterHourStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtS_QuarterHourStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtST_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtST_XTURFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtST_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtST_XTURFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtST_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtST_XTUCFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtST_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtST_XTUCFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtST_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtST_XTURHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtST_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtST_XTURHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtST_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtST_XTUCHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtST_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtST_XTUCHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtST_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtST_XTURCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtST_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtST_XTURCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtST_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtST_XTUCCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtST_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtST_XTUCCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSS_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSS_XTURFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSS_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSS_XTURFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSS_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSS_XTUCFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSS_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSS_XTUCFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSS_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSS_XTURHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSS_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSS_XTURHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSS_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSS_XTUCHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSS_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSS_XTUCHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSS_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSS_XTURCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSS_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSS_XTURCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSS_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSS_XTUCCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSS_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSS_XTUCCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSL_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSL_XTURFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSL_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSL_XTURFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSL_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSL_XTUCFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSL_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSL_XTUCFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSL_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSL_XTURHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSL_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSL_XTURHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSL_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSL_XTUCHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSL_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSL_XTUCHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSL_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSL_XTURCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSL_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSL_XTURCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSL_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSL_XTUCCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSL_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSL_XTUCCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSC_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSC_XTURFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSC_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSC_XTURFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSC_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSC_XTUCFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSC_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSC_XTUCFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSC_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSC_XTURHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSC_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSC_XTURHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSC_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSC_XTUCHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSC_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSC_XTUCHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSC_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSC_XTURCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSC_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSC_XTURCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSC_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSC_XTUCCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSC_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSC_XTUCCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSQ_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSQ_XTURFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSQ_XTURFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSQ_XTURFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSQ_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSQ_XTUCFECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSQ_XTUCFECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSQ_XTUCFECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSQ_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSQ_XTURHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSQ_XTURHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSQ_XTURHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSQ_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSQ_XTUCHECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSQ_XTUCHECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSQ_XTUCHECErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSQ_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSQ_XTURCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSQ_XTURCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSQ_XTURCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSQ_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSQ_XTUCCRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSQ_XTUCCRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSQ_XTUCCRCErrors, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDBt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDBt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDBt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDBt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDBt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDBt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDBt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_GroupStatus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_GroupStatus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_GroupID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_GroupID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_BondSchemesSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_BondSchemesSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_BondScheme(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_BondScheme, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_GroupCapacity(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_GroupCapacity, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_RunningTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_RunningTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_TargetUpRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_TargetUpRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_TargetDownRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_TargetDownRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_ThreshLowUpRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_ThreshLowUpRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_ThreshLowDownRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_ThreshLowDownRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_UpstreamDifferentialDelayTolerance(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_UpstreamDifferentialDelayTolerance, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_DownstreamDifferentialDelayTolerance(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_DownstreamDifferentialDelayTolerance, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBt_BondedChannelNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBt_BondedChannelNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtBt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtBt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDBtBt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDBtBt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDBtBt_Channel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtBt_Channel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtBtES_UnderflowErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtBtES_UnderflowErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtBtES_CRCErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtBtES_CRCErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtBtES_AlignmentErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtBtES_AlignmentErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtBtES_ShortPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtBtES_ShortPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtBtES_LongPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtBtES_LongPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtBtES_OverflowErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtBtES_OverflowErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtBtES_PauseFramesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtBtES_PauseFramesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtBtES_FramesDropped(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtBtES_FramesDropped, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtS_TotalStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtS_TotalStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtS_CurrentDayStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtS_CurrentDayStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtS_QuarterHourStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtS_QuarterHourStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtST_FailureReasons(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtST_FailureReasons, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtST_UpstreamRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtST_UpstreamRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtST_DownstreamRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtST_DownstreamRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtST_UpstreamPacketLoss(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtST_UpstreamPacketLoss, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtST_DownstreamPacketLoss(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtST_DownstreamPacketLoss, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtST_UpstreamDifferentialDelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtST_UpstreamDifferentialDelay, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtST_DownstreamDifferentialDelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtST_DownstreamDifferentialDelay, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtST_FailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtST_FailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtST_ErroredSeconds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtST_ErroredSeconds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtST_SeverelyErroredSeconds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtST_SeverelyErroredSeconds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtST_UnavailableSeconds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtST_UnavailableSeconds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSC_FailureReasons(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSC_FailureReasons, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSC_UpstreamRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSC_UpstreamRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSC_DownstreamRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSC_DownstreamRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSC_UpstreamPacketLoss(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSC_UpstreamPacketLoss, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSC_DownstreamPacketLoss(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSC_DownstreamPacketLoss, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSC_UpstreamDifferentialDelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSC_UpstreamDifferentialDelay, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSC_DownstreamDifferentialDelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSC_DownstreamDifferentialDelay, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSC_FailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSC_FailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSC_ErroredSeconds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSC_ErroredSeconds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSC_SeverelyErroredSeconds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSC_SeverelyErroredSeconds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSC_UnavailableSeconds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSC_UnavailableSeconds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSQ_FailureReasons(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSQ_FailureReasons, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSQ_UpstreamRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSQ_UpstreamRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSQ_DownstreamRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSQ_DownstreamRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSQ_UpstreamPacketLoss(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSQ_UpstreamPacketLoss, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSQ_DownstreamPacketLoss(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSQ_DownstreamPacketLoss, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSQ_UpstreamDifferentialDelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSQ_UpstreamDifferentialDelay, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSQ_DownstreamDifferentialDelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSQ_DownstreamDifferentialDelay, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSQ_FailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSQ_FailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSQ_ErroredSeconds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSQ_ErroredSeconds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSQ_SeverelyErroredSeconds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSQ_SeverelyErroredSeconds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtSQ_UnavailableSeconds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtSQ_UnavailableSeconds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtES_PAFErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtES_PAFErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtES_PAFSmallFragments(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtES_PAFSmallFragments, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtES_PAFLargeFragments(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtES_PAFLargeFragments, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtES_PAFBadFragments(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtES_PAFBadFragments, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtES_PAFLostFragments(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtES_PAFLostFragments, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtES_PAFLateFragments(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtES_PAFLateFragments, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtES_PAFLostStarts(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtES_PAFLostStarts, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtES_PAFLostEnds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtES_PAFLostEnds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtES_PAFOverflows(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtES_PAFOverflows, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtES_PauseFramesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtES_PauseFramesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtES_CRCErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtES_CRCErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtES_AlignmentErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtES_AlignmentErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtES_ShortPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtES_ShortPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtES_LongPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtES_LongPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtES_OverflowErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtES_OverflowErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDBtES_FramesDropped(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDBtES_FramesDropped, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDDA_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDDA_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDDA_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDDA_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDDA_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDDA_ACTPSDds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_ACTPSDds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_ACTPSDus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_ACTPSDus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_ACTATPds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_ACTATPds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_ACTATPus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_ACTATPus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLINSCds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLINSCds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLINSCus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLINSCus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLINGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLINGds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLINGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLINGus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLOGGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLOGGds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLOGGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLOGGus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLOGpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLOGpsds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLOGpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLOGpsus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLOGMTds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLOGMTds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLOGMTus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLOGMTus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_LATNpbds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_LATNpbds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_LATNpbus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_LATNpbus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_SATNds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_SATNds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_SATNus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_SATNus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLINpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLINpsds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_HLINpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_HLINpsus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_QLNGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_QLNGds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_QLNGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_QLNGus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_QLNpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_QLNpsds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_QLNpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_QLNpsus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_QLNMTds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_QLNMTds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_QLNMTus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_QLNMTus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_SNRGds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_SNRGds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_SNRGus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_SNRGus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_SNRpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_SNRpsds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_SNRpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_SNRpsus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_SNRMTds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_SNRMTds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_SNRMTus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_SNRMTus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_BITSpsds(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_BITSpsds, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDA_BITSpsus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDA_BITSpsus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DO_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DO_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DOIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DOIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DOIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DOIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DOIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DOIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DOIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DOIt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DOIt_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_OpticalSignalLevel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_OpticalSignalLevel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_LowerOpticalThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_LowerOpticalThreshold, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_UpperOpticalThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_UpperOpticalThreshold, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_TransmitOpticalLevel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_TransmitOpticalLevel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_LowerTransmitPowerThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_LowerTransmitPowerThreshold, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOIt_UpperTransmitPowerThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOIt_UpperTransmitPowerThreshold, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOItS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOItS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOItS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOItS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOItS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOItS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOItS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOItS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOItS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOItS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOItS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOItS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOItS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOItS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DOItS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DOItS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DA_LinkNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DA_LinkNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALt_LinkType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_LinkType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALt_LinkType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALt_LinkType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALt_AutoConfig(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_AutoConfig, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALt_DestinationAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_DestinationAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALt_DestinationAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALt_DestinationAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALt_Encapsulation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_Encapsulation, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALt_Encapsulation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALt_Encapsulation, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALt_FCSPreserved(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_FCSPreserved, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALt_FCSPreserved(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALt_FCSPreserved, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALt_VCSearchList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_VCSearchList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALt_VCSearchList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALt_VCSearchList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALt_AAL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALt_AAL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtS_TransmittedBlocks(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtS_TransmittedBlocks, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtS_ReceivedBlocks(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtS_ReceivedBlocks, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtS_CRCErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtS_CRCErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtS_HECErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtS_HECErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DALtQ_QoSClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtQ_QoSClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALtQ_QoSClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALtQ_QoSClass, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALtQ_PeakCellRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtQ_PeakCellRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALtQ_PeakCellRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALtQ_PeakCellRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALtQ_MaximumBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtQ_MaximumBurstSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALtQ_MaximumBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALtQ_MaximumBurstSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DALtQ_SustainableCellRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DALtQ_SustainableCellRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DALtQ_SustainableCellRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DALtQ_SustainableCellRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DADF_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DADF_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DADF_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DADF_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DADF_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DADF_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DADF_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DADF_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DADF_NumberOfRepetitions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DADF_NumberOfRepetitions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DADF_NumberOfRepetitions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DADF_NumberOfRepetitions, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DADF_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DADF_Timeout, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DADF_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DADF_Timeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DADF_SuccessCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DADF_SuccessCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DADF_FailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DADF_FailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DADF_AverageResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DADF_AverageResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DADF_MinimumResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DADF_MinimumResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DADF_MaximumResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DADF_MaximumResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DP_LinkNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DP_LinkNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DP_LinkNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DP_LinkNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPLt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPLt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPLt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPLt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPLt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPLt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPLt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPLt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPLt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPLt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLtS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLtS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLtS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLtS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLtS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLtS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLtS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLtS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLtS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLtS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLtS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLtS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPLtS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPLtS_UnknownProtoPacketsReceived, value);
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
int get_DH_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DH_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_FirmwareVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_FirmwareVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_NodeID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_NodeID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_IsMaster(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_IsMaster, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_Synced(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Synced, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_TotalSyncTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_TotalSyncTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_NetworkUtilization(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_NetworkUtilization, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_PossibleConnectionTypes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_PossibleConnectionTypes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_ConnectionType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_ConnectionType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_ConnectionType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_ConnectionType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_PossibleSpectralModes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_PossibleSpectralModes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_SpectralMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_SpectralMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_SpectralMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_SpectralMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_MTU(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_MTU, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_MTU(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_MTU, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_NoiseMargin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_NoiseMargin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_DefaultNonLARQPER(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_DefaultNonLARQPER, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_LARQEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_LARQEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_MinMulticastRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_MinMulticastRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_NegMulticastRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_NegMulticastRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_MasterSelectionMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_MasterSelectionMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_MasterSelectionMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_MasterSelectionMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItQ_FlowSpecNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItQ_FlowSpecNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItQFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItQFt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHItQFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHItQFt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHItQFt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItQFt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItQFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItQFt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHItQFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHItQFt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHItQFt_TrafficClasses(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItQFt_TrafficClasses, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHItQFt_TrafficClasses(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHItQFt_TrafficClasses, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHItQFt_FlowType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItQFt_FlowType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHItQFt_FlowType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHItQFt_FlowType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHItQFt_Priority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItQFt_Priority, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItQFt_Latency(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItQFt_Latency, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHItQFt_Latency(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHItQFt_Latency, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHItQFt_Jitter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItQFt_Jitter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHItQFt_Jitter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHItQFt_Jitter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHItQFt_PacketSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItQFt_PacketSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHItQFt_PacketSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHItQFt_PacketSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHItQFt_MinRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItQFt_MinRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHItQFt_MinRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHItQFt_MinRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHItQFt_AvgRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItQFt_AvgRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHItQFt_AvgRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHItQFt_AvgRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHItQFt_MaxRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItQFt_MaxRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHItQFt_MaxRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHItQFt_MaxRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHItQFt_PER(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItQFt_PER, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHItQFt_PER(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHItQFt_PER, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHItQFt_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItQFt_Timeout, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHItQFt_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHItQFt_Timeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHItAt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItAt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItAt_NodeID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItAt_NodeID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItAt_IsMaster(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItAt_IsMaster, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItAt_Synced(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItAt_Synced, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItAt_TotalSyncTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItAt_TotalSyncTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItAt_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItAt_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItAt_PHYDiagnosticsEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItAt_PHYDiagnosticsEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHItAt_PHYDiagnosticsEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHItAt_PHYDiagnosticsEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHItAt_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItAt_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDP_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_NumPacketsInBurst(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_NumPacketsInBurst, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_NumPacketsInBurst(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_NumPacketsInBurst, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_BurstInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_BurstInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_BurstInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_BurstInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_TestPacketPayloadLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_TestPacketPayloadLength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_TestPacketPayloadLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_TestPacketPayloadLength, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_PayloadEncoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_PayloadEncoding, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_PayloadEncoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_PayloadEncoding, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_PayloadDataGen(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_PayloadDataGen, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_PayloadDataGen(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_PayloadDataGen, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_PayloadType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_PayloadType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_PayloadType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_PayloadType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_PriorityLevel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_PriorityLevel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_PriorityLevel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_PriorityLevel, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_ResultNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_ResultNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPRt_SrcMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPRt_SrcMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPRt_DestMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPRt_DestMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPRt_PHYRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPRt_PHYRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPRt_BaudRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPRt_BaudRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPRt_SNR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPRt_SNR, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPRt_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPRt_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPRt_Attenuation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPRt_Attenuation, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDP_DiagnosticsState_1161(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_DiagnosticsState_1161, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_DiagnosticsState_1161(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_DiagnosticsState_1161, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_Interface_1163(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_Interface_1163, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_Interface_1163(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_Interface_1163, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDP_SampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDP_SampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHDP_SampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHDP_SampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHDPN_CurrentStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPN_CurrentStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPN_CurrentEnd(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPN_CurrentEnd, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPN_NodeNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPN_NodeNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsCrcErrored(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsCrcErrored, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsCrcErroredHost(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsCrcErroredHost, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsShortErrored(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsShortErrored, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsShortErroredHost(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsShortErroredHost, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_RxPacketsDropped(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_RxPacketsDropped, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_TxPacketsDropped(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_TxPacketsDropped, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_ControlRequestLocal(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_ControlRequestLocal, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_ControlReplyLocal(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_ControlReplyLocal, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_ControlRequestRemote(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_ControlRequestRemote, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_ControlReplyRemote(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_ControlReplyRemote, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsSentWire(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsSentWire, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_BroadcastPacketsSentWire(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_BroadcastPacketsSentWire, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_MulticastPacketsSentWire(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_MulticastPacketsSentWire, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsInternalControl(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsInternalControl, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_BroadcastPacketsInternalControl(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_BroadcastPacketsInternalControl, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsReceivedQueued(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsReceivedQueued, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_PacketsReceivedForwardUnknown(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_PacketsReceivedForwardUnknown, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPNNt_NodeUtilization(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPNNt_NodeUtilization, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPC_TimeStamp(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPC_TimeStamp, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPC_ChannelNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPC_ChannelNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_HostSrcMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_HostSrcMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_HostDestMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_HostDestMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_HPNASrcMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_HPNASrcMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_HPNADestMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_HPNADestMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_PHYRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_PHYRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_BaudRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_BaudRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_SNR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_SNR, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_LARQPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_LARQPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHDPCCt_FlowSpec(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHDPCCt_FlowSpec, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DM_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DM_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_Enable_1211(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_Enable_1211, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_Enable_1211(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_Enable_1211, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_Alias_1214(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_Alias_1214, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_Alias_1214(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_Alias_1214, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_FirmwareVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_FirmwareVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_MaxIngressBW(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_MaxIngressBW, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_MaxEgressBW(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_MaxEgressBW, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_HighestVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_HighestVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_CurrentVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_CurrentVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_NetworkCoordinator(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_NetworkCoordinator, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_NodeID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_NodeID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_MaxNodes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_MaxNodes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_PreferredNC(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_PreferredNC, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_PreferredNC(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_PreferredNC, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_BackupNC(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_BackupNC, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_PrivacyEnabledSetting(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_PrivacyEnabledSetting, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_PrivacyEnabledSetting(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_PrivacyEnabledSetting, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_PrivacyEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_PrivacyEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_FreqCapabilityMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_FreqCapabilityMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_FreqCurrentMaskSetting(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_FreqCurrentMaskSetting, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_FreqCurrentMaskSetting(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_FreqCurrentMaskSetting, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_FreqCurrentMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_FreqCurrentMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_CurrentOperFreq(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_CurrentOperFreq, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_LastOperFreq(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_LastOperFreq, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMIt_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_KeyPassphrase, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_KeyPassphrase(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_KeyPassphrase, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_TxPowerLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_TxPowerLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_TxPowerLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_TxPowerLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_PowerCntlPhyTarget(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_PowerCntlPhyTarget, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_PowerCntlPhyTarget(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_PowerCntlPhyTarget, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_BeaconPowerLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_BeaconPowerLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_BeaconPowerLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_BeaconPowerLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_NetworkTabooMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_NetworkTabooMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_NetworkTabooMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_NetworkTabooMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_TxBcastRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_TxBcastRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_TxBcastRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_TxBcastRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_TxBcastPowerReduction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_TxBcastPowerReduction, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_TxBcastPowerReduction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_TxBcastPowerReduction, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_QAM256Capable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_QAM256Capable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_QAM256Capable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_QAM256Capable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_PacketAggregationCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_PacketAggregationCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_PacketAggregationCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_PacketAggregationCapability, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMIt_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMIt_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DMIt_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DMIt_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DMItS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItQ_EgressNumFlows(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItQ_EgressNumFlows, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItQ_IngressNumFlows(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItQ_IngressNumFlows, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItQ_FlowStatsNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItQ_FlowStatsNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItQFt_FlowID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItQFt_FlowID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItQFt_PacketDA(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItQFt_PacketDA, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItQFt_MaxRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItQFt_MaxRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItQFt_MaxBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItQFt_MaxBurstSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItQFt_LeaseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItQFt_LeaseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItQFt_LeaseTimeLeft(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItQFt_LeaseTimeLeft, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItQFt_FlowPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItQFt_FlowPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItAt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItAt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItAt_NodeID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItAt_NodeID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItAt_PreferredNC(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItAt_PreferredNC, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItAt_HighestVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItAt_HighestVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItAt_PHYTxRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItAt_PHYTxRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItAt_PHYRxRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItAt_PHYRxRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItAt_TxPowerControlReduction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItAt_TxPowerControlReduction, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItAt_RxPowerLevel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItAt_RxPowerLevel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItAt_TxBcastRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItAt_TxBcastRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItAt_RxBcastPowerLevel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItAt_RxBcastPowerLevel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItAt_TxPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItAt_TxPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItAt_RxPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItAt_RxPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItAt_RxErroredAndMissedPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItAt_RxErroredAndMissedPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItAt_QAM256Capable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItAt_QAM256Capable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItAt_PacketAggregationCapability(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItAt_PacketAggregationCapability, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItAt_RxSNR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItAt_RxSNR, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DMItAt_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DMItAt_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DG_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DG_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIt_Upstream(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_Upstream, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_FirmwareVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_FirmwareVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_ConnectionType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_ConnectionType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_MaxTransmitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_MaxTransmitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_TargetDomainNames(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_TargetDomainNames, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIt_TargetDomainNames(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIt_TargetDomainNames, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIt_DomainName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_DomainName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_DomainNameIdentifier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_DomainNameIdentifier, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_DomainId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_DomainId, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_DeviceId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_DeviceId, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_MaxBitRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_MaxBitRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_NodeTypeDMCapable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_NodeTypeDMCapable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_DMRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_DMRequested, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIt_DMRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIt_DMRequested, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIt_IsDM(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_IsDM, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_NodeTypeSCCapable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_NodeTypeSCCapable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_SCRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_SCRequested, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGIt_SCRequested(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGIt_SCRequested, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGIt_IsSC(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_IsSC, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_StandardVersions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_StandardVersions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_MaxBandPlan(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_MaxBandPlan, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_MediumType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_MediumType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_TAIFG(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_TAIFG, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_NotchedAmateurRadioBands(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_NotchedAmateurRadioBands, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_PHYThroughputDiagnosticsEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_PHYThroughputDiagnosticsEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_PerformanceMonitoringDiagnosticsEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_PerformanceMonitoringDiagnosticsEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_SMMaskedBandNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_SMMaskedBandNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_NodeTypeDMConfig(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_NodeTypeDMConfig, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_NodeTypeDMStatus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_NodeTypeDMStatus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_NodeTypeSCStatus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_NodeTypeSCStatus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGIt_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGIt_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItD_DomainName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItD_DomainName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGItD_DomainName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGItD_DomainName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGItD_DomainNameIdentifier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItD_DomainNameIdentifier, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItD_DomainId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItD_DomainId, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItD_MACCycleDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItD_MACCycleDuration, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGItD_MACCycleDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGItD_MACCycleDuration, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGItD_SCDeviceId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItD_SCDeviceId, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGItD_SCDeviceId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGItD_SCDeviceId, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGItD_SCMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItD_SCMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGItD_SCMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGItD_SCMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGItD_ReregistrationTimePeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItD_ReregistrationTimePeriod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGItD_ReregistrationTimePeriod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGItD_ReregistrationTimePeriod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGItD_TopologyPeriodicInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItD_TopologyPeriodicInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGItD_TopologyPeriodicInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGItD_TopologyPeriodicInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGItD_MinSupportedBandplan(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItD_MinSupportedBandplan, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGItD_MinSupportedBandplan(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGItD_MinSupportedBandplan, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGItD_MaxSupportedBandplan(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItD_MaxSupportedBandplan, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGItD_MaxSupportedBandplan(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGItD_MaxSupportedBandplan, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGItS_ModesSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_ModesSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_ModeEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGItS_ModeEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGItS_ModeEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGItS_MICSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_MICSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGItS_MICSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGItS_MICSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGItS_Location(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_Location, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItSt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGItSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGItSt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGItSt_BandNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItSt_BandNumber, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGItSt_BandNumber(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGItSt_BandNumber, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGItSt_StartSubCarrier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItSt_StartSubCarrier, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGItSt_StartSubCarrier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGItSt_StartSubCarrier, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGItSt_StopSubCarrier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItSt_StopSubCarrier, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGItSt_StopSubCarrier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGItSt_StopSubCarrier, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGItS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_MgmtBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_MgmtBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_MgmtBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_MgmtBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_MgmtPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_MgmtPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_MgmtPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_MgmtPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_BlocksSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_BlocksSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_BlocksReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_BlocksReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_BlocksResent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_BlocksResent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItS_BlocksErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItS_BlocksErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItAt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItAt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGItAt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGItAt_MACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGItAt_DeviceId(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItAt_DeviceId, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGItAt_TxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItAt_TxPhyRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGItAt_TxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGItAt_TxPhyRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGItAt_RxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItAt_RxPhyRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGItAt_RxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGItAt_RxPhyRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGItAt_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGItAt_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGItAt_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGItAt_Active, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDP_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDP_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDP_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDP_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDP_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDP_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDP_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDP_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDP_DiagnoseMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDP_DiagnoseMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDP_DiagnoseMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDP_DiagnoseMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDP_PHYThroughputResultNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDP_PHYThroughputResultNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPRt_DestinationMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPRt_DestinationMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDPRt_DestinationMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDPRt_DestinationMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDPRt_LinkState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPRt_LinkState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPRt_TxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPRt_TxPhyRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDPRt_TxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDPRt_TxPhyRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDPRt_RxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPRt_RxPhyRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDPRt_RxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDPRt_RxPhyRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDP_DiagnosticsState_1425(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDP_DiagnosticsState_1425, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDP_DiagnosticsState_1425(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDP_DiagnosticsState_1425, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDP_Interface_1427(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDP_Interface_1427, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDP_Interface_1427(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDP_Interface_1427, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDP_DiagnoseMACAddress_1429(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDP_DiagnoseMACAddress_1429, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDP_DiagnoseMACAddress_1429(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDP_DiagnoseMACAddress_1429, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDP_SampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDP_SampleInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDP_SampleInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDP_SampleInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDP_SNRGroupLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDP_SNRGroupLength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDP_SNRGroupLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDP_SNRGroupLength, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDPN_CurrentStart(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPN_CurrentStart, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPN_CurrentEnd(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPN_CurrentEnd, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDPN_CurrentEnd(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDPN_CurrentEnd, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDPN_NodeNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPN_NodeNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDPN_NodeNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDPN_NodeNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDPNNt_DestinationMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_DestinationMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_MgmtBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_MgmtBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_MgmtBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_MgmtBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_MgmtPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_MgmtPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_MgmtPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_MgmtPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_BlocksSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_BlocksSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_BlocksReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_BlocksReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_BlocksResent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_BlocksResent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPNNt_BlocksErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPNNt_BlocksErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPC_TimeStamp(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPC_TimeStamp, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPC_ChannelNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPC_ChannelNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DGDPC_ChannelNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DGDPC_ChannelNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DGDPCCt_DestinationMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPCCt_DestinationMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DGDPCCt_SNR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DGDPCCt_SNR, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DH_InterfaceNumberOfEntries_1469(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DH_InterfaceNumberOfEntries_1469, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_Enable_1470(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Enable_1470, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_Enable_1470(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_Enable_1470, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_Status_1472(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Status_1472, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_Alias_1473(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Alias_1473, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_Alias_1473(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_Alias_1473, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_Name_1475(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Name_1475, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_LastChange_1476(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_LastChange_1476, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_LowerLayers_1477(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_LowerLayers_1477, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_LowerLayers_1477(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_LowerLayers_1477, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_Upstream_1479(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Upstream_1479, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_MACAddress_1480(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_MACAddress_1480, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_LogicalNetwork(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_LogicalNetwork, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_LogicalNetwork(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_LogicalNetwork, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_Version(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_Version, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_FirmwareVersion_1484(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_FirmwareVersion_1484, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_ForceCCo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_ForceCCo, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_ForceCCo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_ForceCCo, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_NetworkPassword(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_NetworkPassword, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHIt_NetworkPassword(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHIt_NetworkPassword, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHIt_OtherNetworksPresent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_OtherNetworksPresent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_MaxBitRate_1490(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_MaxBitRate_1490, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHIt_AssociatedDeviceNumberOfEntries_1491(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHIt_AssociatedDeviceNumberOfEntries_1491, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_BytesSent_1492(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_BytesSent_1492, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_BytesReceived_1493(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_BytesReceived_1493, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_PacketsSent_1494(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_PacketsSent_1494, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_PacketsReceived_1495(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_PacketsReceived_1495, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_ErrorsSent_1496(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_ErrorsSent_1496, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_ErrorsReceived_1497(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_ErrorsReceived_1497, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_UnicastPacketsSent_1498(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_UnicastPacketsSent_1498, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_UnicastPacketsReceived_1499(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_UnicastPacketsReceived_1499, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_DiscardPacketsSent_1500(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_DiscardPacketsSent_1500, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_DiscardPacketsReceived_1501(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_DiscardPacketsReceived_1501, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_MulticastPacketsSent_1502(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_MulticastPacketsSent_1502, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_MulticastPacketsReceived_1503(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_MulticastPacketsReceived_1503, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_BroadcastPacketsSent_1504(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_BroadcastPacketsSent_1504, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_BroadcastPacketsReceived_1505(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_BroadcastPacketsReceived_1505, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_UnknownProtoPacketsReceived_1506(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_UnknownProtoPacketsReceived_1506, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_MPDUTxAck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_MPDUTxAck, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_MPDUTxCol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_MPDUTxCol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_MPDUTxFailed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_MPDUTxFailed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_MPDURxAck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_MPDURxAck, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItS_MPDURxFailed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItS_MPDURxFailed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItAt_MACAddress_1512(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItAt_MACAddress_1512, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItAt_TxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItAt_TxPhyRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItAt_RxPhyRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItAt_RxPhyRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItAt_SNRPerTone(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItAt_SNRPerTone, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItAt_AvgAttenuation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItAt_AvgAttenuation, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItAt_EndStationMACs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItAt_EndStationMACs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHItAt_Active_1518(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHItAt_Active_1518, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DU_InterfaceNumberOfEntries_1519(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DU_InterfaceNumberOfEntries_1519, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_Enable_1520(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Enable_1520, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_Enable_1520(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_Enable_1520, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_Status_1522(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Status_1522, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_Alias_1523(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Alias_1523, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_Alias_1523(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_Alias_1523, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_Name_1525(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Name_1525, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_LastChange_1526(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_LastChange_1526, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_LowerLayers_1527(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_LowerLayers_1527, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_LowerLayers_1527(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_LowerLayers_1527, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_Upstream_1529(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_Upstream_1529, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_MACAddress_1530(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_MACAddress_1530, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_FirmwareVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_FirmwareVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_MaxBitRate_1532(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_MaxBitRate_1532, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_NodeType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_NodeType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_NodeType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_NodeType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_LogicalNetwork(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_LogicalNetwork, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_LogicalNetwork(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_LogicalNetwork, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_EncryptionMethod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_EncryptionMethod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_EncryptionMethod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_EncryptionMethod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_EncryptionKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_EncryptionKey, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_EncryptionKey(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_EncryptionKey, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_PowerBackoffEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_PowerBackoffEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_PowerBackoffEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_PowerBackoffEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_PowerBackoffMechanismActive(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_PowerBackoffMechanismActive, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_EstApplicationThroughput(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_EstApplicationThroughput, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_ActiveNotchEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_ActiveNotchEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUIt_ActiveNotchEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUIt_ActiveNotchEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUIt_ActiveNotchNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_ActiveNotchNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_AssociatedDeviceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_AssociatedDeviceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUIt_BridgeForNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUIt_BridgeForNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_BytesSent_1550(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_BytesSent_1550, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_BytesReceived_1551(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_BytesReceived_1551, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_PacketsSent_1552(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_PacketsSent_1552, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_PacketsReceived_1553(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_PacketsReceived_1553, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_ErrorsSent_1554(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_ErrorsSent_1554, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_ErrorsReceived_1555(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_ErrorsReceived_1555, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_UnicastPacketsSent_1556(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_UnicastPacketsSent_1556, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_UnicastPacketsReceived_1557(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_UnicastPacketsReceived_1557, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_DiscardPacketsSent_1558(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_DiscardPacketsSent_1558, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_DiscardPacketsReceived_1559(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_DiscardPacketsReceived_1559, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_MulticastPacketsSent_1560(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_MulticastPacketsSent_1560, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_MulticastPacketsReceived_1561(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_MulticastPacketsReceived_1561, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_BroadcastPacketsSent_1562(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_BroadcastPacketsSent_1562, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_BroadcastPacketsReceived_1563(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_BroadcastPacketsReceived_1563, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItS_UnknownProtoPacketsReceived_1564(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItS_UnknownProtoPacketsReceived_1564, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItAt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItAt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItAt_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItAt_Port, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItAt_LogicalNetwork(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItAt_LogicalNetwork, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItAt_PhyTxThroughput(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItAt_PhyTxThroughput, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItAt_PhyRxThroughput(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItAt_PhyRxThroughput, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItAt_RealPhyRxThroughput(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItAt_RealPhyRxThroughput, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItAt_EstimatedPLR(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItAt_EstimatedPLR, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItAt_MeanEstimatedAtt(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItAt_MeanEstimatedAtt, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItAt_SmartRouteIntermediatePLCMAC(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItAt_SmartRouteIntermediatePLCMAC, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItAt_DirectRoute(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItAt_DirectRoute, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItAt_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItAt_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItAt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItAt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUItAt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUItAt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUItAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItAt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUItAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUItAt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUItAt_StartFreq(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItAt_StartFreq, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUItAt_StartFreq(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUItAt_StartFreq, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUItAt_StopFreq(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItAt_StopFreq, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUItAt_StopFreq(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUItAt_StopFreq, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUItAt_Depth(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItAt_Depth, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUItAt_Depth(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUItAt_Depth, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUItBt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItBt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUItBt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUItBt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUItBt_MACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItBt_MACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUItBt_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUItBt_Port, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUDI_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUDI_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUDI_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUDI_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUDI_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUDI_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUDI_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUDI_Type, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUDI_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUDI_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUDI_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUDI_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUDI_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUDI_Port, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DUDI_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DUDI_Port, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DUDI_Measurements(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUDI_Measurements, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DUDI_RxGain(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DUDI_RxGain, value);
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
int get_DWAt_WMMCapability_1751(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAt_WMMCapability_1751, value);
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
int get_DWAtAtS_BytesSent_1846(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_BytesSent_1846, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_BytesReceived_1847(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_BytesReceived_1847, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_PacketsSent_1848(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_PacketsSent_1848, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_PacketsReceived_1849(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_PacketsReceived_1849, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DWAtAtS_ErrorsSent_1850(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_ErrorsSent_1850, value);
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
int get_DWAtAtS_RetransCount_1854(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DWAtAtS_RetransCount_1854, value);
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
int get_DBBt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBt_Standard(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBt_Standard, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBt_Standard(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBt_Standard, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBt_PortNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBt_PortNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBt_VLANNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBt_VLANNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBt_VLANPortNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBt_VLANPortNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtPt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtPt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtPt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtPt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtPt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtPt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtPt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtPt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtPt_ManagementPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPt_ManagementPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtPt_ManagementPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtPt_ManagementPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtPt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPt_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtPt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtPt_Type, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtPt_DefaultUserPriority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPt_DefaultUserPriority, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtPt_DefaultUserPriority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtPt_DefaultUserPriority, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtPt_PriorityRegeneration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPt_PriorityRegeneration, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtPt_PriorityRegeneration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtPt_PriorityRegeneration, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtPt_PortState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPt_PortState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtPt_PVID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPt_PVID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtPt_PVID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtPt_PVID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtPt_TPID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPt_TPID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtPt_TPID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtPt_TPID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtPt_AcceptableFrameTypes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPt_AcceptableFrameTypes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtPt_AcceptableFrameTypes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtPt_AcceptableFrameTypes, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtPt_IngressFiltering(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPt_IngressFiltering, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtPt_IngressFiltering(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtPt_IngressFiltering, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtPt_ServiceAccessPrioritySelection(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPt_ServiceAccessPrioritySelection, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtPt_ServiceAccessPrioritySelection(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtPt_ServiceAccessPrioritySelection, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtPt_ServiceAccessPriorityTranslation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPt_ServiceAccessPriorityTranslation, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtPt_ServiceAccessPriorityTranslation(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtPt_ServiceAccessPriorityTranslation, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtPt_PriorityTagging(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPt_PriorityTagging, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtPt_PriorityTagging(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtPt_PriorityTagging, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtPtP_PCPSelection(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtP_PCPSelection, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtPtP_PCPSelection(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtPtP_PCPSelection, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtPtP_UseDEI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtP_UseDEI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtPtP_UseDEI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtPtP_UseDEI, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtPtP_RequireDropEncoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtP_RequireDropEncoding, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtPtP_RequireDropEncoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtPtP_RequireDropEncoding, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtPtP_PCPEncoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtP_PCPEncoding, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtPtP_PCPEncoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtPtP_PCPEncoding, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtPtP_PCPDecoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtP_PCPDecoding, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtPtP_PCPDecoding(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtPtP_PCPDecoding, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtPtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtPtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtPtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtPtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtPtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtPtS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtPtS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtPtS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtPtS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtPtS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtPtS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtPtS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtPtS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtPtS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtPtS_UnknownPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtPtS_UnknownPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBBtVt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtVt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtVt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtVt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtVt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtVt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtVt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtVt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtVt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtVt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtVt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtVt_Name, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtVt_VLANID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtVt_VLANID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtVt_VLANID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtVt_VLANID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtVt_Enable_2007(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtVt_Enable_2007, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtVt_Enable_2007(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtVt_Enable_2007, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtVt_Alias_2009(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtVt_Alias_2009, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtVt_Alias_2009(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtVt_Alias_2009, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtVt_VLAN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtVt_VLAN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtVt_VLAN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtVt_VLAN, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtVt_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtVt_Port, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtVt_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtVt_Port, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBBtVt_Untagged(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBBtVt_Untagged, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBBtVt_Untagged(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBBtVt_Untagged, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DBFt_Bridge(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_Bridge, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_Bridge(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_Bridge, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_Order, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_Order, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_DHCPType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_DHCPType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_DHCPType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_DHCPType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_VLANIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_VLANIDFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_VLANIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_VLANIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_EthertypeFilterList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_EthertypeFilterList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_EthertypeFilterList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_EthertypeFilterList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_EthertypeFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_EthertypeFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_EthertypeFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_EthertypeFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_SourceMACAddressFilterList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_SourceMACAddressFilterList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_SourceMACAddressFilterList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_SourceMACAddressFilterList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_SourceMACAddressFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_SourceMACAddressFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_SourceMACAddressFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_SourceMACAddressFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_DestMACAddressFilterList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_DestMACAddressFilterList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_DestMACAddressFilterList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_DestMACAddressFilterList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_DestMACAddressFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_DestMACAddressFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_DestMACAddressFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_DestMACAddressFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_SourceMACFromVendorClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_SourceMACFromVendorClassIDFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_SourceMACFromVendorClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_SourceMACFromVendorClassIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_SourceMACFromVendorClassIDFilterv6(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_SourceMACFromVendorClassIDFilterv6, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_SourceMACFromVendorClassIDFilterv6(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_SourceMACFromVendorClassIDFilterv6, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_SourceMACFromVendorClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_SourceMACFromVendorClassIDFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_SourceMACFromVendorClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_SourceMACFromVendorClassIDFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_SourceMACFromVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_SourceMACFromVendorClassIDMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_SourceMACFromVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_SourceMACFromVendorClassIDMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_estMACFromVendorClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_estMACFromVendorClassIDFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_estMACFromVendorClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_estMACFromVendorClassIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_DestMACFromVendorClassIDFilterv6(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_DestMACFromVendorClassIDFilterv6, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_DestMACFromVendorClassIDFilterv6(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_DestMACFromVendorClassIDFilterv6, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_DestMACFromVendorClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_DestMACFromVendorClassIDFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_DestMACFromVendorClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_DestMACFromVendorClassIDFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_DestMACFromVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_DestMACFromVendorClassIDMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_DestMACFromVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_DestMACFromVendorClassIDMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_SourceMACFromClientIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_SourceMACFromClientIDFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_SourceMACFromClientIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_SourceMACFromClientIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_SourceMACFromClientIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_SourceMACFromClientIDFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_SourceMACFromClientIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_SourceMACFromClientIDFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_DestMACFromClientIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_DestMACFromClientIDFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_DestMACFromClientIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_DestMACFromClientIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_DestMACFromClientIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_DestMACFromClientIDFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_DestMACFromClientIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_DestMACFromClientIDFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_SourceMACFromUserClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_SourceMACFromUserClassIDFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_SourceMACFromUserClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_SourceMACFromUserClassIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_SourceMACFromUserClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_SourceMACFromUserClassIDFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_SourceMACFromUserClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_SourceMACFromUserClassIDFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_DestMACFromUserClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_DestMACFromUserClassIDFilter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_DestMACFromUserClassIDFilter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_DestMACFromUserClassIDFilter, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_DestMACFromUserClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_DestMACFromUserClassIDFilterExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_DestMACFromUserClassIDFilterExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_DestMACFromUserClassIDFilterExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_DestIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_DestIP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_DestIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_DestIP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_DestMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_DestMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_DestMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_DestMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_DestIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_DestIPExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_DestIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_DestIPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_SourceIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_SourceIP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_SourceIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_SourceIP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_SourceMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_SourceMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_SourceMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_SourceMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_SourceIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_SourceIPExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_SourceIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_SourceIPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_Protocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_Protocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_ProtocolExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_ProtocolExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_ProtocolExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_ProtocolExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_DestPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_DestPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_DestPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_DestPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_DestPortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_DestPortRangeMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_DestPortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_DestPortRangeMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_DestPortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_DestPortExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_DestPortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_DestPortExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_SourcePort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_SourcePort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_SourcePort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_SourcePort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_SourcePortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_SourcePortRangeMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_SourcePortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_SourcePortRangeMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBFt_SourcePortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBFt_SourcePortExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBFt_SourcePortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBFt_SourcePortExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBPt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBPt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBPt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBPt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBPt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBPt_Status, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBPt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBPt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBPt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBPt_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBPt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBPt_Type, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBPt_SVLANComponent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBPt_SVLANComponent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBPt_SVLANComponent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBPt_SVLANComponent, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DBPt_CVLANComponents(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DBPt_CVLANComponents, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DBPt_CVLANComponents(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DBPt_CVLANComponents, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DP_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DP_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DP_SupportedNCPs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DP_SupportedNCPs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_ConnectionStatus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_ConnectionStatus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIt_LastConnectionError(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_LastConnectionError, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIt_AutoDisconnectTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_AutoDisconnectTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_AutoDisconnectTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_AutoDisconnectTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_IdleDisconnectTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_IdleDisconnectTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_IdleDisconnectTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_IdleDisconnectTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_WarnDisconnectDelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_WarnDisconnectDelay, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_WarnDisconnectDelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_WarnDisconnectDelay, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_Username(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_Username, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_Username(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_Username, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_Password(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_Password, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_Password(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_Password, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_EncryptionProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_EncryptionProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_EncryptionProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_EncryptionProtocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_CompressionProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_CompressionProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_CompressionProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_CompressionProtocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_AuthenticationProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_AuthenticationProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_AuthenticationProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_AuthenticationProtocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_MaxMRUSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_MaxMRUSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_MaxMRUSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_MaxMRUSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_CurrentMRUSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_CurrentMRUSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIt_ConnectionTrigger(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_ConnectionTrigger, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_ConnectionTrigger(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_ConnectionTrigger, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_LCPEcho(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_LCPEcho, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIt_LCPEchoRetry(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_LCPEchoRetry, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPIt_IPCPEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_IPCPEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_IPCPEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_IPCPEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPIt_IPv6CPEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPIt_IPv6CPEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPIt_IPv6CPEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPIt_IPv6CPEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPItP_SessionID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItP_SessionID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItP_ACName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItP_ACName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPItP_ACName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPItP_ACName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPItP_ServiceName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItP_ServiceName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPItP_ServiceName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPItP_ServiceName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPItI_LocalIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItI_LocalIPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItI_RemoteIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItI_RemoteIPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItI_DNSServers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItI_DNSServers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItI_PassthroughEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItI_PassthroughEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPItI_PassthroughEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPItI_PassthroughEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPItI_PassthroughDHCPPool(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItI_PassthroughDHCPPool, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DPItI_PassthroughDHCPPool(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DPItI_PassthroughDHCPPool, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DPItI_LocalInterfaceIdentifier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItI_LocalInterfaceIdentifier, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItI_RemoteInterfaceIdentifier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItI_RemoteInterfaceIdentifier, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DPItS_UnknownProtoPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DPItS_UnknownProtoPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_IPv4Capable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_IPv4Capable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_IPv4Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_IPv4Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DI_IPv4Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DI_IPv4Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DI_IPv4Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_IPv4Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_IPv6Capable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_IPv6Capable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_IPv6Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_IPv6Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DI_IPv6Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DI_IPv6Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DI_IPv6Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_IPv6Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_ULAPrefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_ULAPrefix, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DI_ULAPrefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DI_ULAPrefix, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DI_InterfaceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_InterfaceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_ActivePortNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_ActivePortNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_IPv4Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_IPv4Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_IPv4Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_IPv4Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_IPv6Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_IPv6Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_IPv6Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_IPv6Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_ULAEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_ULAEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_ULAEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_ULAEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_LastChange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_LastChange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_LowerLayers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_LowerLayers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_LowerLayers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_Router(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Router, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_Router(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_Router, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Reset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_Reset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_Reset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_MaxMTUSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_MaxMTUSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_MaxMTUSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_MaxMTUSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_Loopback(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Loopback, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_Loopback(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_Loopback, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_IPv4AddressNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_IPv4AddressNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_IPv6AddressNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_IPv6AddressNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_IPv6PrefixNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_IPv6PrefixNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_AutoIPEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_AutoIPEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_AutoIPEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_AutoIPEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIItIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIItIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIItIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIItIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIItIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIItIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIItIt_IPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_IPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIItIt_IPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIItIt_IPAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIItIt_SubnetMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_SubnetMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItIt_AddressingType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_AddressingType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItIt_Enable_2237(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_Enable_2237, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIItIt_Enable_2237(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIItIt_Enable_2237, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIItIt_Status_2239(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_Status_2239, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItIt_IPAddressStatus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_IPAddressStatus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItIt_Alias_2241(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_Alias_2241, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItIt_IPAddress_2242(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_IPAddress_2242, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItIt_Origin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_Origin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItIt_Prefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_Prefix, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItIt_PreferredLifetime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_PreferredLifetime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItIt_ValidLifetime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_ValidLifetime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItIt_Anycast(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_Anycast, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItIt_Enable_2248(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_Enable_2248, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIItIt_Enable_2248(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIItIt_Enable_2248, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIItIt_Status_2250(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_Status_2250, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItIt_PrefixStatus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_PrefixStatus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItIt_Alias_2252(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_Alias_2252, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIItIt_Alias_2252(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIItIt_Alias_2252, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIItIt_Prefix_2254(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_Prefix_2254, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIItIt_Prefix_2254(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIItIt_Prefix_2254, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIItIt_Origin_2256(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_Origin_2256, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItIt_StaticType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_StaticType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIItIt_StaticType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIItIt_StaticType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIItIt_ParentPrefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_ParentPrefix, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIItIt_ParentPrefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIItIt_ParentPrefix, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIItIt_ChildPrefixBits(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_ChildPrefixBits, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIItIt_ChildPrefixBits(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIItIt_ChildPrefixBits, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIItIt_OnLink(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_OnLink, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIItIt_OnLink(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIItIt_OnLink, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIItIt_Autonomous(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_Autonomous, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIItIt_Autonomous(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIItIt_Autonomous, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIItIt_PreferredLifetime_2267(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_PreferredLifetime_2267, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIItIt_PreferredLifetime_2267(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIItIt_PreferredLifetime_2267, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIItIt_ValidLifetime_2269(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItIt_ValidLifetime_2269, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIItIt_ValidLifetime_2269(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIItIt_ValidLifetime_2269, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIItS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_ErrorsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_ErrorsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_UnicastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_UnicastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_UnicastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_UnicastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_DiscardPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_DiscardPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_DiscardPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_DiscardPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_MulticastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_MulticastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_MulticastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_MulticastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_BroadcastPacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_BroadcastPacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_BroadcastPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_BroadcastPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_UnknownPacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_UnknownPacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIAt_LocalIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIAt_LocalIPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIAt_LocalPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIAt_LocalPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIAt_RemoteIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIAt_RemoteIPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIAt_RemotePort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIAt_RemotePort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIAt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIAt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv4PingSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv4PingSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv6PingSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv6PingSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv4TraceRouteSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv4TraceRouteSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv6TraceRouteSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv6TraceRouteSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv4DownloadDiagnosticsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv4DownloadDiagnosticsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv6DownloadDiagnosticsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv6DownloadDiagnosticsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv4UploadDiagnosticsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv4UploadDiagnosticsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv6UploadDiagnosticsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv6UploadDiagnosticsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv4UDPEchoDiagnosticsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv4UDPEchoDiagnosticsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv6UDPEchoDiagnosticsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv6UDPEchoDiagnosticsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv4ServerSelectionDiagnosticsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv4ServerSelectionDiagnosticsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DID_IPv6ServerSelectionDiagnosticsSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DID_IPv6ServerSelectionDiagnosticsSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDI_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_ProtocolVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_ProtocolVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_ProtocolVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_ProtocolVersion, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_Host, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_Host, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_NumberOfRepetitions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_NumberOfRepetitions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_NumberOfRepetitions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_NumberOfRepetitions, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_Timeout, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_Timeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_DataBlockSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_DataBlockSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_DataBlockSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_DataBlockSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_DSCP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_DSCP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_DSCP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_DSCP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_IPAddressUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_IPAddressUsed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_IPAddressUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_IPAddressUsed, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_SuccessCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_SuccessCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_SuccessCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_SuccessCount, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_FailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_FailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_FailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_FailureCount, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_AverageResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_AverageResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_AverageResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_AverageResponseTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_MinimumResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_MinimumResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_MinimumResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_MinimumResponseTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_MaximumResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_MaximumResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_MaximumResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_MaximumResponseTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_AverageResponseTimeDetailed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_AverageResponseTimeDetailed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_AverageResponseTimeDetailed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_AverageResponseTimeDetailed, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_MinimumResponseTimeDetailed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_MinimumResponseTimeDetailed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_MinimumResponseTimeDetailed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_MinimumResponseTimeDetailed, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDI_MaximumResponseTimeDetailed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDI_MaximumResponseTimeDetailed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDI_MaximumResponseTimeDetailed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDI_MaximumResponseTimeDetailed, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_ProtocolVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_ProtocolVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_ProtocolVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_ProtocolVersion, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_Host, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_Host, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_NumberOfTries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_NumberOfTries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_NumberOfTries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_NumberOfTries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_Timeout, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_Timeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_DataBlockSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_DataBlockSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_DataBlockSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_DataBlockSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_DSCP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_DSCP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_DSCP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_DSCP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_MaxHopCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_MaxHopCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_MaxHopCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_MaxHopCount, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_IPAddressUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_IPAddressUsed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_IPAddressUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_IPAddressUsed, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDT_ResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDT_ResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDT_ResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDT_ResponseTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDTRt_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDTRt_Host, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDTRt_HostAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDTRt_HostAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDTRt_ErrorCode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDTRt_ErrorCode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDTRt_RTTimes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDTRt_RTTimes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_DownloadURL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_DownloadURL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_DownloadURL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_DownloadURL, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_DownloadTransports(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_DownloadTransports, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_DownloadDiagnosticMaxConnections(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_DownloadDiagnosticMaxConnections, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_DownloadDiagnosticMaxConnections(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_DownloadDiagnosticMaxConnections, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_DownloadDiagnosticsMaxIncrementalResult(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_DownloadDiagnosticsMaxIncrementalResult, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_DSCP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_DSCP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_EthernetPriority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_EthernetPriority, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_EthernetPriority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_EthernetPriority, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_TimeBasedTestDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TimeBasedTestDuration, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_TimeBasedTestDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_TimeBasedTestDuration, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_TimeBasedTestMeasurementInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TimeBasedTestMeasurementInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_TimeBasedTestMeasurementInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_TimeBasedTestMeasurementInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_TimeBasedTestMeasurementOffset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TimeBasedTestMeasurementOffset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_TimeBasedTestMeasurementOffset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_TimeBasedTestMeasurementOffset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_ProtocolVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_ProtocolVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_ProtocolVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_ProtocolVersion, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_NumberOfConnections(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_NumberOfConnections, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_NumberOfConnections(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_NumberOfConnections, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_IPAddressUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_IPAddressUsed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_ROMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_ROMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_BOMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_BOMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_EOMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_EOMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_TestBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TestBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_TotalBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TotalBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_TotalBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TotalBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_TestBytesReceivedUnderFullLoading(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TestBytesReceivedUnderFullLoading, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_TotalBytesReceivedUnderFullLoading(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TotalBytesReceivedUnderFullLoading, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_TotalBytesSentUnderFullLoading(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TotalBytesSentUnderFullLoading, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_PeriodOfFullLoading(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_PeriodOfFullLoading, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_TCPOpenRequestTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TCPOpenRequestTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_TCPOpenResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_TCPOpenResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_PerConnectionResultNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_PerConnectionResultNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDD_EnablePerConnectionResults(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_EnablePerConnectionResults, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDD_EnablePerConnectionResults(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDD_EnablePerConnectionResults, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDD_IncrementalResultNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDD_IncrementalResultNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDPt_ROMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDPt_ROMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDPt_BOMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDPt_BOMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDPt_EOMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDPt_EOMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDPt_TestBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDPt_TestBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDPt_TotalBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDPt_TotalBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDPt_TotalBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDPt_TotalBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDPt_TCPOpenRequestTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDPt_TCPOpenRequestTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDPt_TCPOpenResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDPt_TCPOpenResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDIt_TestBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDIt_TestBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDIt_TotalBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDIt_TotalBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDIt_TotalBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDIt_TotalBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDIt_StartTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDIt_StartTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDDIt_EndTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDDIt_EndTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_UploadURL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_UploadURL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_UploadURL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_UploadURL, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_UploadTransports(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_UploadTransports, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_UploadDiagnosticsMaxConnections(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_UploadDiagnosticsMaxConnections, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_UploadDiagnosticsMaxIncrementalResult(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_UploadDiagnosticsMaxIncrementalResult, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_DSCP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_DSCP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_DSCP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_DSCP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_EthernetPriority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_EthernetPriority, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_EthernetPriority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_EthernetPriority, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_TestFileLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TestFileLength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_TestFileLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_TestFileLength, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_TimeBasedTestDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TimeBasedTestDuration, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_TimeBasedTestDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_TimeBasedTestDuration, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_TimeBasedTestMeasurementInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TimeBasedTestMeasurementInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_TimeBasedTestMeasurementInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_TimeBasedTestMeasurementInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_TimeBasedTestMeasurementOffset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TimeBasedTestMeasurementOffset, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_TimeBasedTestMeasurementOffset(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_TimeBasedTestMeasurementOffset, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_ProtocolVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_ProtocolVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_ProtocolVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_ProtocolVersion, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_NumberOfConnections(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_NumberOfConnections, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_NumberOfConnections(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_NumberOfConnections, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_IPAddressUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_IPAddressUsed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_ROMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_ROMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_BOMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_BOMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_EOMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_EOMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TestBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TestBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TotalBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TotalBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TotalBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TotalBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TestBytesSentUnderFullLoading(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TestBytesSentUnderFullLoading, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TotalBytesReceivedUnderFullLoading(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TotalBytesReceivedUnderFullLoading, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TotalBytesSentUnderFullLoading(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TotalBytesSentUnderFullLoading, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_PeriodOfFullLoading(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_PeriodOfFullLoading, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TCPOpenRequestTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TCPOpenRequestTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TCPOpenResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TCPOpenResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_PerConnectionResultNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_PerConnectionResultNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_EnablePerConnectionResults(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_EnablePerConnectionResults, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_EnablePerConnectionResults(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_EnablePerConnectionResults, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_IncrementalResultNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_IncrementalResultNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUPt_ROMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUPt_ROMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUPt_BOMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUPt_BOMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUPt_EOMTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUPt_EOMTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUPt_TestBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUPt_TestBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUPt_TotalBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUPt_TotalBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUPt_TotalBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUPt_TotalBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUPt_TCPOpenRequestTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUPt_TCPOpenRequestTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUPt_TCPOpenResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUPt_TCPOpenResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUIt_TestBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUIt_TestBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUIt_TotalBytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUIt_TotalBytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUIt_TotalBytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUIt_TotalBytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUIt_StartTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUIt_StartTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUIt_EndTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUIt_EndTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_Interface_2473(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_Interface_2473, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_Interface_2473(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_Interface_2473, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_SourceIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_SourceIPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_SourceIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_SourceIPAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_UDPPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_UDPPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_UDPPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_UDPPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_EchoPlusEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_EchoPlusEnabled, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_EchoPlusEnabled(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_EchoPlusEnabled, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_EchoPlusSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_EchoPlusSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_PacketsResponded(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_PacketsResponded, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_BytesResponded(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_BytesResponded, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TimeFirstPacketReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TimeFirstPacketReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_TimeLastPacketReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_TimeLastPacketReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_DiagnosticsState_2488(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_DiagnosticsState_2488, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_DiagnosticsState_2488(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_DiagnosticsState_2488, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_Interface_2490(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_Interface_2490, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_Interface_2490(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_Interface_2490, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_Host, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_Host, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_Port, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_Port, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_NumberOfRepetitions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_NumberOfRepetitions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_NumberOfRepetitions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_NumberOfRepetitions, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_Timeout, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_Timeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_DataBlockSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_DataBlockSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_DataBlockSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_DataBlockSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_DSCP_2502(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_DSCP_2502, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_DSCP_2502(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_DSCP_2502, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_InterTransmissionTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_InterTransmissionTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_InterTransmissionTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_InterTransmissionTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_ProtocolVersion_2506(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_ProtocolVersion_2506, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_ProtocolVersion_2506(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_ProtocolVersion_2506, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_IPAddressUsed_2508(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_IPAddressUsed_2508, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_SuccessCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_SuccessCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_FailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_FailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_AverageResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_AverageResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_MinimumResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_MinimumResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_MaximumResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_MaximumResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_EnableIndividualPacketResults(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_EnableIndividualPacketResults, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDU_EnableIndividualPacketResults(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDU_EnableIndividualPacketResults, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDU_IndividualPacketResultNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_IndividualPacketResultNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDU_UDPEchoDiagnosticsMaxResults(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDU_UDPEchoDiagnosticsMaxResults, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUIt_PacketSuccess(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUIt_PacketSuccess, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUIt_PacketSendTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUIt_PacketSendTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUIt_PacketReceiveTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUIt_PacketReceiveTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUIt_TestGenSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUIt_TestGenSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUIt_TestRespSN(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUIt_TestRespSN, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUIt_TestRespRcvTimeStamp(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUIt_TestRespRcvTimeStamp, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUIt_TestRespReplyTimeStamp(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUIt_TestRespReplyTimeStamp, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDUIt_TestRespReplyFailureCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDUIt_TestRespReplyFailureCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDS_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDS_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDS_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDS_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDS_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDS_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDS_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDS_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDS_ProtocolVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDS_ProtocolVersion, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDS_ProtocolVersion(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDS_ProtocolVersion, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDS_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDS_Protocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDS_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDS_Protocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDS_HostList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDS_HostList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDS_HostList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDS_HostList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDS_NumberOfRepetitions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDS_NumberOfRepetitions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDS_NumberOfRepetitions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDS_NumberOfRepetitions, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDS_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDS_Timeout, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIDS_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIDS_Timeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIDS_FastestHost(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDS_FastestHost, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDS_MinimumResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDS_MinimumResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDS_AverageResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDS_AverageResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDS_MaximumResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDS_MaximumResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIDS_IPAddressUsed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIDS_IPAddressUsed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DI_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DI_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DI_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_AHSupported(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_AHSupported, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_IKEv2SupportedEncryptionAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_IKEv2SupportedEncryptionAlgorithms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_ESPSupportedEncryptionAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_ESPSupportedEncryptionAlgorithms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_IKEv2SupportedPseudoRandomFunctions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_IKEv2SupportedPseudoRandomFunctions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_SupportedIntegrityAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_SupportedIntegrityAlgorithms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_SupportedDiffieHellmanGroupTransforms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_SupportedDiffieHellmanGroupTransforms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_MaxFilterEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_MaxFilterEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_MaxProfileEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_MaxProfileEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_FilterNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_FilterNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_ProfileNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_ProfileNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_TunnelNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_TunnelNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DI_IKEv2SANumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_IKEv2SANumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_NegotiationFailures(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_NegotiationFailures, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_UnknownSPIErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_UnknownSPIErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_DecryptionErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_DecryptionErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_IntegrityErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_IntegrityErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_ReplayErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_ReplayErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_PolicyErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_PolicyErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIS_OtherReceiveErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIS_OtherReceiveErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIFt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_Order, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_Order, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_AllInterfaces(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_AllInterfaces, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_AllInterfaces(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_AllInterfaces, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_DestIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_DestIP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_DestIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_DestIP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_DestMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_DestMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_DestMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_DestMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_DestIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_DestIPExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_DestIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_DestIPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_SourceIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_SourceIP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_SourceIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_SourceIP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_SourceMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_SourceMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_SourceMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_SourceMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_SourceIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_SourceIPExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_SourceIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_SourceIPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_Protocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_Protocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_ProtocolExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_ProtocolExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_ProtocolExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_ProtocolExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_DestPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_DestPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_DestPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_DestPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_DestPortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_DestPortRangeMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_DestPortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_DestPortRangeMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_DestPortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_DestPortExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_DestPortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_DestPortExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_SourcePort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_SourcePort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_SourcePort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_SourcePort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_SourcePortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_SourcePortRangeMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_SourcePortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_SourcePortRangeMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_SourcePortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_SourcePortExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_SourcePortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_SourcePortExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_ProcessingChoice(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_ProcessingChoice, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_ProcessingChoice(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_ProcessingChoice, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIFt_Profile(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIFt_Profile, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIFt_Profile(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIFt_Profile, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_MaxChildSAs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_MaxChildSAs, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_MaxChildSAs(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_MaxChildSAs, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_RemoteEndpoints(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_RemoteEndpoints, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_RemoteEndpoints(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_RemoteEndpoints, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_ForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_ForwardingPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_ForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_ForwardingPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_Protocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_Protocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2AuthenticationMethod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2AuthenticationMethod, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2AuthenticationMethod(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2AuthenticationMethod, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2AllowedEncryptionAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2AllowedEncryptionAlgorithms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2AllowedEncryptionAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2AllowedEncryptionAlgorithms, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_ESPAllowedEncryptionAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_ESPAllowedEncryptionAlgorithms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_ESPAllowedEncryptionAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_ESPAllowedEncryptionAlgorithms, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2AllowedPseudoRandomFunctions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2AllowedPseudoRandomFunctions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2AllowedPseudoRandomFunctions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2AllowedPseudoRandomFunctions, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2AllowedIntegrityAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2AllowedIntegrityAlgorithms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2AllowedIntegrityAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2AllowedIntegrityAlgorithms, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_AHAllowedIntegrityAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_AHAllowedIntegrityAlgorithms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_AHAllowedIntegrityAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_AHAllowedIntegrityAlgorithms, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_ESPAllowedIntegrityAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_ESPAllowedIntegrityAlgorithms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_ESPAllowedIntegrityAlgorithms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_ESPAllowedIntegrityAlgorithms, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2AllowedDiffieHellmanGroupTransforms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2AllowedDiffieHellmanGroupTransforms, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2AllowedDiffieHellmanGroupTransforms(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2AllowedDiffieHellmanGroupTransforms, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2DeadPeerDetectionTimeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2DeadPeerDetectionTimeout, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2DeadPeerDetectionTimeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2DeadPeerDetectionTimeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2NATTKeepaliveTimeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2NATTKeepaliveTimeout, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2NATTKeepaliveTimeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2NATTKeepaliveTimeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_AntiReplayWindowSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_AntiReplayWindowSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_AntiReplayWindowSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_AntiReplayWindowSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_DoNotFragment(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_DoNotFragment, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_DoNotFragment(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_DoNotFragment, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_DSCPMarkPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_DSCPMarkPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_DSCPMarkPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_DSCPMarkPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2SATrafficLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2SATrafficLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2SATrafficLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2SATrafficLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2SATimeLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2SATimeLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2SATimeLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2SATimeLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_IKEv2SAExpiryAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_IKEv2SAExpiryAction, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_IKEv2SAExpiryAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_IKEv2SAExpiryAction, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_ChildSATrafficLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_ChildSATrafficLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_ChildSATrafficLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_ChildSATrafficLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_ChildSATimeLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_ChildSATimeLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_ChildSATimeLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_ChildSATimeLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_ChildSAExpiryAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_ChildSAExpiryAction, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_ChildSAExpiryAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_ChildSAExpiryAction, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPt_SentCPAttrNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPt_SentCPAttrNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPt_SentCPAttrNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPt_SentCPAttrNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPtSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPtSt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPtSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPtSt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPtSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPtSt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPtSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPtSt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPtSt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPtSt_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPtSt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPtSt_Type, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIPtSt_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIPtSt_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIPtSt_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIPtSt_Value, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DITt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DITt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DITt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DITt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DITt_TunnelInterface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DITt_TunnelInterface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DITt_TunneledInterface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DITt_TunneledInterface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DITt_Filters(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DITt_Filters, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DITtS_DecryptionErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DITtS_DecryptionErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DITtS_IntegrityErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DITtS_IntegrityErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DITtS_ReplayErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DITtS_ReplayErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DITtS_PolicyErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DITtS_PolicyErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DITtS_OtherReceiveErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DITtS_OtherReceiveErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_Status_2683(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Status_2683, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_Alias_2684(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Alias_2684, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_Tunnel(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Tunnel, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_LocalAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_LocalAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_RemoteAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_RemoteAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_EncryptionAlgorithm(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_EncryptionAlgorithm, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_EncryptionKeyLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_EncryptionKeyLength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_PseudoRandomFunction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_PseudoRandomFunction, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_IntegrityAlgorithm(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_IntegrityAlgorithm, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_DiffieHellmanGroupTransform(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_DiffieHellmanGroupTransform, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_CreationTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_CreationTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_NATDetected(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_NATDetected, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_ReceivedCPAttrNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_ReceivedCPAttrNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_ChildSANumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_ChildSANumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_BytesSent_2697(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_BytesSent_2697, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_BytesReceived_2698(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_BytesReceived_2698, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_PacketsSent_2699(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_PacketsSent_2699, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_PacketsReceived_2700(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_PacketsReceived_2700, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_ErrorsSent_2701(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_ErrorsSent_2701, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_DecryptionErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_DecryptionErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_IntegrityErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_IntegrityErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItS_OtherReceiveErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItS_OtherReceiveErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItRt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItRt_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItRt_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItRt_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItCt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItCt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItCt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItCt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIItCt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIItCt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIItCt_InboundSPI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItCt_InboundSPI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItCt_OutboundSPI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItCt_OutboundSPI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItCt_CreationTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItCt_CreationTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItCtS_BytesSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItCtS_BytesSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItCtS_BytesReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItCtS_BytesReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItCtS_PacketsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItCtS_PacketsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItCtS_PacketsReceived(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItCtS_PacketsReceived, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItCtS_ErrorsSent(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItCtS_ErrorsSent, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItCtS_DecryptionErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItCtS_DecryptionErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItCtS_IntegrityErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItCtS_IntegrityErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItCtS_ReplayErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItCtS_ReplayErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItCtS_PolicyErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItCtS_PolicyErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIItCtS_OtherReceiveErrors(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIItCtS_OtherReceiveErrors, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DC_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DC_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DC_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DC_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DC_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DC_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DC_AllowedList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DC_AllowedList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DC_AllowedList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DC_AllowedList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DC_URL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DC_URL, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DC_URL(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DC_URL, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DR_RouterNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DR_RouterNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRt_IPv4ForwardingNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRt_IPv4ForwardingNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRt_IPv6ForwardingNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRt_IPv6ForwardingNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRtIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRtIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRtIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRtIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRtIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRtIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRtIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRtIt_StaticRoute(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_StaticRoute, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRtIt_DestIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_DestIPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRtIt_DestIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRtIt_DestIPAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRtIt_DestSubnetMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_DestSubnetMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRtIt_DestSubnetMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRtIt_DestSubnetMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRtIt_ForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_ForwardingPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRtIt_ForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRtIt_ForwardingPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRtIt_GatewayIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_GatewayIPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRtIt_GatewayIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRtIt_GatewayIPAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRtIt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRtIt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRtIt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRtIt_Origin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_Origin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRtIt_ForwardingMetric(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_ForwardingMetric, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRtIt_ForwardingMetric(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRtIt_ForwardingMetric, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRtIt_Enable_2757(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_Enable_2757, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRtIt_Enable_2757(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRtIt_Enable_2757, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRtIt_Status_2759(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_Status_2759, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRtIt_Alias_2760(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_Alias_2760, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRtIt_Alias_2760(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRtIt_Alias_2760, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRtIt_DestIPPrefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_DestIPPrefix, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRtIt_DestIPPrefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRtIt_DestIPPrefix, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRtIt_ForwardingPolicy_2764(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_ForwardingPolicy_2764, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRtIt_ForwardingPolicy_2764(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRtIt_ForwardingPolicy_2764, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRtIt_NextHop(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_NextHop, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRtIt_NextHop(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRtIt_NextHop, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRtIt_Interface_2768(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_Interface_2768, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRtIt_Interface_2768(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRtIt_Interface_2768, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRtIt_Origin_2770(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_Origin_2770, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRtIt_ForwardingMetric_2771(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_ForwardingMetric_2771, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRtIt_ForwardingMetric_2771(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRtIt_ForwardingMetric_2771, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRtIt_ExpirationTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRtIt_ExpirationTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRR_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRR_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRR_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRR_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRR_SupportedModes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRR_SupportedModes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRR_InterfaceSettingNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRR_InterfaceSettingNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRIt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRIt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRIt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRIt_AcceptRA(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_AcceptRA, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRIt_AcceptRA(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRIt_AcceptRA, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRRIt_SendRA(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_SendRA, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRRIt_SendRA(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRRIt_SendRA, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRR_Enable_2789(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRR_Enable_2789, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRR_Enable_2789(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRR_Enable_2789, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRR_InterfaceSettingNumberOfEntries_2791(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRR_InterfaceSettingNumberOfEntries_2791, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRIt_Status_2792(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_Status_2792, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRIt_Interface_2793(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_Interface_2793, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRIt_SourceRouter(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_SourceRouter, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRIt_PreferredRouteFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_PreferredRouteFlag, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRIt_Prefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_Prefix, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRRIt_RouteLifetime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRRIt_RouteLifetime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DN_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DN_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DN_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DN_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DN_InterfaceSettingNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DN_InterfaceSettingNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DNIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DNIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNIt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNIt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNIt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNIt_RetransTimer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_RetransTimer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNIt_RetransTimer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNIt_RetransTimer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNIt_RtrSolicitationInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_RtrSolicitationInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNIt_RtrSolicitationInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNIt_RtrSolicitationInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNIt_MaxRtrSolicitations(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_MaxRtrSolicitations, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNIt_MaxRtrSolicitations(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNIt_MaxRtrSolicitations, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNIt_NUDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_NUDEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNIt_NUDEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNIt_NUDEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNIt_RSEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_RSEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNIt_RSEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNIt_RSEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DR_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DR_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DR_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DR_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DR_InterfaceSettingNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DR_InterfaceSettingNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_ManualPrefixes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_ManualPrefixes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_ManualPrefixes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_ManualPrefixes, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_Prefixes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_Prefixes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_Prefixes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_Prefixes, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_MaxRtrAdvInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_MaxRtrAdvInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_MaxRtrAdvInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_MaxRtrAdvInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_MinRtrAdvInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_MinRtrAdvInterval, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_MinRtrAdvInterval(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_MinRtrAdvInterval, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvDefaultLifetime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvDefaultLifetime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvDefaultLifetime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvDefaultLifetime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvManagedFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvManagedFlag, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvManagedFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvManagedFlag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvOtherConfigFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvOtherConfigFlag, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvOtherConfigFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvOtherConfigFlag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvMobileAgentFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvMobileAgentFlag, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvMobileAgentFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvMobileAgentFlag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvPreferredRouterFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvPreferredRouterFlag, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvPreferredRouterFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvPreferredRouterFlag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvNDProxyFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvNDProxyFlag, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvNDProxyFlag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvNDProxyFlag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvLinkMTU(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvLinkMTU, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvLinkMTU(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvLinkMTU, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvReachableTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvReachableTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvReachableTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvReachableTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvRetransTimer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvRetransTimer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvRetransTimer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvRetransTimer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_AdvCurHopLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_AdvCurHopLimit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRIt_AdvCurHopLimit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRIt_AdvCurHopLimit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRIt_OptionNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRIt_OptionNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DRItOt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRItOt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRItOt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRItOt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRItOt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRItOt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRItOt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRItOt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRItOt_Tag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRItOt_Tag, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRItOt_Tag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRItOt_Tag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DRItOt_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DRItOt_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DRItOt_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DRItOt_Value, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DI_Enable_2865(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_Enable_2865, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DI_Enable_2865(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DI_Enable_2865, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DI_InterfaceSettingNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DI_InterfaceSettingNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_Enable_2868(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Enable_2868, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_Enable_2868(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_Enable_2868, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_Status_2870(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Status_2870, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_Alias_2871(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_Alias_2871, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_Alias_2871(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_Alias_2871, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_BorderRelayIPv4Addresses(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_BorderRelayIPv4Addresses, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_BorderRelayIPv4Addresses(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_BorderRelayIPv4Addresses, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_AllTrafficToBorderRelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_AllTrafficToBorderRelay, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_AllTrafficToBorderRelay(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_AllTrafficToBorderRelay, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_SPIPv6Prefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_SPIPv6Prefix, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_SPIPv6Prefix(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_SPIPv6Prefix, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_IPv4MaskLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_IPv4MaskLength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_IPv4MaskLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_IPv4MaskLength, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_AddressSource(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_AddressSource, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DIIt_AddressSource(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DIIt_AddressSource, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DIIt_TunnelInterface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_TunnelInterface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DIIt_TunneledInterface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DIIt_TunneledInterface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DD_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DD_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DD_InterfaceSettingNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_InterfaceSettingNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDIt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDIt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDIt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDIt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDIt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDIt_EndpointAssignmentPrecedence(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_EndpointAssignmentPrecedence, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDIt_EndpointAssignmentPrecedence(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDIt_EndpointAssignmentPrecedence, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDIt_EndpointAddressTypePrecedence(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_EndpointAddressTypePrecedence, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDIt_EndpointAddressTypePrecedence(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDIt_EndpointAddressTypePrecedence, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDIt_EndpointAddressInUse(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_EndpointAddressInUse, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDIt_EndpointName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_EndpointName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDIt_EndpointName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDIt_EndpointName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDIt_EndpointAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_EndpointAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDIt_EndpointAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDIt_EndpointAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDIt_Origin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_Origin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDIt_TunnelInterface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_TunnelInterface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDIt_TunneledInterface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDIt_TunneledInterface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQ_MaxClassificationEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_MaxClassificationEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_MaxClassificationEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_MaxClassificationEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_ClassificationNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_ClassificationNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_ClassificationNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_ClassificationNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_MaxAppEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_MaxAppEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_MaxAppEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_MaxAppEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_AppNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_AppNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_AppNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_AppNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_MaxFlowEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_MaxFlowEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_MaxFlowEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_MaxFlowEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_FlowNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_FlowNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_FlowNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_FlowNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_MaxPolicerEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_MaxPolicerEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_MaxPolicerEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_MaxPolicerEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_PolicerNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_PolicerNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_PolicerNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_PolicerNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_MaxQueueEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_MaxQueueEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_MaxQueueEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_MaxQueueEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_QueueNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_QueueNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_QueueNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_QueueNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_QueueStatsNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_QueueStatsNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_QueueStatsNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_QueueStatsNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_MaxShaperEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_MaxShaperEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_MaxShaperEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_MaxShaperEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_ShaperNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_ShaperNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_ShaperNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_ShaperNumberOfEntries, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_DefaultForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_DefaultForwardingPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_DefaultForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_DefaultForwardingPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_DefaultTrafficClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_DefaultTrafficClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_DefaultTrafficClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_DefaultTrafficClass, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_DefaultPolicer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_DefaultPolicer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_DefaultPolicer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_DefaultPolicer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_DefaultQueue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_DefaultQueue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_DefaultQueue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_DefaultQueue, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_DefaultDSCPMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_DefaultDSCPMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_DefaultDSCPMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_DefaultDSCPMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_DefaultEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_DefaultEthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_DefaultEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_DefaultEthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_DefaultInnerEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_DefaultInnerEthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_DefaultInnerEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_DefaultInnerEthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQ_AvailableAppList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQ_AvailableAppList, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQ_AvailableAppList(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQ_AvailableAppList, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQCt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_Order, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_Order, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DHCPType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DHCPType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DHCPType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DHCPType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_AllInterfaces(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_AllInterfaces, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_AllInterfaces(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_AllInterfaces, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestIP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestIP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestIPExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestIPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceIP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceIP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceIPExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceIPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceIPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_Protocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_Protocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_ProtocolExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_ProtocolExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_ProtocolExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_ProtocolExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestPortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestPortRangeMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestPortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestPortRangeMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestPortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestPortExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestPortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestPortExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourcePort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourcePort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourcePort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourcePort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourcePortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourcePortRangeMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourcePortRangeMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourcePortRangeMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourcePortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourcePortExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourcePortExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourcePortExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceMACMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceMACMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceMACMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceMACMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceMACExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceMACExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceMACExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceMACExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestMACAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestMACAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestMACAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestMACMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestMACMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestMACMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestMACMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestMACExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestMACExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestMACExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestMACExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_Ethertype(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_Ethertype, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_Ethertype(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_Ethertype, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_EthertypeExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_EthertypeExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_EthertypeExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_EthertypeExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SSAP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SSAP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SSAP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SSAP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SSAPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SSAPExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SSAPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SSAPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DSAP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DSAP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DSAP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DSAP, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DSAPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DSAPExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DSAPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DSAPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_LLCControl(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_LLCControl, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_LLCControl(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_LLCControl, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_LLCControlExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_LLCControlExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_LLCControlExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_LLCControlExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SNAPOUI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SNAPOUI, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SNAPOUI(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SNAPOUI, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SNAPOUIExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SNAPOUIExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SNAPOUIExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SNAPOUIExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceVendorClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceVendorClassID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceVendorClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceVendorClassID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceVendorClassIDv6(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceVendorClassIDv6, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceVendorClassIDv6(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceVendorClassIDv6, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceVendorClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceVendorClassIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceVendorClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceVendorClassIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceVendorClassIDMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceVendorClassIDMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestVendorClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestVendorClassID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestVendorClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestVendorClassID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestVendorClassIDv6(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestVendorClassIDv6, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestVendorClassIDv6(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestVendorClassIDv6, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestVendorClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestVendorClassIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestVendorClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestVendorClassIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestVendorClassIDMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestVendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestVendorClassIDMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceClientID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceClientID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceClientID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceClientID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceClientIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceClientIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceClientIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceClientIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestClientID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestClientID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestClientID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestClientID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestClientIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestClientIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestClientIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestClientIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceUserClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceUserClassID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceUserClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceUserClassID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceUserClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceUserClassIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceUserClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceUserClassIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestUserClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestUserClassID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestUserClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestUserClassID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestUserClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestUserClassIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestUserClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestUserClassIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceVendorSpecificInfo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceVendorSpecificInfo, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceVendorSpecificInfo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceVendorSpecificInfo, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceVendorSpecificInfoExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceVendorSpecificInfoExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceVendorSpecificInfoExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceVendorSpecificInfoExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceVendorSpecificInfoEnterprise(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceVendorSpecificInfoEnterprise, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceVendorSpecificInfoEnterprise(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceVendorSpecificInfoEnterprise, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_SourceVendorSpecificInfoSubOption(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_SourceVendorSpecificInfoSubOption, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_SourceVendorSpecificInfoSubOption(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_SourceVendorSpecificInfoSubOption, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestVendorSpecificInfo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestVendorSpecificInfo, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestVendorSpecificInfo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestVendorSpecificInfo, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestVendorSpecificInfoExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestVendorSpecificInfoExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestVendorSpecificInfoExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestVendorSpecificInfoExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestVendorSpecificInfoEnterprise(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestVendorSpecificInfoEnterprise, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestVendorSpecificInfoEnterprise(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestVendorSpecificInfoEnterprise, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DestVendorSpecificInfoSubOption(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DestVendorSpecificInfoSubOption, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DestVendorSpecificInfoSubOption(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DestVendorSpecificInfoSubOption, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_TCPACK(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_TCPACK, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_TCPACK(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_TCPACK, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_TCPACKExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_TCPACKExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_TCPACKExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_TCPACKExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_IPLengthMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_IPLengthMin, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_IPLengthMin(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_IPLengthMin, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_IPLengthMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_IPLengthMax, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_IPLengthMax(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_IPLengthMax, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_IPLengthExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_IPLengthExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_IPLengthExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_IPLengthExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DSCPCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DSCPCheck, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DSCPCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DSCPCheck, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DSCPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DSCPExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DSCPExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DSCPExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_DSCPMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_DSCPMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_DSCPMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_DSCPMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_EthernetPriorityCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_EthernetPriorityCheck, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_EthernetPriorityCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_EthernetPriorityCheck, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_EthernetPriorityExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_EthernetPriorityExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_EthernetPriorityExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_EthernetPriorityExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_EthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_EthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_EthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_EthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_InnerEthernetPriorityCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_InnerEthernetPriorityCheck, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_InnerEthernetPriorityCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_InnerEthernetPriorityCheck, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_InnerEthernetPriorityExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_InnerEthernetPriorityExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_InnerEthernetPriorityExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_InnerEthernetPriorityExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_InnerEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_InnerEthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_InnerEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_InnerEthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_EthernetDEICheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_EthernetDEICheck, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_EthernetDEICheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_EthernetDEICheck, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_EthernetDEIExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_EthernetDEIExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_EthernetDEIExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_EthernetDEIExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_VLANIDCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_VLANIDCheck, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_VLANIDCheck(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_VLANIDCheck, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_VLANIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_VLANIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_VLANIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_VLANIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_OutOfBandInfo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_OutOfBandInfo, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_OutOfBandInfo(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_OutOfBandInfo, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_ForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_ForwardingPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_ForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_ForwardingPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_TrafficClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_TrafficClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_TrafficClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_TrafficClass, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_Policer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_Policer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_Policer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_Policer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQCt_App(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQCt_App, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQCt_App(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQCt_App, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_ProtocolIdentifier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_ProtocolIdentifier, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_ProtocolIdentifier(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_ProtocolIdentifier, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_Name, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_DefaultForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_DefaultForwardingPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_DefaultForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_DefaultForwardingPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_DefaultTrafficClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_DefaultTrafficClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_DefaultTrafficClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_DefaultTrafficClass, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_DefaultPolicer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_DefaultPolicer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_DefaultPolicer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_DefaultPolicer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_DefaultDSCPMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_DefaultDSCPMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_DefaultDSCPMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_DefaultDSCPMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_DefaultEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_DefaultEthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_DefaultEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_DefaultEthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQAt_DefaultInnerEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQAt_DefaultInnerEthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQAt_DefaultInnerEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQAt_DefaultInnerEthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_Type, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_TypeParameters(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_TypeParameters, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_TypeParameters(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_TypeParameters, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_Name, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_Name(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_Name, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_App(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_App, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_App(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_App, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_ForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_ForwardingPolicy, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_ForwardingPolicy(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_ForwardingPolicy, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_TrafficClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_TrafficClass, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_TrafficClass(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_TrafficClass, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_Policer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_Policer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_Policer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_Policer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_DSCPMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_DSCPMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_DSCPMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_DSCPMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_EthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_EthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_EthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_EthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQFt_InnerEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQFt_InnerEthernetPriorityMark, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQFt_InnerEthernetPriorityMark(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQFt_InnerEthernetPriorityMark, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_CommittedRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_CommittedRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_CommittedRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_CommittedRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_CommittedBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_CommittedBurstSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_CommittedBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_CommittedBurstSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_ExcessBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_ExcessBurstSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_ExcessBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_ExcessBurstSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_PeakRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_PeakRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_PeakRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_PeakRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_PeakBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_PeakBurstSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_PeakBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_PeakBurstSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_MeterType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_MeterType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_MeterType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_MeterType, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_PossibleMeterTypes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_PossibleMeterTypes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_PossibleMeterTypes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_PossibleMeterTypes, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_ConformingAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_ConformingAction, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_ConformingAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_ConformingAction, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_PartialConformingAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_PartialConformingAction, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_PartialConformingAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_PartialConformingAction, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_NonConformingAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_NonConformingAction, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQPt_NonConformingAction(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQPt_NonConformingAction, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQPt_TotalCountedPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_TotalCountedPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQPt_TotalCountedBytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_TotalCountedBytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQPt_ConformingCountedPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_ConformingCountedPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQPt_ConformingCountedBytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_ConformingCountedBytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQPt_PartiallyConformingCountedPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_PartiallyConformingCountedPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQPt_PartiallyConformingCountedBytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_PartiallyConformingCountedBytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQPt_NonConformingCountedPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_NonConformingCountedPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQPt_NonConformingCountedBytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQPt_NonConformingCountedBytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_TrafficClasses(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_TrafficClasses, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_TrafficClasses(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_TrafficClasses, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_AllInterfaces(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_AllInterfaces, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_AllInterfaces(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_AllInterfaces, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_HardwareAssisted(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_HardwareAssisted, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_BufferLength(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_BufferLength, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_Weight(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Weight, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_Weight(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_Weight, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_Precedence(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Precedence, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_Precedence(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_Precedence, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_REDThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_REDThreshold, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_REDThreshold(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_REDThreshold, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_REDPercentage(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_REDPercentage, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_REDPercentage(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_REDPercentage, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_DropAlgorithm(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_DropAlgorithm, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_DropAlgorithm(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_DropAlgorithm, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_SchedulerAlgorithm(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_SchedulerAlgorithm, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_SchedulerAlgorithm(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_SchedulerAlgorithm, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_ShapingRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_ShapingRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_ShapingRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_ShapingRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_ShapingBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_ShapingBurstSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_ShapingBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_ShapingBurstSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_Enable_3222(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Enable_3222, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_Enable_3222(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_Enable_3222, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_Status_3224(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Status_3224, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_Alias_3225(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Alias_3225, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_Alias_3225(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_Alias_3225, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_Queue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Queue, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_Queue(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_Queue, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_Interface_3229(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_Interface_3229, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQQt_Interface_3229(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQQt_Interface_3229, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQQt_OutputPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_OutputPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_OutputBytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_OutputBytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_DroppedPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_DroppedPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_DroppedBytes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_DroppedBytes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_QueueOccupancyPackets(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_QueueOccupancyPackets, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQQt_QueueOccupancyPercentage(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQQt_QueueOccupancyPercentage, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQSt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQSt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQSt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQSt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DQSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQSt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQSt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQSt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQSt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQSt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQSt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQSt_ShapingRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQSt_ShapingRate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQSt_ShapingRate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQSt_ShapingRate, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DQSt_ShapingBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DQSt_ShapingBurstSize, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DQSt_ShapingBurstSize(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DQSt_ShapingBurstSize, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DL_ConfigPassword(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DL_ConfigPassword, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DL_ConfigPassword(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DL_ConfigPassword, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DH_HostNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DH_HostNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHHt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHHt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DHHt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DHHt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DHHt_PhysAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHHt_PhysAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHHt_IPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHHt_IPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHHt_AddressSource(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHHt_AddressSource, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHHt_DHCPClient(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHHt_DHCPClient, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHHt_LeaseTimeRemaining(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHHt_LeaseTimeRemaining, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHHt_AssociatedDevice(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHHt_AssociatedDevice, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHHt_Layer1Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHHt_Layer1Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHHt_Layer3Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHHt_Layer3Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHHt_VendorClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHHt_VendorClassID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHHt_ClientID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHHt_ClientID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHHt_UserClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHHt_UserClassID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHHt_HostName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHHt_HostName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHHt_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHHt_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHHt_IPv4AddressNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHHt_IPv4AddressNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHHt_IPv6AddressNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHHt_IPv6AddressNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHHtIt_IPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHHtIt_IPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DHHtIt_IPAddress_3269(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DHHtIt_IPAddress_3269, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DD_SupportedRecordTypes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_SupportedRecordTypes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDC_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDC_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDC_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDC_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDC_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDC_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDC_ServerNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDC_ServerNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSt_DNSServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSt_DNSServer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSt_DNSServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSt_DNSServer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCSt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCSt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCSt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCSt_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDR_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDR_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDR_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDR_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDR_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDR_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDR_ForwardNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDR_ForwardNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDRFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDRFt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDRFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDRFt_DNSServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_DNSServer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_DNSServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_DNSServer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDRFt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDRFt_Type(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_Type, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDN_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDN_DiagnosticsState, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDDN_DiagnosticsState(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDDN_DiagnosticsState, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDDN_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDN_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDDN_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDDN_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDDN_HostName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDN_HostName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDDN_HostName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDDN_HostName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDDN_DNSServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDN_DNSServer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDDN_DNSServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDDN_DNSServer, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDDN_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDN_Timeout, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDDN_Timeout(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDDN_Timeout, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDDN_NumberOfRepetitions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDN_NumberOfRepetitions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDDN_NumberOfRepetitions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDDN_NumberOfRepetitions, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDDN_SuccessCount(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDN_SuccessCount, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDN_ResultNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDN_ResultNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDNRt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDNRt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDNRt_AnswerType(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDNRt_AnswerType, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDNRt_HostNameReturned(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDNRt_HostNameReturned, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDNRt_IPAddresses(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDNRt_IPAddresses, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDNRt_DNSServerIP(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDNRt_DNSServerIP, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDDNRt_ResponseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDDNRt_ResponseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDS_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDS_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDS_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDS_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDS_ServiceNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDS_ServiceNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSSt_InstanceName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSSt_InstanceName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSSt_ApplicationProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSSt_ApplicationProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSSt_TransportProtocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSSt_TransportProtocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSSt_Domain(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSSt_Domain, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSSt_Port(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSSt_Port, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSSt_Target(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSSt_Target, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSSt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSSt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSSt_LastUpdate(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSSt_LastUpdate, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSSt_Host(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSSt_Host, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSSt_TimeToLive(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSSt_TimeToLive, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSSt_Priority(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSSt_Priority, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSSt_Weight(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSSt_Weight, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSSt_TextRecordNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSSt_TextRecordNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSStTt_Key(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSStTt_Key, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSStTt_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSStTt_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DN_InterfaceSettingNumberOfEntries_3337(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DN_InterfaceSettingNumberOfEntries_3337, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DN_PortMappingNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DN_PortMappingNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DNIt_Enable_3339(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_Enable_3339, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNIt_Enable_3339(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNIt_Enable_3339, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNIt_Status_3341(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_Status_3341, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DNIt_Alias_3342(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_Alias_3342, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNIt_Alias_3342(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNIt_Alias_3342, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNIt_Interface_3344(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNIt_Interface_3344, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNIt_Interface_3344(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNIt_Interface_3344, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNPt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNPt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNPt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNPt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DNPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNPt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNPt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNPt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNPt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNPt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNPt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNPt_AllInterfaces(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNPt_AllInterfaces, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNPt_AllInterfaces(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNPt_AllInterfaces, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNPt_LeaseDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNPt_LeaseDuration, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNPt_LeaseDuration(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNPt_LeaseDuration, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNPt_RemoteHost(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNPt_RemoteHost, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNPt_RemoteHost(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNPt_RemoteHost, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNPt_ExternalPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNPt_ExternalPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNPt_ExternalPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNPt_ExternalPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNPt_ExternalPortEndRange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNPt_ExternalPortEndRange, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNPt_ExternalPortEndRange(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNPt_ExternalPortEndRange, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNPt_InternalPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNPt_InternalPort, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNPt_InternalPort(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNPt_InternalPort, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNPt_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNPt_Protocol, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNPt_Protocol(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNPt_Protocol, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNPt_InternalClient(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNPt_InternalClient, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNPt_InternalClient(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNPt_InternalClient, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DNPt_Description(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DNPt_Description, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DNPt_Description(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DNPt_Description, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DD_ClientNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_ClientNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_Enable_3372(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_Enable_3372, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCt_Enable_3372(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCt_Enable_3372, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_Alias_3374(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_Alias_3374, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCt_Alias_3374(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCt_Alias_3374, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_Status_3376(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_Status_3376, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_DHCPStatus(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_DHCPStatus, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_Renew(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_Renew, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCt_Renew(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCt_Renew, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_IPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_IPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_SubnetMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_SubnetMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_IPRouters(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_IPRouters, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_DNSServers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_DNSServers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_LeaseTimeRemaining(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_LeaseTimeRemaining, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_DHCPServer(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_DHCPServer, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_PassthroughEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_PassthroughEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCt_PassthroughEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCt_PassthroughEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_PassthroughDHCPPool(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_PassthroughDHCPPool, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCt_PassthroughDHCPPool(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCt_PassthroughDHCPPool, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_SentOptionNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_SentOptionNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_ReqOptionNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_ReqOptionNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSt_Tag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSt_Tag, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSt_Tag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSt_Tag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSt_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSt_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSt_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSt_Value, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtRt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtRt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtRt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtRt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtRt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtRt_Order, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtRt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtRt_Order, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtRt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtRt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtRt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtRt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtRt_Tag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtRt_Tag, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtRt_Tag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtRt_Tag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtRt_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtRt_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDS_Enable_3409(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDS_Enable_3409, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDS_Enable_3409(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDS_Enable_3409, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDS_PoolNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDS_PoolNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_Status(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_Status, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_Order, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_Order, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_VendorClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_VendorClassID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_VendorClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_VendorClassID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_VendorClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_VendorClassIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_VendorClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_VendorClassIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_VendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_VendorClassIDMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_VendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_VendorClassIDMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_ClientID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_ClientID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_ClientID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_ClientID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_ClientIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_ClientIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_ClientIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_ClientIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_UserClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_UserClassID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_UserClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_UserClassID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_UserClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_UserClassIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_UserClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_UserClassIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_Chaddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_Chaddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_Chaddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_Chaddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_ChaddrMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_ChaddrMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_ChaddrMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_ChaddrMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_ChaddrExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_ChaddrExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_ChaddrExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_ChaddrExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_MinAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_MinAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_MinAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_MinAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_MaxAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_MaxAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_MaxAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_MaxAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_ReservedAddresses(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_ReservedAddresses, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_ReservedAddresses(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_ReservedAddresses, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_SubnetMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_SubnetMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_SubnetMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_SubnetMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_DNSServers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_DNSServers, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_DNSServers(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_DNSServers, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_DomainName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_DomainName, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_DomainName(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_DomainName, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_IPRouters(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_IPRouters, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_IPRouters(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_IPRouters, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_LeaseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_LeaseTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_LeaseTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_LeaseTime, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_StaticAddressNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_StaticAddressNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSPt_OptionNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_OptionNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSPt_ClientNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_ClientNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSPtSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPtSt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPtSt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPtSt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPtSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPtSt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPtSt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPtSt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPtSt_Chaddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPtSt_Chaddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPtSt_Chaddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPtSt_Chaddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPtSt_Yiaddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPtSt_Yiaddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPtSt_Yiaddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPtSt_Yiaddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPtOt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPtOt_Enable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPtOt_Enable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPtOt_Enable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPtOt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPtOt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPtOt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPtOt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPtOt_Tag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPtOt_Tag, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPtOt_Tag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPtOt_Tag, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPtOt_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPtOt_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPtOt_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPtOt_Value, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPtCt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPtCt_Alias, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPtCt_Alias(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPtCt_Alias, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPtCt_Chaddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPtCt_Chaddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSPtCt_Active(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPtCt_Active, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSPtCt_IPv4AddressNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPtCt_IPv4AddressNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSPtCt_OptionNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPtCt_OptionNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSPtCtIt_IPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPtCtIt_IPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSPtCtIt_LeaseTimeRemaining(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPtCtIt_LeaseTimeRemaining, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSPtCtOt_Tag(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPtCtOt_Tag, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSPtCtOt_Value(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPtCtOt_Value, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDR_Enable_3486(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDR_Enable_3486, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDR_Enable_3486(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDR_Enable_3486, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDR_Status_3488(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDR_Status_3488, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDR_ForwardingNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDR_ForwardingNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDRFt_Enable_3490(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_Enable_3490, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_Enable_3490(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_Enable_3490, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDRFt_Status_3492(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_Status_3492, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDRFt_Alias_3493(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_Alias_3493, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_Alias_3493(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_Alias_3493, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDRFt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_Order, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_Order(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_Order, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDRFt_Interface_3497(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_Interface_3497, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_Interface_3497(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_Interface_3497, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDRFt_VendorClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_VendorClassID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_VendorClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_VendorClassID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDRFt_VendorClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_VendorClassIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_VendorClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_VendorClassIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDRFt_VendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_VendorClassIDMode, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_VendorClassIDMode(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_VendorClassIDMode, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDRFt_ClientID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_ClientID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_ClientID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_ClientID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDRFt_ClientIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_ClientIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_ClientIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_ClientIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDRFt_UserClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_UserClassID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_UserClassID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_UserClassID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDRFt_UserClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_UserClassIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_UserClassIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_UserClassIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDRFt_Chaddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_Chaddr, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_Chaddr(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_Chaddr, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDRFt_ChaddrMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_ChaddrMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_ChaddrMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_ChaddrMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDRFt_ChaddrExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_ChaddrExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_ChaddrExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_ChaddrExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDRFt_LocallyServed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_LocallyServed, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_LocallyServed(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_LocallyServed, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDRFt_DHCPServerIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDRFt_DHCPServerIPAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDRFt_DHCPServerIPAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDRFt_DHCPServerIPAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DD_ClientNumberOfEntries_3523(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DD_ClientNumberOfEntries_3523, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DD_ClientNumberOfEntries_3523(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DD_ClientNumberOfEntries_3523, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_Enable_3525(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_Enable_3525, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCt_Enable_3525(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCt_Enable_3525, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_Alias_3527(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_Alias_3527, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCt_Alias_3527(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCt_Alias_3527, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_Interface, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCt_Interface(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCt_Interface, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_Status_3531(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_Status_3531, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_DUID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_DUID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_RequestAddresses(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_RequestAddresses, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCt_RequestAddresses(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCt_RequestAddresses, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_RequestPrefixes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_RequestPrefixes, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCt_RequestPrefixes(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCt_RequestPrefixes, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_RapidCommit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_RapidCommit, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCt_RapidCommit(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCt_RapidCommit, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_Renew_3539(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_Renew_3539, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCt_Renew_3539(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCt_Renew_3539, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_SuggestedT1(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_SuggestedT1, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCt_SuggestedT1(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCt_SuggestedT1, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_SuggestedT2(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_SuggestedT2, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCt_SuggestedT2(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCt_SuggestedT2, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_SupportedOptions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_SupportedOptions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_RequestedOptions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_RequestedOptions, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCt_RequestedOptions(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCt_RequestedOptions, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCt_ServerNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_ServerNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_SentOptionNumberOfEntries_3549(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_SentOptionNumberOfEntries_3549, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCt_ReceivedOptionNumberOfEntries(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCt_ReceivedOptionNumberOfEntries, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtSt_SourceAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSt_SourceAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtSt_DUID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSt_DUID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtSt_InformationRefreshTime(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSt_InformationRefreshTime, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtSt_Enable_3554(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSt_Enable_3554, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSt_Enable_3554(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSt_Enable_3554, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSt_Alias_3556(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSt_Alias_3556, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSt_Alias_3556(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSt_Alias_3556, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSt_Tag_3558(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSt_Tag_3558, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSt_Tag_3558(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSt_Tag_3558, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtSt_Value_3560(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtSt_Value_3560, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDCtSt_Value_3560(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDCtSt_Value_3560, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDCtRt_Tag_3562(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtRt_Tag_3562, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtRt_Value_3563(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtRt_Value_3563, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDCtRt_Server(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDCtRt_Server, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDS_Enable_3565(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDS_Enable_3565, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDS_Enable_3565(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDS_Enable_3565, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDS_PoolNumberOfEntries_3567(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDS_PoolNumberOfEntries_3567, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSPt_Enable_3568(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_Enable_3568, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_Enable_3568(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_Enable_3568, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_Status_3570(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_Status_3570, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int get_DDSPt_Alias_3571(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_Alias_3571, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_Alias_3571(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_Alias_3571, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_Order_3573(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_Order_3573, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_Order_3573(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_Order_3573, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_Interface_3575(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_Interface_3575, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_Interface_3575(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_Interface_3575, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_DUID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_DUID, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_DUID(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_DUID, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_DUIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_DUIDExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_DUIDExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_DUIDExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_VendorClassID_3581(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_VendorClassID_3581, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_VendorClassID_3581(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_VendorClassID_3581, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_VendorClassIDExclude_3583(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_VendorClassIDExclude_3583, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_VendorClassIDExclude_3583(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_VendorClassIDExclude_3583, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_UserClassID_3585(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_UserClassID_3585, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_UserClassID_3585(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_UserClassID_3585, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_UserClassIDExclude_3587(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_UserClassIDExclude_3587, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_UserClassIDExclude_3587(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_UserClassIDExclude_3587, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_SourceAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_SourceAddress, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_SourceAddress(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_SourceAddress, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_SourceAddressMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_SourceAddressMask, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_SourceAddressMask(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_SourceAddressMask, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_SourceAddressExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_SourceAddressExclude, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_SourceAddressExclude(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_SourceAddressExclude, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_IANAEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_get(DDSPt_IANAEnable, value);
	if(ret)
	{
		return -1;
	}
	tr_log(LOG_DEBUG,"get value [%s]",value);
	return ret;
}
int set_DDSPt_IANAEnable(char * path_name, char *value)
{
	int ret = 0;
	tr_log(LOG_DEBUG,"path_name[%s]",path_name);
	ret = do_uci_set(DDSPt_IANAEnable, value);
	if(ret)
	{
		return (-1);
	}
	else
	{
		ret = do_uci_commit(MS);
		if(ret)
		{
			return (-1);
		}
	}
	tr_log(LOG_DEBUG,"set value [%s]",value);
	return ret;
}
int get_DDSPt_IANAManualPrefixes(char * path_name, char *value)
{
	int ret = 0;
	{
