/**
	Copyright(C) 2014 Skysoft Info&Tech Co.,Ltd. All right reserved.
	@file deviceinfo.c
	@brief deviceinfo Function File.
	@author Fred Cai (eric.huang@cdskysoft.com)
	@version 1.0
	@date 2015-01-13(Create)
	@todo Something in plan.
	@details detail description of this file.
**/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "deviceinfo.h"
#include "suci.h"

typedef struct deviceinfotable{
	char* name;
	char* value;
}devinfotable;

//persistent value in dev
devinfotable devt[]={
	{"DeviceInfo.Manufacturer","Workssys"},
	{"DeviceInfo.ManufacturerOUI","WKSOUI"},
	{"DeviceInfo.ModelName","Agent_5_0"},
	{"DeviceInfo.Description",""},
	{"DeviceInfo.ProductClass","TR_AGENT"},
	{"DeviceInfo.SerialNumber","158A"},
	{"DeviceInfo.HardwareVersion","1.0"},
	{"DeviceInfo.SoftwareVersion","1.0"},
	{"DeviceInfo.AdditionalHardwareVersion",""},
	{"DeviceInfo.AdditionalSoftwareVersion",""},
	//{"DeviceInfo.ProvisioningCode",""},
	//{"DeviceInfo.UpTime",""},
	//{"DeviceInfo.FirstUseDate",""},
	//{"DeviceInfo.VendorConfigFileNumberOfEntries",""},
	//{"DeviceInfo.SupportedDataModelNumberOfEntries",""},
	//{"DeviceInfo.ProcessorNumberOfEntries",""},
	//{"DeviceInfo.VendorLogFileNumberOfEntries",""},
	//{"DeviceInfo.LocationNumberOfEntries",""},
	{NULL,NULL}
};

void oneAgent_trace_enter(){;}
void oneAgent_trace_exit(){;}

int get_DEV_Persistent_Value(char* name, char* value)
{
	int ret = -1;
	devinfotable *ptab = NULL;
	for(ptab=devt;ptab->name!=NULL;ptab++){
		//read value 		
		if(strcmp(ptab->name,name)==0){
			strcpy(value,ptab->value);
			ret = 0;
			break;
		}		
	}
	return ret;
}


