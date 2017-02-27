

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

Nick
2017-02-27
