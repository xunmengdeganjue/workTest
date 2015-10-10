/**
	Copyright(C) 2014 Skysoft Info&Tech Co.,Ltd. All right reserved.
	@file deviceinfo.h
	@brief deviceinfo func header file.
	@author Fred Cai (eric.huang@cdskysoft.com)
	@version 1.0
	@date 2015-01-13(Create)
	@todo Something in plan.
	@details detail description of this file.
**/

#ifndef __DEVICEINFO_H__
#define __DEVICEINFO_H__

int get_DeviceInfo_Manufacturer(char* value);
//int set_DeviceInfo_Manufacturer(char* value);
int get_DeviceInfo_ManufacturerOUI(char* value);
//int set_DeviceInfo_ManufacturerOUI(char* value);
int get_DeviceInfo_ModelName(char* value);
//int set_DeviceInfo_ModelName(char* value);
int get_DeviceInfo_Description(char* value);
//int set_DeviceInfo_Description(char* value);
int get_DeviceInfo_ProductClass(char* value);
//int set_DeviceInfo_ProductClass(char* value);
int get_DeviceInfo_SerialNumber(char* value);
//int set_DeviceInfo_SerialNumber(char* value);
int get_DeviceInfo_HardwareVersion(char* value);
//int set_DeviceInfo_HardwareVersion(char* value);
int get_DeviceInfo_SoftwareVersion(char* value);
//int set_DeviceInfo_SoftwareVersion(char* value);
int get_DeviceInfo_AdditionalHardwareVersion(char* value);
//int set_DeviceInfo_AdditionalHardwareVersion(char* value);
int get_DeviceInfo_AdditionalSoftwareVersion(char* value);
//int set_DeviceInfo_AdditionalSoftwareVersion(char* value);
int get_DeviceInfo_ProvisioningCode(char* value);
int set_DeviceInfo_ProvisioningCode(char* value);
int get_DeviceInfo_UpTime(char* value);
//int set_DeviceInfo_UpTime(char* value);
int get_DeviceInfo_FirstUseDate(char* value);
//int set_DeviceInfo_FirstUseDate(char* value);
int get_DeviceInfo_VendorConfigFileNumberOfEntries(char* value);
//int set_DeviceInfo_VendorConfigFileNumberOfEntries(char* value);
int get_DeviceInfo_SupportedDataModelNumberOfEntries(char* value);
//int set_DeviceInfo_SupportedDataModelNumberOfEntries(char* value);
int get_DeviceInfo_ProcessorNumberOfEntries(char* value);
//int set_DeviceInfo_ProcessorNumberOfEntries(char* value);
int get_DeviceInfo_VendorLogFileNumberOfEntries(char* value);
//int set_DeviceInfo_VendorLogFileNumberOfEntries(char* value);
int get_DeviceInfo_LocationNumberOfEntries(char* value);
//int set_DeviceInfo_LocationNumberOfEntries(char* value);

int get_DeviceInfo_MemoryStatus_total(char* value);
int get_DeviceInfo_MemoryStatus_free(char* value);

int get_DeviceInfo_ProcessStatus_CPUUsage(char* value);
int get_DeviceInfo_ProcessStatus_ProcessNumberOfEntries(char* value);

int get_DeviceInfo_ProcessStatus_Process(char* i,char* PID, char* Command, char* Size,char* Priority,char* CPUTime,char* State);


int get_DeviceInfo_TemperatureStatus_TemperatureSensorNumberOfEntries(char* value);

int get_DeviceInfo_TemperatureStatus_TemperatureSensor_Alias(char* i,char* value);
int set_DeviceInfo_TemperatureStatus_TemperatureSensor_Alias(char* i,char* value);
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_Enable(char* i,char* value);
int set_DeviceInfo_TemperatureStatus_TemperatureSensor_Enable(char* i,char* value);
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_Status(char* i,char* value);
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_Reset(char* i,char* value);
int set_DeviceInfo_TemperatureStatus_TemperatureSensor_Reset(char* i,char* value);
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_ResetTime(char* i,char* value);
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_Name(char* i,char* value);
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_Value(char* i,char* value);
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_LastUpdate(char* i,char* value);
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_MinValue(char* i,char* value);
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_MinTime(char* i,char* value);
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_MaxValue(char* i,char* value);
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_MaxTime(char* i,char* value);
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_LowAlarmValue(char* i,char* value);
int set_DeviceInfo_TemperatureStatus_TemperatureSensor_LowAlarmValue(char* i,char* value);
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_LowAlarmTime(char* i,char* value);
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_HighAlarmValue(char* i,char* value);
int set_DeviceInfo_TemperatureStatus_TemperatureSensor_HighAlarmValue(char* i,char* value);
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_PollingInterval(char* i,char* value);
int set_DeviceInfo_TemperatureStatus_TemperatureSensor_PollingInterval(char* i,char* value);
int get_DeviceInfo_TemperatureStatus_TemperatureSensor_HighAlarmTime(char* i,char* value);


int get_DeviceInfo_NetworkProperties_MaxTCPWindowSize(char* value);
int get_DeviceInfo_NetworkProperties_TCPImplementation(char* value);

int get_DeviceInfo_NetworkProperties_Processor_Alias(char* i,char* value);
int set_DeviceInfo_NetworkProperties_Processor_Alias(char* i,char* value);
int get_DeviceInfo_NetworkProperties_Processor_Architecture(char* i,char* value);

int get_DeviceInfo_VendorLogFile_Alias(char* i,char* value);
int set_DeviceInfo_VendorLogFile_Alias(char* i,char* value);
int get_DeviceInfo_VendorLogFile_Name(char* i,char* value);
int get_DeviceInfo_VendorLogFile_MaximumSize(char* i,char* value);
int get_DeviceInfo_VendorLogFile_Persistent(char* i,char* value);

#endif