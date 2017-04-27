#! /bin/bash

LOCAL_EP=9.0.0.6
REMOTE_EP=9.0.0.1
SEC_LOCAL_EP=11.0.0.6
SEC_REMOTE_EP=11.0.0.1
BR_IP=14.0.0.2
GRENAME=gretap3

echo "Removing Previous Configurations"
echo "Local Endpoint : $LOCAL_EP"
echo "Remote Endpoint : $REMOTE_EP"

echo "Bridge IP : $BRI_IP"
echo "Gre Tap name : $GRENAME"

brctl delif br-cleartap $GRENAME
brctl delif br-cleartap veth2

ip addr del dev $GRENAME
brctl delbr br-cleartap

brctl delif br-clearcom veth3

#ip addr del $BR_IP/24 dev br-clearcom
ip link del dev veth3

ifconfig br-clearcom down
brctl delbr br-clearcom

echo ">>>>>>>>>Done>>>>>>>>"

echo "Now creating br-cleartap"

brctl addbr br-cleartap

ip link add $GRENAME type gretap local $LOCAL_EP remote $REMOTE_EP

brctl addif br-cleartap $GRENAME

ip link add veth2 type veth peer name veth3

brctl addif br-cleartap veth2

ifconfig veth2 up
ifconfig veth3 up
ifconfig $GRENAME up
ifconfig br-cleartap up

echo "Now Cretaing br-clearcom"

brctl addbr br-clearcom

brctl addif br-clearcom veth3

#ip addr add $BR_IP/24 dev br-clearcom 

ifconfig br-clearcom up

echo "******---------- Done ------****"

