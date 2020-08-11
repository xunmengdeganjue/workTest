.
├── wireless-tools [ openWRT下的软件包]
│   ├── files
│   └── patches
└── wireless_tools.29_kernel-3.14.77 [打完patch后且编译过源码]

修改相关文件："/src"表示wireless-tools根目录。
/src/Makefile
/src/iwevent.c
/src/iwevent.h
/src/logopt.h
/src/logopt.c
/src/iwevent_stainfo.c 



结果：客户端关联记录保存在/tmp/historical_stations.log文件中，内容如下:

technician@rt4230w:~# cat /tmp/historical_stations.log 
2017-09-25 00:31:25   [VAP:ath1] [STA:f4:09:d8:7e:de:95] associated
2017-09-25 00:34:16   [VAP:ath14] [STA:bc:6c:21:88:46:d9] associated
2017-09-25 00:35:04   [VAP:ath1] [STA:dc:a9:04:a0:ca:ce] associated
2017-09-25 00:35:45   [VAP:ath1] [STA:a4:08:ea:3a:24:72] associated
2017-09-25 00:36:03   [VAP:ath1] [STA:A4:08:EA:3A:24:72] expired
2017-09-25 00:36:23   [VAP:ath1] [STA:a4:08:ea:3a:24:72] associated
2017-09-25 00:36:29   [VAP:ath1] [STA:A4:08:EA:3A:24:72] expired
2017-09-25 00:37:01   [VAP:ath1] [STA:a4:08:ea:3a:24:72] associated
2017-09-25 00:38:18   [VAP:ath1] [STA:F4:09:D8:7E:DE:95] expired
2017-09-25 00:38:23   [VAP:ath1] [STA:f4:09:d8:7e:de:95] associated

查看调试信息：
tail -f /var/log/iwevent.log
