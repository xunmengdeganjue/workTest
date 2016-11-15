uci delete wireless.spectrumWiFi
uci set wireless.spectrumWiFi=wifi-iface
uci set wireless.spectrumWiFi.network=com
uci set wireless.spectrumWiFi.mode=ap
uci set wireless.spectrumWiFi.ath_enable=1
uci set wireless.spectrumWiFi.ssid='spectrumWifi'
uci set wireless.spectrumWiFi.hidden=0
uci set wireless.spectrumWiFi.wps_enable=0
uci set wireless.spectrumWiFi.rts=2347
uci set wireless.spectrumWiFi.frag=2346
uci set wireless.spectrumWiFi.isolate=1
uci set wireless.spectrumWiFi.device=wifi1
uci set wireless.spectrumWiFi.wmm=1
uci set wireless.spectrumWiFi.uapsd=1
uci set wireless.spectrumWiFi.ampdu=1
uci set wireless.spectrumWiFi.encryption=wpa2
uci set wireless.spectrumWiFi.key="shared_secret"
uci set wireless.spectrumWiFi.server=12.0.0.2
uci set wireless.spectrumWiFi.port=1812
uci set wireless.spectrumWiFi.auth_server=12.0.0.2
uci set wireless.spectrumWiFi.auth_port=1812
uci set wireless.spectrumWiFi.acct_server=12.0.0.2
uci set wireless.spectrumWiFi.acct_port=1813
uci set wireless.spectrumWiFi.auth_secret=secret
uci set wireless.spectrumWiFi.acct_secret=secret
uci set wireless.spectrumWiFi.ownip=12.0.0.50
uci set wireless.spectrumWiFi.rsn_preauth=1
#enable airtime fairness
uci set wireless.spectrumWiFi.percent=40

uci delete wireless.spectrumWiFi5g
uci set wireless.spectrumWiFi5g=wifi-iface
uci set wireless.spectrumWiFi5g.network=com
uci set wireless.spectrumWiFi5g.mode=ap
uci set wireless.spectrumWiFi5g.ath_enable=1
uci set wireless.spectrumWiFi5g.ssid=spectrumWifi
uci set wireless.spectrumWiFi5g.hidden=0
uci set wireless.spectrumWiFi5g.wps_enable=0
uci set wireless.spectrumWiFi5g.rts=2347
uci set wireless.spectrumWiFi5g.frag=2346
uci set wireless.spectrumWiFi5g.isolate=1
uci set wireless.spectrumWiFi5g.device=wifi0
uci set wireless.spectrumWiFi5g.wmm=1
uci set wireless.spectrumWiFi5g.uapsd=1
uci set wireless.spectrumWiFi5g.ampdu=1
uci set wireless.spectrumWiFi5g.encryption=wpa2
uci set wireless.spectrumWiFi5g.key=shared_secret
uci set wireless.spectrumWiFi5g.server=12.0.0.2
uci set wireless.spectrumWiFi5g.port=1812
uci set wireless.spectrumWiFi5g.auth_server=12.0.0.2
uci set wireless.spectrumWiFi5g.auth_port=1812
uci set wireless.spectrumWiFi5g.acct_server=12.0.0.2
uci set wireless.spectrumWiFi5g.acct_port=1813
uci set wireless.spectrumWiFi5g.auth_secret=secret
uci set wireless.spectrumWiFi5g.acct_secret=secret
uci set wireless.spectrumWiFi5g.ownip=12.0.0.50
uci set wireless.spectrumWiFi5g.rsn_preauth=1
#enable Airtime fairness
uci set wireless.spectrumWiFi.percent=40

uci delete network.tap
uci set network.tap=interface
uci set network.tap.proto='gretap'
uci set network.tap.ipaddr='11.0.0.1'
uci set network.tap.peeraddr='11.0.0.6'
uci set network.tap.network='commtap'

#Keepalive module settings
uci set network.tap.ka_pri_addr='11.0.0.6'
uci set network.tap.ka_sec_addr='11.0.0.210'
uci set network.tap.ka_intrvl='3'
uci set network.tap.ka_thrld='3'
uci set network.tap.ka_pri_chk_intrvl='3'

uci delete network.com
uci set network.com=interface
uci set network.com.type='bridge'
uci set network.com.proto='static'
uci set network.com.ipaddr='12.0.0.50'
uci set network.com.netmask='255.255.255.0'

uci delete network.commtap                          
uci set network.commtap=interface                   
uci set network.commtap.type='bridge'

#upstream tagging
uci delete network.tagv
uci set network.tagv=interface
uci set network.tagv.ifname='eth0.5'
uci set network.tagv.proto='static'
uci set network.tagv.ipaddr='11.0.0.1'
uci set network.tagv.netmask='255.255.255.0'

#traffic isolation
uci delete firewall.zone_sWiFi
uci set firewall.zone_sWiFi='zone'
uci set firewall.zone_sWiFi.name='sWiFi'
uci set firewall.zone_sWiFi.network='commtap'
uci set firewall.zone_sWiFi.input='DROP'
uci set firewall.zone_sWiFi.output='ACCEPT'
uci set firewall.zone_sWiFi.forward='ACCEPT'

uci delete firewall.zone_sWiFi
uci set firewall.zone_sWiFi='zone'
uci set firewall.zone_sWiFi.name='sWiFi'
uci set firewall.zone_sWiFi.network='com'
uci set firewall.zone_sWiFi.input='DROP'
uci set firewall.zone_sWiFi.output='ACCEPT'
uci set firewall.zone_sWiFi.forward='ACCEPT'


uci delete network.veth
uci set network.veth=interface
uci set network.veth.proto='veth'
uci set network.veth.ifname='veth0'
uci set network.veth.vlanid='7'
uci set network.veth.network='com'
uci set network.veth.peer_ifname='veth1'
uci set network.veth.peer_network='commtap'

#enable band steering
uci set lbd.config.Enable=1
uci set lbd.config.MatchingSSID=spectrumWifi

uci commit
