######################################################################################################
完成客户端关联历史记录功能。去除了v0.1中冗余的调试代码。

目录介绍：
├── full_openwrt_rulepkg
│   └── wireless-tools			#存在位置：openwrt-root/package/network/utils/
│       ├── files						#增加了iwevent启动脚本
│       └── patches					#增加了101-iwevent_sta_history.patch 满足在iwevent中添加本次目标功	
├── spf_openwrt_rulepkg
│   └── wireless-tools			#存在位置：skysoft/base/software/common/qsdk/package/network/utils/
│		    ├── files						#增加启动脚本：iwevent.init
│		    │   └── iwevent.init
│		    ├── Makefile				#增加对iwevnet.init的安装动作
│		    └── patches					#增加了101-iwevent_sta_history.patch 满足在iwevent中添加本次目标功	
│		        ├── 002-fix-iwconfig-power-argument-parsing.patch
│		        └── 101-iwevent_sta_history.patch
│
└── src				
    └── wireless_tools.29	#打完Patches后的完整代码

结果：在/tmp/historical_stations.log文件中会记录所有客户端的连接与解除关联动作




Nick
2017-02-28




