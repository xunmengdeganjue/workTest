######################################################################################################
V0.3:
����v0.2����ԭ�����д�ӡ���ն˵���Ϣȥ�����������ʽ�������Ż���ͬʱ�޸��������ű����������������������Ļ��ơ�

Ŀ¼���ܣ�
������ full_openwrt_rulepkg
��?? ������ wireless-tools			#����λ�ã�openwrt-root/package/network/utils
��??     ������ files						#�޸���iwevent�����ű������ӽ����Զ��������ƣ���ֹ��������½�����������ʧЧ��
��??     ������ patches					#�޸�ԭ���򣬽�ԭ����printf��Ϣ����/var/log/iwevent.log�С�
������ spf502_openwrt_rulepkg
��   ������ wireless-tools			#����λ�ã�skysoftbasesoftwarecommonqsdkpackagenetworkutils
��		    ������ files						#���������ű���iwevent.init
��		    ��?? ������ iwevent.init
��		    ������ Makefile				#���Ӷ�iwevnet.init�İ�װ����
��		    ������ patches					#������101-iwevent_sta_history.patch ������iwevent����ӱ���Ŀ�깦	
��		        ������ 002-fix-iwconfig-power-argument-parsing.patch
��		        ������ 101-iwevent_sta_history.patch
��
������ src				
    ������ wireless_tools.29	#����Patches�����������

�����
��tmp/historical_stations.log�ļ��л��¼���пͻ��˵�����������������
��/var/log/iwevent.log�ļ��м�¼���е�����Ϣ



Nick
2018-08-24

######################################################################################################
��ɿͻ��˹�����ʷ��¼���ܡ�ȥ����v0.1������ĵ��Դ��롣

Ŀ¼���ܣ�
������ full_openwrt_rulepkg
��?? ������ wireless-tools			#����λ�ã�openwrt-rootpackagenetworkutils
��??     ������ files						#������iwevent�����ű�
��??     ������ patches					#������101-iwevent_sta_history.patch ������iwevent����ӱ���Ŀ�깦	
������ spf_openwrt_rulepkg
��   ������ wireless-tools			#����λ�ã�skysoftbasesoftwarecommonqsdkpackagenetworkutils
��		    ������ files						#���������ű���iwevent.init
��		    ��?? ������ iwevent.init
��		    ������ Makefile				#���Ӷ�iwevnet.init�İ�װ����
��		    ������ patches					#������101-iwevent_sta_history.patch ������iwevent����ӱ���Ŀ�깦	
��		        ������ 002-fix-iwconfig-power-argument-parsing.patch
��		        ������ 101-iwevent_sta_history.patch
��
������ src				
    ������ wireless_tools.29	#����Patches�����������

�������tmp/historical_stations.log�ļ��л��¼���пͻ��˵�����������������




Nick
2017-02-28
