编译环境：
	ubuntu-14.04 桌面版
	内核：linux-3.13.0-71-generic
	








编译问题：
（1）缺少linux/config.h头文件
make -C /lib/modules/3.13.0-71-generic/build M=/home/nickli/working/workTest/c_coding/netlink/kernel_device_viewer
make[1]: Entering directory `/usr/src/linux-headers-3.13.0-71-generic'
  LD      /home/nickli/working/workTest/c_coding/netlink/kernel_device_viewer/built-in.o
  CC [M]  /home/nickli/working/workTest/c_coding/netlink/kernel_device_viewer/net_link.o
/home/nickli/working/workTest/c_coding/netlink/kernel_device_viewer/net_link.c:5:26: fatal error: linux/config.h: No such file or directory
 #include <linux/config.h>
                          ^
compilation terminated.
make[2]: *** [/home/nickli/working/workTest/c_coding/netlink/kernel_device_viewer/net_link.o] Error 1
make[1]: *** [_module_/home/nickli/working/workTest/c_coding/netlink/kernel_device_viewer] Error 2
make[1]: Leaving directory `/usr/src/linux-headers-3.13.0-71-generic'
make: *** [all] Error 2

解决办法：
添加一份头文件
sudo vim  /usr/src/linux-headers-3.13.0-71-generic/include/linux/config.h                             
内容如下：

#ifndef _LINUX_CONFIG_H
#define _LINUX_CONFIG_H
#endif
 
然后重新编译