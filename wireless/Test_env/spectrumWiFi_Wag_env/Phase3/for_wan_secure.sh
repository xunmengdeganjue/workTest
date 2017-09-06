#! /bin/bash

##########################################
######### for wan secure
######### pass arguement as start/stop/restart mode mode 
######### for using SSID VLAN enable VLAN_ID (uncomment 'VLAN_ID') in line no. 59 
######### if not then comment it 
######### and mode as 6 for ipv6 and 4 for ipv4 for primary gre end point
######### and mode as 6 for ipv6 and 4 for ipv4 for secondary gre end point
##########################################

fun_setup_info(){
        if [ "$MODE_PRI" == "6" ]
        then
                IP6_pri=true
        fi

        if [ "$MODE_SEC" == "6" ]
        then
                IP6_sec=true
        fi

        if [ -z ${IP6_pri+x} ];
        then
                echo "IP4 for primary is set"
                GRENAME=gretap_secr
                LO_IP=12.0.0.2
                LO_ROUTE=12.0.0.0
        else
                echo "IP6  for primary is set"
                GRENAME=gretap6_secr
                LO_IP=12.0.0.2
                LO_ROUTE=12.0.0.0
        fi

        if [ -z ${IP6_sec+x} ];
        then
                echo "IP4 for secondary is set"
                SEC_GRE_NAME=secgretap_secr
                LO_IP=12.0.0.2
                LO_ROUTE=12.0.0.0
        else
                echo "IP6  for secodary is set"
                SEC_GRE_NAME=secgretap6_secr
                LO_IP=12.0.0.2
                LO_ROUTE=12.0.0.0
        fi

	BRCOMNAME=br-com
	BRTAPNAME=br-tap

        if [ -z ${IP6_pri+x} ];
        then
                echo "Mode of Primary GRE Tunnel is IpV4"
                echo "Remote Endpoint IP4: $REMOTE_EP_IP4"
        else
                echo "Mode of Primary GRE Tunnel is IpV6"
                echo "Remote Endpoint IP6: $REMOTE_EP_IP6"
        fi

        if [ -z ${IP6_sec+x} ];
        then
                echo "Mode of Secondary GRE Tunnel is IpV4"
                echo "Remote Endpoint IP4: $REMOTE_EP_IP4"
        else
                echo "Mode of Secondary GRE Tunnel is IpV6"
                echo "Remote Endpoint IP6: $REMOTE_EP_IP6"
        fi

	echo "Local Endpoint : $LOCAL_EP"
	echo "Sec Local Endpoint : $SEC_LOCAL_EP"
	echo "Loopback Ip : $LO_IP"
	
	echo "Gre Tap name : $GRENAME"
	echo "Sec Gre Tap name : $SEC_GRE_NAME"
    echo "Ethernet Interface Name : $ETH_IF_NAME"	

	echo "Bridge com name : $BRCOMNAME"
	echo "Bridge com Tap name : $BRTAPNAME"

	if [ "$VLAN_ID" != "" ]
	then
		echo "VLAN ID : $VLAN_ID"
	fi
	
}
	
