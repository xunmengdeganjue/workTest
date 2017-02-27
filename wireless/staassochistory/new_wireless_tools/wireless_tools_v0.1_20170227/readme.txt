一、目录介绍
1.源码(包含了所有补丁)：src/wireless_tools.29
2.包编译规则目录：wireless_tools
（1）为编译出iwevent程序修改主Makefile:内容见Package_Makefile.patch
（2）为增加相应功能而增加了两份patches/{001^,101^}文件，分别如下：
	001-Makefile.patch   	—— 为在wireless_tools中增加iwevent命令
	101-iwevent_sta.patch	—— 为在iwevent命令中增加解析客户端关联与解除关联的记录功能

二、具体内容
（1）测试patch版，代码含有与主题功能无关的冗余（有wlanconfig athX list的完整代码，还有扫描BSS的代码）。
（2）含有代码调试模块（logopt.h,logopt.c）
（3）客户端信息记录在/tmp/historical_stations.log,利用了logopt.c中基本接口实现。

可以记录客户端的关联与解除关联动作，内容如下：
2017-02-26 19:16:46   [f4:09:d8:7e:de:95] associated
2017-02-26 19:16:52   [40:0e:85:f7:de:24] associated
2017-02-26 19:16:52   [F4:09:D8:7E:DE:95] expired
2017-02-26 19:16:56   [F4:09:D8:7E:DE:95] expired
2017-02-26 19:16:58   [40:0E:85:F7:DE:24] expired
2017-02-26 19:16:59   [f4:09:d8:7e:de:95] associated
2017-02-26 19:17:01   [40:0e:85:f7:de:24] associated
2017-02-26 19:17:02   [F4:09:D8:7E:DE:95] expired
2017-02-26 19:17:02   [F4:09:D8:7E:DE:95] expired
2017-02-26 19:17:04   [40:0E:85:F7:DE:24] expired
2017-02-26 19:17:06   [f4:09:d8:7e:de:95] associated
2017-02-26 19:17:08   [40:0e:85:f7:de:24] associated
2017-02-26 19:17:09   [F4:09:D8:7E:DE:95] expired
2017-02-26 19:17:09   [F4:09:D8:7E:DE:95] expired
2017-02-26 19:17:19   [f4:09:d8:7e:de:95] associated
2017-02-26 19:17:22   [40:0E:85:F7:DE:24] expired
2017-02-26 19:17:25   [F4:09:D8:7E:DE:95] expired
2017-02-26 19:17:25   [F4:09:D8:7E:DE:95] expired
2017-02-26 19:17:28   [40:0e:85:f7:de:24] associated
2017-02-26 19:17:35   [f4:09:d8:7e:de:95] associated


下一版本：wireless_tools_v0.2
将删除冗余代码，针对目标功优化代码结构。


Nick
2017-02-27
