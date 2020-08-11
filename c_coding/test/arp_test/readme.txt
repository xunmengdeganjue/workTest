2018-10-15
测试完成，将arp_test程序以root权限运行起来，查看日志记录，可以发现进程的状态机变化。
当将host的网线拔掉后，host发出的arp请求无法得到gateway 的回应，超过三次后会将状态机置为
P_ERROR.
1.增加了get_mac_by_ifname函数，使程序可以动态获取host的eth0接口的MAC。
2.增加了调试接口logopt.c logopt.h,调试信息输出到/tmp/arp_test.log文件中。

2018-10-10
添加arp_test目录，以实验arp发包代码。
