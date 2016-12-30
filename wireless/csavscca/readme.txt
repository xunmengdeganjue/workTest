关于在openwrt-SDK中编译时注意事项：
(1)kernel-module/lib-csa
内核加载模块规则
放置于：common_IPQ8064/qsdk/package/libs/lib-csa
(2)kernel-module/src
内核模块源码
放置于：common_IPQ8064/qsdk/qca/src/lib-csa 
(3)user-space-deamon
用户空间守护进程
放置于：common_IPQ8064/qsdk/package/skysoft/skysoft_csa_hunter
(4)修改.config，增加下面两行——将以上包选上：
###for csa
CONFIG_PACKAGE_kmod-lib-csa=y
CONFIG_PACKAGE_skysoft_csa_hunter=y

nick
2016-12-30