fun_down_intf(){

        if [ "$MODE_PRI" == "6" ]
        then
                IP6_pri=true
        fi

        if [ "$MODE_SEC" == "6" ]
        then
                IP6_sec=true
        fi
	
	echo "Removing Previous Configurations"
	brctl delif $BRTAPNAME $GRENAME
	brctl delif $BRTAPNAME $SEC_GRE_NAME
	brctl delif $BRTAPNAME veth0
		
	if [ -z ${IP6_pri+x} ];
	then
		ip addr del $LOCAL_EP/24 dev $ETH_IF_NAME
	else
		ip -6 addr del $LOCAL_EP/64 dev $ETH_IF_NAME
	fi
	
	if [ -z ${IP6_sec+x} ];
	then
		ip addr del $SEC_LOCAL_EP/24 dev $ETH_IF_NAME
	else
		ip -6 addr del $SEC_LOCAL_EP/64 dev $ETH_IF_NAME
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
        if [ "$MODE_PRI" == "6" ]
        then
                IP6_pri=true
        fi

        if [ "$MODE_SEC" == "6" ]
        then
                IP6_sec=true
        fi

	echo ">>>>>>>>>Now Starting to create and Setup Fresh>>>>>>>>"
	
	echo "Now Creating a $BRTAPNAME"

	brctl addbr $BRTAPNAME

        if [ -z ${IP6_pri+x} ];
        then
                echo "Creating $GRENAME with local $LOCAL_EP and remote $REMOTE_EP_IP4"
                ip link add $GRENAME type gretap local $LOCAL_EP remote $REMOTE_EP_IP4
                ip link set dev $GRENAME up 
        else
                echo "Creating $GRENAME with local $LOCAL_EP and remote $REMOTE_EP_IP6"
                ip -6 link add $GRENAME type ip6gretap local $LOCAL_EP remote $REMOTE_EP_IP6
                ip -6 link set dev $GRENAME up 
        fi

        if [ -z ${IP6_sec+x} ];
        then
                echo "Creating $SEC_GRE_NAME with local $SEC_LOCAL_EP and remote $REMOTE_EP_IP4"
                ip link add $SEC_GRE_NAME type gretap local $SEC_LOCAL_EP remote $REMOTE_EP_IP4
                ip link set dev $SEC_GRE_NAME up
        else
                echo "Creating $SEC_GRE_NAME with local $SEC_LOCAL_EP and remote $REMOTE_EP_IP6"
         	ip -6 link add $SEC_GRE_NAME type ip6gretap local $SEC_LOCAL_EP remote $REMOTE_EP_IP6
                ip -6 link set dev $SEC_GRE_NAME up
        fi

	sleep 1

	echo "Creating a $BRCOMNAME"

	brctl addbr $BRCOMNAME

	if [ -z ${IP6_pri+x} ];
	then
		echo "Assigning ipv4 ip's to local ep "
		ip addr add $LOCAL_EP/24 dev $ETH_IF_NAME
	else
		echo "Assigning ipv6 ip's to local ep "
		ip -6 addr add $LOCAL_EP/64 dev $ETH_IF_NAME
	fi
		
	if [ -z ${IP6_sec+x} ];
	then
		echo "Assigning ipv4 ip's to sec local ep "
		ip addr add $SEC_LOCAL_EP/24 dev $ETH_IF_NAME
	else
		echo "Assigning ipv6 ip's to sec local ep "
		ip -6 addr add $SEC_LOCAL_EP/64 dev $ETH_IF_NAME
	fi

	ifconfig $ETH_IF_NAME up

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
	
	echo "Adding $GRENAME $SEC_GRE_NAME and veth0 in $BRTAPNAME"
	brctl addif $BRTAPNAME $GRENAME
	brctl addif $BRTAPNAME $SEC_GRE_NAME
	brctl addif $BRTAPNAME veth0

	echo "Bringing the veth interfaces up"
	ifconfig veth0 up
	ifconfig veth1 up
	if [ -n ${VLAN_ID+x} ];
	then
		ifconfig veth1.$VLAN_ID up
	fi
	
	echo "Assigning $LO_IP to loopbak"
	ip addr add $LO_IP/24 dev $BRCOMNAME

	echo "Bringing $BRTAPNAME up"
	ifconfig $BRTAPNAME up
	
	echo "Bringing $BRCOMNAME up"
	ifconfig $BRCOMNAME up


	echo "******---------- Creation is Done ------****"
	
	ip addr show $ETH_IF_NAME
	
	sleep 1
	echo "Starting DHCP service"

	service isc-dhcp-server start
}

