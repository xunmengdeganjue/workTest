相关文件：
.
├── Makefile
├── mylibacl.c
├── proc_call_test.c
└── readme.txt


编译：
	make
	
测试使用：
	（1）监控内核信息
		while true;do sudo  dmesg -c ;sleep 1;done
	（1）加载目标库模块：
		sudo insmod mylibacl.ko
	（2）加载测试模块：
		sudo insmod proc_call_test.ko
	（3）查看结果	
		cat /proc/mylibacl
		该文件中内容会随着proc_call_test模块的加载和卸载而变化。
Nick 
2016-12-14		