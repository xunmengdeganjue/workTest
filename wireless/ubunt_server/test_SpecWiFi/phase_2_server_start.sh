#! /bin/bash

##check if the radiusd is running
echo -e "\033[32mStop the Radiusd if it is running.\033[0m"
if [$(which radiusd) -eq 0 ];then

	ps -aux |grep radiusd |grep -vE "grep|sudo"
	[ $? -eq 0 ] && sudo killall -9 radiusd
else

	sudo /etc/init.d/freeradius stop
fi

sudo ./uci_wag.sh

sleep 1

sudo service isc-dhcp-server start



