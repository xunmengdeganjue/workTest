######################################################################################################
V0.3:
基于v0.2，将原程序中打印到终端的信息去掉并将代码格式进行了优化，同时修改了启动脚本，增加意外死掉后自启的机制。

目录介绍：
├── full_openwrt_rulepkg
│?? └── wireless-tools			#存在位置：openwrt-root/package/network/utils
│??     ├── files						#修改了iwevent启动脚本，增加进程自动重启机制，防止意外情况下进程死掉后功能失效。
│??     └── patches					#修改原程序，将原来的printf信息定向到/var/log/iwevent.log中。
├── spf502_openwrt_rulepkg
│   └── wireless-tools			#存在位置：skysoftbasesoftwarecommonqsdkpackagenetworkutils
│		    ├── files						#增加启动脚本：iwevent.init
│		    │?? └── iwevent.init
│		    ├── Makefile				#增加对iwevnet.init的安装动作
│		    └── patches					#增加了101-iwevent_sta_history.patch 满足在iwevent中添加本次目标功	
│		        ├── 002-fix-iwconfig-power-argument-parsing.patch
│		        └── 101-iwevent_sta_history.patch
│
└── src				
    └── wireless_tools.29	#打完Patches后的完整代码

结果：
在tmp/historical_stations.log文件中会记录所有客户端的连接与解除关联动作
在/var/log/iwevent.log文件中记录所有调试信息



Nick
2018-08-24

######################################################################################################
完成客户端关联历史记录功能。去除了v0.1中冗余的调试代码。

目录介绍：
├── full_openwrt_rulepkg
│?? └── wireless-tools			#存在位置：openwrt-rootpackagenetworkutils
│??     ├── files						#增加了iwevent启动脚本
│??     └── patches					#增加了101-iwevent_sta_history.patch 满足在iwevent中添加本次目标功	
├── spf_openwrt_rulepkg
│   └── wireless-tools			#存在位置：skysoftbasesoftwarecommonqsdkpackagenetworkutils
│		    ├── files						#增加启动脚本：iwevent.init
│		    │?? └── iwevent.init
│		    ├── Makefile				#增加对iwevnet.init的安装动作
│		    └── patches					#增加了101-iwevent_sta_history.patch 满足在iwevent中添加本次目标功	
│		        ├── 002-fix-iwconfig-power-argument-parsing.patch
│		        └── 101-iwevent_sta_history.patch
│
└── src				
    └── wireless_tools.29	#打完Patches后的完整代码

结果：在tmp/historical_stations.log文件中会记录所有客户端的连接与解除关联动作




Nick
2017-02-28
