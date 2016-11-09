#! /bin/bash
###############################################################################
#2016-10-14:nick,add the ifconfig enp7s0.5 up operation in this script.
#
#
#
#
###############################################################################

LOCAL_EP=11.0.0.6
SEC_LOCAL_EP=11.0.0.110
REMOTE_EP=11.0.0.1
REMOTE_EP2=11.0.0.253
BR_IP=11.0.0.6
GRE_NAME=gretap2
SEC_GRE_NAME=secgretap2
GRE_NAME2=gretap3
GRE_CUR_NAME=$GRE_NAME
GRE_CUR_NAME2=$GRE_NAME2
VLAN_ID=7
LO_IP=12.0.0.2

echo "Removing previous spectrum Wifi configuration"
echo "local Endpoint : $LOCAL_EP"
echo "Remote Endpoint : $REMOTE_EP"
echo "Remote Endpoint 2: $REMOTE_EP2"

echo "Bridge IP : $BR_IP"
echo "Tap Name : $GRE_NAME"

brctl delif br-tap $GRE_CUR_NAME
brctl delif br-tap $SEC_GRE_NAME
#brctl delif br-tap $GRE_CUR_NAME2
brctl delif br-tap veth0

brctl delif br-tap enp7s0.5
ip addr del $BR_IP/24 dev enp7s0.5
ip addr del $SEC_LOCAL_EP/24 dev enp7s0.5


ip link del dev $GRE_CUR_NAME
ip link del dev $SEC_GRE_NAME
#ip link del dev $GRE_CUR_NAME2
ip route del 12.0.0.0/24 via $LOCAL_EP
ifconfig br-tap down
brctl delbr br-tap

if [ -z ${VLAN_ID+x} ];
then
	echo "VLAN not set"
	brctl delif br-com veth1
else
	brctl delif br-com veth1.$VLAN_ID
	vconfig rem veth1.$VLAN_ID
fi
sleep 1
ip link del dev veth0
ifconfig br-com down
brctl delbr br-com
sleep 1
echo "=============Done ====>"

echo "Now Creating a br-tap"
brctl addbr br-tap 
echo "Creating $GRE_NAME with local $LOCAL_EP and remote $REMOTE_EP"
ip link add $GRE_NAME type gretap local $LOCAL_EP remote $REMOTE_EP
echo "Creating $SEC_GRE_NAME with local $SEC_LOCAL_EP and remote $REMOTE_EP"
ip link add $SEC_GRE_NAME type gretap local $SEC_LOCAL_EP remote $REMOTE_EP


#echo "Creating $GRE_NAME2 with local $LOCAL_EP and remote $REMOTE_EP2"
#ip link add $GRE_NAME2 type gretap local $LOCAL_EP remote $REMOTE_EP2

echo "Bringing $GRE_NAME up"
ip link set dev $GRE_NAME up 
ip link set dev $SEC_GRE_NAME up
#ip link set dev $GRE_NAME2 up

echo "Creating enp7s0.5"
#vconfig add eth0 5
vconfig add enp7s0 5
sleep 1
echo "Creating br-com"
brctl addbr br-com
echo "Assigning $BR_IP to enp7s0.5"
ip addr add $BR_IP/24 dev enp7s0.5
ip addr add $SEC_LOCAL_EP/24 dev enp7s0.5
echo "Creating veth pipe"
ip link add veth0 type veth peer name veth1
echo "Creating veth1.$VLAN_ID"

if [ -z ${VLAN_ID+x} ];
then
	brctl addif br-com veth1
else
	vconfig add veth1 $VLAN_ID
	sleep 1
	echo "Adding veth1.$VLAN_ID to br-com"
	brctl addif br-com veth1.$VLAN_ID
fi

echo "Adding $GRE_NAME and veth0 in br-tap"
brctl addif br-tap $GRE_NAME 
brctl addif br-tap $SEC_GRE_NAME
#brctl addif br-tap $GRE_NAME2 
#brctl addif br-tap eth0.5
brctl addif br-tap veth0

echo "Bringing the veth interfaces up"
ifconfig veth0 up
ifconfig veth1 up
if [ -z ${VLAN_ID+x} ];
then
	ifconfig veth1 up
else
	ifconfig veth1.$VLAN_ID up
fi
echo "Assigning $LO_IP to loopbak"
ip addr add $LO_IP/24 dev br-com

echo "Bringing br-tap up"
ifconfig br-tap up 

echo "Bringing br-com up"
ifconfig br-com up 

echo "Bringing enp7s0.5 up"
ifconfig enp7s0.5 up
echo "Starting the Radius service"

#radiusd -Xx &
#radiusd -Xx
#sudo /etc/init.d/freeradius restart


echo "Starting the DHCP service"
#sudo cp /etc/default/isc-dhcp-server_with_vlan /etc/default/isc-dhcp-server
#sudo cp /etc/dhcp/dhcpd_with_vlan.conf /etc/dhcp/dhcpd.conf
sudo service isc-dhcp-server restart 
echo "Adding a route for loopbak via $LOCAL_EP"
sudo ip route add 12.0.0.0/24 via $LOCAL_EP

radiusd -Xx