#! /bin/bash

##########################################
######### for vlan secure
######### pass arguement as start/stop/restart
######### and mode as 6 for ipv6 and anything or nothing for ipv4
##########################################

fun_setup_info(){
	if [ "$1" == "6" ]	
	then
		IP6=true
	fi
	if [ -z ${IP6+x} ];
	then
	        echo "IP4 is set"
		LOCAL_EP=11.0.0.6
		REMOTE_EP=11.0.0.1
		SEC_LOCAL_EP=11.0.0.110
		GRENAME=gretap_secr
		SEC_GRE_NAME=secgretap_secr
		LO_IP=12.0.0.2
		LO_ROUTE=12.0.0.0
	else
	        echo "IP6 is set"
	        LOCAL_EP=2001:db9::2
	        REMOTE_EP=2001:db9::1
	        SEC_LOCAL_EP=2001:db9::3
		GRENAME=gretap6_secr
		SEC_GRE_NAME=secgretap6_secr
		LO_IP=12.0.0.2
		LO_ROUTE=12.0.0.0

	fi

	BRCOMNAME=br-com
	BRTAPNAME=br-tap
	GRE_VLAN_ID=5
	VLAN_ID=7
	##nick#ETH_IF_NAME=eth0
	ETH_IF_NAME=enp7s0

	echo "Local Endpoint : $LOCAL_EP"
	echo "Sec Local Endpoint : $SEC_LOCAL_EP"
	echo "Loopback Ip : $LO_IP"
	echo "Remote Endpoint : $REMOTE_EP"
	
	echo "Gre Tap name : $GRENAME"
	echo "Sec Gre Tap name : $SEC_GRE_NAME"
	
	echo "Bridge com name : $BRCOMNAME"
	echo "Bridge com Tap name : $BRTAPNAME"
	
}
	
fun_down_intf(){
	
	if [ "$1" == "6" ]	
	then
		IP6=true
	fi
	
	echo "Removing Previous Configurations"
	brctl delif $BRTAPNAME $GRENAME
	brctl delif $BRTAPNAME $SEC_GRE_NAME
	brctl delif $BRTAPNAME veth0
		
	if [ -z ${IP6+x} ];
	then
		ip addr del $LOCAL_EP/24 dev $ETH_IF_NAME.$GRE_VLAN_ID
		ip addr del $SEC_LOCAL_EP/24 dev $ETH_IF_NAME.$GRE_VLAN_ID
		echo "Deleting $ETH_IF_NAME.$GRE_VLAN_ID"
		vconfig rem $ETH_IF_NAME.$GRE_VLAN_ID
	else
		ip -6 addr del $LOCAL_EP/64 dev $ETH_IF_NAME.$GRE_VLAN_ID
		ip -6 addr del $SEC_LOCAL_EP/64 dev $ETH_IF_NAME.$GRE_VLAN_ID
		echo "Deleting $ETH_IF_NAME.$GRE_VLAN_ID"
		vconfig rem $ETH_IF_NAME.$GRE_VLAN_ID
	fi
	
	ip link del dev $GRENAME
	ip link del dev $SEC_GRE_NAME
	ip route del $LO_ROUTE/24
	ifconfig $BRTAPNAME down
	brctl delbr $BRTAPNAME
	
	if [ -z ${VLAN_ID+x} ];
	then
	echo "VLAN for SSID not set"
	        brctl delif $BRCOMNAME veth1
	else
	        brctl delif $BRCOMNAME veth1.$VLAN_ID
	        vconfig rem veth1.$VLAN_ID
	fi
	sleep 1
	ip link del dev veth0
	ifconfig $BRCOMNAME down
	brctl delbr $BRCOMNAME
	sleep 1
	echo "Stopping DHCP service"
	service isc-dhcp-server stop
	
	echo ">>>>>>>>>Deleting and Cleaning is Done>>>>>>>>"
}

