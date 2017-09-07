#! /bin/bash




INTFACE="enp7s0"

VID="10"
#LOCAL_PE_V4="10.42.0.2"
#LOCAL_SE_V4="10.42.0.3"
LOCAL_SE_V6="2001:db1::3"

#REMOTE_EP_V4="10.42.0.87"
REMOTE_EP_V6="2001:db1::1"

#LOCAL_PE_V4="11.0.0.6"
#LOCAL_SE_V4="11.0.0.110"
#REMOTE_EP_V4="11.0.0.1"
LOCAL_PE_V4="10.8.4.33"
LOCAL_SE_V4="10.8.4.34"
REMOTE_EP_V4="10.8.4.226"

ipv4Single(){

	local opt=$1

	#sudo ./for_wan_secure.sh -i ${INTFACE} -mp 4 -ms 4 -pe 10.42.0.2 -se 10.42.0.3 -re4 10.42.0.87 -vid 10 start

	sudo ./for_wan_secure.sh -i ${INTFACE} -mp 4 -ms 4 -pe ${LOCAL_PE_V4} -se ${LOCAL_SE_V4} -re4 ${REMOTE_EP_V4} -vid ${VID} ${opt}

}

primary4_second6(){
	
	local opt=$1
	#sudo ./for_wan_secure.sh -i eth0 -mp 4 -ms 6 -pe 10.42.0.2 -se 2001:db1::3 -re4 10.42.0.87 -re6 2001:db1::1 -vid 10 start
	sudo ./for_wan_secure.sh -i ${INTFACE} -mp 4 -ms 6 -pe ${LOCAL_PE_V4} -se ${LOCAL_SE_V6} -re4 ${REMOTE_EP_V4} -re6 ${REMOTE_EP_V6} -vid ${VID} ${opt}

}

operation=$2

case $1 in
	"v4")
		ipv4Single $operation
		if [ $operation = "start" ];then
			echo "Starting DHCP service"
			service isc-dhcp-server start
			echo "Start the FreeRaidus server"
			/etc/init.d/freeradius start
		else
		        echo "Stop DHCP service"
                        service isc-dhcp-server stop
                        echo "Stop the FreeRaidus server"
                        /etc/init.d/freeradius stop
		fi
	;;
	"4v6")
		primary4_second6 $operation
		if [ $operation = "start" ];then
			echo "Starting DHCP service"
			service isc-dhcp-server start
			echo "Start the FreeRaidus server"
			/etc/init.d/freeradius start
		else
		        echo "Stop DHCP service"
                        service isc-dhcp-server stop
                        echo "Stop the FreeRaidus server"
                        /etc/init.d/freeradius stop
		fi
	;;
	*)
	echo "USAGE:"
	echo "	$0 [v4/4v6] [start/stop]"	 
	;;
esac


