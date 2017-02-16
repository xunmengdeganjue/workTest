#! /bin/sh

##backup the related config files at first.
cp /etc/config/network /tmp/network_reback -f
cp /etc/config/wireless /tmp/wireless_reback -f


cp /etc/operate_mode/network_bridge /etc/config/network -f
rm -rf /etc/config/wireless

##generate a new wireless config file.
wifi det_sta >/etc/config/wireless

##configure the network.

uci set network.lan.proto="static/dhcp"

uci set network.lan.peerdns="1"

##set the ssid belong the upstream AP.
uci set wireless.wlg.ssid="ABABAB-2G"

##set the encryption methord.

#uci set wireless.wlg.key="password-same-to-upstream-AP"  //wep加密方式

uci set wireless.wlg.encryption="psk+tkip"     #wpa加密方式{“psk2+tkip”，“psk2+aes”}

uci set wireless.wlg.key="123456789"         #wpa密码
uci set wireless.wlg.ath_enable=1
uci set wireless.wlg.bridge_enable=1
uci delete wireless.wlg.ssid 
uci set wireless.wlg.encryption="psk+aes"

uci set system.sauth.wizard_setting=1
uci set system.system.oprmode=2
##stop services
uci set dhcp.lan.ignore=1
uci set ipv6.@global[0].connection_type=0
uci set firewall.@defaults[0].disable_ipv6=1
uci set staticrt.staticrt.enable=0
uci set openvpn.ctr_server.enabled=0
uci set pptpvpn.vpnser.enable=0
uci set firewall.@defaults[0].fw_enable=0
uci set minidlna.config.enabled=0
uci set proftpd.@global[0].enable=0
uci set samba.@global[0].enable=0
uci set mtdaapd.@global[0].enable=0

sleep 1
reboot
sleep 10
sync
reboot -f