fun_up_intf(){
	if [ "$1" == "6" ]	
	then
		IP6=true
	fi

	echo ">>>>>>>>>Now Starting to create and Setup Fresh>>>>>>>>"
	
	echo "Now Creating a $BRTAPNAME"

	brctl addbr $BRTAPNAME

	echo "Creating $GRE_NAME with local $LOCAL_EP and remote $REMOTE_EP"
	echo "Creating $SEC_GRE_NAME with local $SEC_LOCAL_EP and remote $REMOTE_EP"
	
	if [ -z ${IP6+x} ];
	then
		ip link add $GRENAME type gretap local $LOCAL_EP remote $REMOTE_EP
		ip link add $SEC_GRE_NAME type gretap local $SEC_LOCAL_EP remote $REMOTE_EP
		ip link set dev $GRENAME up 
		ip link set dev $SEC_GRE_NAME up
	else
		ip -6 link add $GRENAME type ip6gretap local $LOCAL_EP remote $REMOTE_EP
		ip -6 link add $SEC_GRE_NAME type ip6gretap local $SEC_LOCAL_EP remote $REMOTE_EP
		ip -6 link set dev $GRENAME up 
		ip -6 link set dev $SEC_GRE_NAME up
	fi

	sleep 1

	echo "Creating a $BRCOMNAME"

	brctl addbr $BRCOMNAME

	echo "Now creating vlan interface for $ETH_IF_NAME.$GRE_VLAN_ID"

	if [ -z ${IP6+x} ];
	then
		echo "Assigning ipv4 ip's to local and sec local ep "
		vconfig add $ETH_IF_NAME $GRE_VLAN_ID
		ip addr add $LOCAL_EP/24 dev $ETH_IF_NAME.$GRE_VLAN_ID
		ip addr add $SEC_LOCAL_EP/24 dev $ETH_IF_NAME.$GRE_VLAN_ID
		ifconfig $ETH_IF_NAME.$GRE_VLAN_ID up
	else
		echo "Assigning ipv6 ip's to local and sec local ep "
		vconfig add $ETH_IF_NAME $GRE_VLAN_ID
		ip -6 addr add $LOCAL_EP/64 dev $ETH_IF_NAME.$GRE_VLAN_ID
		ip -6 addr add $SEC_LOCAL_EP/64 dev $ETH_IF_NAME.$GRE_VLAN_ID
		ifconfig $ETH_IF_NAME.$GRE_VLAN_ID up
	fi
		
	echo "Creating veth pipe"
	ip link add veth0 type veth peer name veth1
	
	if [ -z ${VLAN_ID+x} ];
	then
		brctl addif $BRCOMNAME veth1
	else
		echo "Creating veth1.$VLAN_ID"
		vconfig add veth1 $VLAN_ID
		sleep 1
		echo "Adding veth1.$VLAN_ID to $BRCOMNAME"
		brctl addif $BRCOMNAME veth1.$VLAN_ID
	fi
	
	echo "Adding $GRE_NAME $SEC_GRE_NAME and veth0 in $BRTAPNAME"
	brctl addif $BRTAPNAME $GRENAME
	brctl addif $BRTAPNAME $SEC_GRE_NAME
	brctl addif $BRTAPNAME veth0

	echo "Bringing the veth interfaces up"
	ifconfig veth0 up
	if [ -z ${VLAN_ID+x} ];
	then
		ifconfig veth1 up
	else
		ifconfig veth1.$VLAN_ID up
	fi
	
	echo "Assigning $LO_IP to loopbak"
	ip addr add $LO_IP/24 dev $BRCOMNAME

	echo "Bringing $BRTAPNAME up"
	ifconfig $BRTAPNAME up
	
	echo "Bringing $BRCOMNAME up"
	ifconfig $BRCOMNAME up


	echo "******---------- Creation is Done ------****"
	
	ip addr show $ETH_IF_NAME.$GRE_VLAN_ID
	
	sleep 1
	echo "Starting DHCP service"

	service isc-dhcp-server start
}

MODE=$2
fun_setup_info $MODE

case "$1" in
        restart)
	        fun_down_intf $MODE
	        fun_up_intf $MODE
        ;;
        start)
	        fun_up_intf $MODE
        ;;
        stop)
	        fun_down_intf $MODE
        ;;
esac

