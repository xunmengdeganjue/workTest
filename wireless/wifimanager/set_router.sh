#! /bin/sh


PROTOCOL=$1

DUTMODE=""


##dump the related config files.
dumping(){

	cp /etc/config/network /tmp/network_reback -f
	cp /etc/config/wireless /tmp/wireless_reback -f
	cp /etc/config/dhcp /tmp/dhcp_reback -f

}
configuration(){
	##generic a new wireless config file.
	rm -rf /etc/config/wireless
	wifi detect > /etc/config/wireless


	DUTMODE=`uci get system.system.oprmode`

	if [ $DUTMODE -ne 0 ];then
		cp -f /etc/operate_mode/network_router /etc/config/network

		cp -f /etc/operate_mode/dhcp_router /etc/config/dhcp 

	else
		cp /tmp/wireless_reback /etc/config/wireless
	

	fi
	
	uci set system.system.oprmode=0
	uci commit
}

case "$PROTOCOL" in
	"dhcp")
		echo -e "Set the Network with \033[32mDHCP\033[0m mode"
	;;
	"pppoe")
		echo -e "Set the Network with \033[32mPPPoE\033[0m mode"

	;;
	"static")
		echo -e "Set the Network with \033[32mStatic\033[0m mode"
	
	;;
	*)
		echo "Usage:"
	;;

esac