int get_DeviceInfo_Manufacturer(char* value)
{
	oneAgent_trace_enter();

	get_DEV_Persistent_Value("DeviceInfo.Manufacturer",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_ManufacturerOUI(char* value)
{
	oneAgent_trace_enter();

	get_DEV_Persistent_Value("DeviceInfo.ManufacturerOUI",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_ModelName(char* value)
{
	oneAgent_trace_enter();

	get_DEV_Persistent_Value("DeviceInfo.ModelName",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_Description(char* value)
{
	oneAgent_trace_enter();

	get_DEV_Persistent_Value("DeviceInfo.Description",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_ProductClass(char* value)
{
	oneAgent_trace_enter();

	get_DEV_Persistent_Value("DeviceInfo.ProductClass",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_SerialNumber(char* value)
{
	oneAgent_trace_enter();

	get_DEV_Persistent_Value("DeviceInfo.SerialNumber",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_HardwareVersion(char* value)
{
	oneAgent_trace_enter();

	get_DEV_Persistent_Value("DeviceInfo.HardwareVersion",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_SoftwareVersion(char* value)
{
	oneAgent_trace_enter();

	get_DEV_Persistent_Value("DeviceInfo.SoftwareVersion",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_AdditionalHardwareVersion(char* value)
{
	oneAgent_trace_enter();

	get_DEV_Persistent_Value("DeviceInfo.AdditionalHardwareVersion",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_AdditionalSoftwareVersion(char* value)
{
	oneAgent_trace_enter();

	get_DEV_Persistent_Value("DeviceInfo.AdditionalSoftwareVersion",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_ProvisioningCode(char* value)
{
	oneAgent_trace_enter();

	do_uci_get("DeviceInfo.ProvisioningCode",value);
	
	oneAgent_trace_exit();
	return 1;
}
int set_DeviceInfo_ProvisioningCode(char* value)
{
	oneAgent_trace_enter();

	do_uci_set("DeviceInfo.ProvisioningCode",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_UpTime(char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.UpTime",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_FirstUseDate(char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.FirstUseDate",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_VendorConfigFileNumberOfEntries(char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.VendorConfigFileNumberOfEntries",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_SupportedDataModelNumberOfEntries(char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.SupportedDataModelNumberOfEntries",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_ProcessorNumberOfEntries(char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.ProcessorNumberOfEntries",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_VendorLogFileNumberOfEntries(char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.VendorLogFileNumberOfEntries",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_LocationNumberOfEntries(char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.LocationNumberOfEntries",value);
	
	oneAgent_trace_exit();
	return 1;
}




int get_DeviceInfo_MemoryStatus_total(char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.MemoryStatus.total",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_MemoryStatus_free(char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.MemoryStatus.free",value);
	
	oneAgent_trace_exit();
	return 1;
}



int get_DeviceInfo_ProcessStatus_CPUUsage(char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.ProcessStatus.CPUUsage",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_ProcessStatus_ProcessNumberOfEntries(char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.ProcessStatus.ProcessNumberOfEntries",value);
	
	oneAgent_trace_exit();
	return 1;
}

//get from dev system
int get_DeviceInfo_ProcessStatus_Process_PID(char* i, char* value);
int get_DeviceInfo_ProcessStatus_Process_Command(char* i, char* value);
int get_DeviceInfo_ProcessStatus_Process_Size(char* i, char* value);
int get_DeviceInfo_ProcessStatus_Process_Priority(char* i, char* value);
int get_DeviceInfo_ProcessStatus_Process_CPUTime(char* i, char* value);
int get_DeviceInfo_ProcessStatus_Process_State(char* i, char* value);



int get_DeviceInfo_TemperatureStatus_TemperatureSensorNumberOfEntries(char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.TemperatureStatus.TemperatureSensorNumberOfEntries",value);
	
	oneAgent_trace_exit();
	return 1;
}

int get_DeviceInfo_TemperatureStatus_TemperatureSensor_Alias(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.TemperatureStatus.TemperatureSensor.Alias",value);
	
	oneAgent_trace_exit();
	return 1;
}
int set_DeviceInfo_TemperatureStatus_TemperatureSensor_Alias(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_set("DeviceInfo.TemperatureStatus.TemperatureSensor.Alias",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_Enable(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.TemperatureStatus.TemperatureSensor.Enable",value);
	
	oneAgent_trace_exit();
	return 1;
}
int set_DeviceInfo_TemperatureStatus_TemperatureSensor_Enable(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_set("DeviceInfo.TemperatureStatus.TemperatureSensor.Enable",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_Status(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.TemperatureStatus.TemperatureSensor.Status",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_Reset(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.TemperatureStatus.TemperatureSensor.Reset",value);
	
	oneAgent_trace_exit();
	return 1;
}
int set_DeviceInfo_TemperatureStatus_TemperatureSensor_Reset(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_set("DeviceInfo.TemperatureStatus.TemperatureSensor.Reset",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_ResetTime(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.TemperatureStatus.TemperatureSensor.ResetTime",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_Name(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.TemperatureStatus.TemperatureSensor.Name",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_Value(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.TemperatureStatus.TemperatureSensor.Value",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_LastUpdate(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.TemperatureStatus.TemperatureSensor.LastUpdate",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_MinValue(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.TemperatureStatus.TemperatureSensor.MinValue",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_MinTime(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.TemperatureStatus.TemperatureSensor.MinTime",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_MaxValue(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.TemperatureStatus.TemperatureSensor.MaxValue",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_MaxTime(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.TemperatureStatus.TemperatureSensor.MaxTime",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_LowAlarmValue(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.TemperatureStatus.TemperatureSensor.LowAlarmValue",value);
	
	oneAgent_trace_exit();
	return 1;
}
int set_DeviceInfo_TemperatureStatus_TemperatureSensor_LowAlarmValue(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_set("DeviceInfo.TemperatureStatus.TemperatureSensor.LowAlarmValue",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_LowAlarmTime(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.TemperatureStatus.TemperatureSensor.LowAlarmTime",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_HighAlarmValue(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.TemperatureStatus.TemperatureSensor.HighAlarmValue",value);
	
	oneAgent_trace_exit();
	return 1;
}
int set_DeviceInfo_TemperatureStatus_TemperatureSensor_HighAlarmValue(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_set("DeviceInfo.TemperatureStatus.TemperatureSensor.HighAlarmValue",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_PollingInterval(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.TemperatureStatus.TemperatureSensor.PollingInterval",value);
	
	oneAgent_trace_exit();
	return 1;
}
int set_DeviceInfo_TemperatureStatus_TemperatureSensor_PollingInterval(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_set("DeviceInfo.TemperatureStatus.TemperatureSensor.PollingInterval",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_HighAlarmTime(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.TemperatureStatus.TemperatureSensor.HighAlarmTime",value);
	
	oneAgent_trace_exit();
	return 1;
}



int get_DeviceInfo_NetworkProperties_MaxTCPWindowSize(char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.NetworkProperties.MaxTCPWindowSize",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_NetworkProperties_TCPImplementation(char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.NetworkProperties.TCPImplementation",value);
	
	oneAgent_trace_exit();
	return 1;
}

int get_DeviceInfo_NetworkProperties_Processor_Alias(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.NetworkProperties.Processor.Alias",value);
	
	oneAgent_trace_exit();
	return 1;
}
int set_DeviceInfo_NetworkProperties_Processor_Alias(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_set("DeviceInfo.NetworkProperties.Processor.Alias",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_NetworkProperties_Processor_Architecture(char* i,char* value)
{
	oneAgent_trace_enter();

	//do_uci_get("DeviceInfo.NetworkProperties.Processor.Architecture",value);
	
	oneAgent_trace_exit();
	return 1;
}


int get_DeviceInfo_VendorLogFile_Alias(char* i,char* value)
{
	oneAgent_trace_enter();

	do_uci_get("DeviceInfo.VendorLogFile.Alias",value);
	
	oneAgent_trace_exit();
	return 1;
}
int set_DeviceInfo_VendorLogFile_Alias(char* i,char* value)
{
	oneAgent_trace_enter();

	do_uci_set("DeviceInfo.VendorLogFile.Alias",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_VendorLogFile_Name(char* i,char* value)
{
	oneAgent_trace_enter();

	do_uci_get("DeviceInfo.VendorLogFile.Name",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_VendorLogFile_MaximumSize(char* i,char* value)
{
	oneAgent_trace_enter();

	do_uci_get("DeviceInfo.VendorLogFile.MaximumSize",value);
	
	oneAgent_trace_exit();
	return 1;
}
int get_DeviceInfo_VendorLogFile_Persistent(char* i,char* value)
{
	oneAgent_trace_enter();

	do_uci_get("DeviceInfo.VendorLogFile.Persistent",value);
	
	oneAgent_trace_exit();
	return 1;
}


