#! /bin/bash

#this scripts is just for testing work of the tr069-tr181.
#It set the base and important value to some parameters.


#base conncetion need flowing parameters
sudo uci set trconf.Device_ManagementServer.EnableCWMP="true"
sudo uci set trconf.Device_ManagementServer.URL="10.8.3.61:80/acs"
sudo uci set trconf.Device_ManagementServer.Username="digest"
sudo uci set trconf.Device_ManagementServer.Password="digest"
sudo uci set trconf.Device_ManagementServer.PeriodicInformEnable="True"
sudo uci set trconf.Device_ManagementServer.PeriodicInformInterval="1800"
sudo uci set trconf.Device_ManagementServer.PeriodicInformTime="2015-05-05T14:32:00Z"
sudo uci set trconf.Device_ManagementServer.ConnectionRequestURL="10.8.2.34:7547"
sudo uci set trconf.Device_ManagementServer.ConnectionRequestUsername="username"
sudo uci set trconf.Device_ManagementServer.ConnectionRequestPassword="password"


#some base wifi parameters

#sudo uci set trconf.Device_WiFi.RadioNumberOfEntries="2"
#sudo uci set trconf.Device_WiFi.SSIDNumberOfEntries="2"
#sudo uci set trconf.Device_WiFi.AccessPointNumberOfEntries="2"

sudo uci commit