usage(){
	echo "Set Up WAG Server Scripts*******************************"
	echo "Prepared at Iotina Technologies Pvt. Ltd. -2017"
	echo " -i | --interface   : Ethernet Interface Of Wag Server Conneted to WAN interface of Router"
	echo " -mp | --mode_pri   : Mode of Primary Local Endpoint Of GRE Tunnel Possible Values '4' for IPv4 and '6' for IPv6"
	echo " -ms | --mode_sec   : Mode of Secondary Local Endpoint Of GRE Tunnel Possible Values '4' for IPv4 and '6' for IPv6"
	echo " -pe | --pri_ep     : IP Address of Primary Local Endpoint Of GRE Tunnel, According to Mode"
	echo " -se | --sec_ep     : IP Address of Secondary Local Endpoint Of GRE Tunnel, According to Mode"
	echo " -re4 | --remote_ip4: IPv4 Address of Remote Endpoint Of GRE Tunnel"
	echo " -re6 | --remote_ip6: IPv6 Address of Remote Endpoint Of GRE Tunnel"
	echo " -vid | --vlanid    : Vlan Id same as SSID Vlan for private SSID on router"
	echo " start		    : Create GRE Tunnel and Bridge Interfaces of WAG"
	echo " stop		    : Remove GRE Tunnel and Bridge Interfaces of WAG"
	echo " restart	    : Remove  then Create GRE Tunnel and Bridge Interfaces of WAG"

}

interactive=
			
while [ "$1" != "" ]; do
case $1 in
	-i | --interface )	shift
						ETH_IF_NAME=$1
					;;
	-mp | --mode_pri )	shift	
						MODE_PRI=$1
					;;
	-ms | --mode_sec )	shift
						MODE_SEC=$1
					;;
	-pe | --pri_ep )		shift
						LOCAL_EP=$1
					;;
	-se | --sec_ep )		shift
						SEC_LOCAL_EP=$1
					;;
	-re4 | --remote_ip4 )	shift
						REMOTE_EP_IP4=$1
					;;
	-re6 | --remote_ip6 )	shift
						REMOTE_EP_IP6=$1
					;;
	-vid | --vlan_id )	shift
						VLAN_ID=$1
					;;
	start )
						CMD="start"
					;;
	stop )
						CMD="stop"
					;;
	restart )
						CMD="restart"
					;;
	-h | --help )
						usage
						exit
					;;
	* )
						usage
						exit 1
	esac
	shift
done
	
if [ "$ETH_IF_NAME" == "" ]
then
	echo "Provide Interface Name Connecting to wan of Router"
	exit
fi

if [ "$MODE_PRI" == "" ]
then
	echo "Provide Mode for Primary Local Endpoint of Tunnel ( '4' for IPV4 or '6' for IPV6)"
	exit
fi

if [ "$MODE_SEC" == "" ]
then
	echo "Provide Mode for Secondary Local Endpoint of Tunnel ( '4' for IPV4 or '6' for IPV6)"
	exit
fi

if [ "$MODE_PRI" != "" ]
then
	if [ "$LOCAL_EP" == "" ]
	then
		echo "Provide Primary Local Endpoint IP According to MOde"
		exit
	fi
fi

if [ "$MODE_SEC" != "" ]
then
	if [ "$SEC_LOCAL_EP" == "" ]
	then
		echo "Provide Secondary Local Endpoint IP According to MOde"
		exit
	fi
fi

if [[ "$MODE_PRI" == "4"  || "$MODE_SEC" == "4" ]]
then
	if [ "$REMOTE_EP_IP4" == "" ]
	then
		echo "Provide Remote Endpoint IPV4 Address"
		exit
	fi
fi

if [[ "$MODE_PRI" == "6"  || "$MODE_SEC" == "6" ]]
then
	if [ "$REMOTE_EP_IP6" == "" ]
	then
		echo "Provide Remote Endpoint IPV6 Address"
		exit
	fi
fi

fun_setup_info $MODE_PRI $MODE_SEC


case "$CMD" in
        restart)
                fun_down_intf
                fun_up_intf
        ;;
        start)
                fun_up_intf
        ;;
        stop)
                fun_down_intf
		;;
esac

