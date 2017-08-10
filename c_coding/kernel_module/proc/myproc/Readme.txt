相关文件：
.
├── helloworld
│   ├── helloworld.c
│   └── Makefile
├── mylibcsa
│   ├── Makefile
│   ├── mylibacl.c
│   ├── proc_call_test.c
│   └── readme.txt
└── Readme.txt
描述：
	Mylibcsa中包含了proc文件系统实现的内核和用户空间进行数据通信
的一个简单例子。实现了内核模块间接口的相互调用，并将相关信息写入
/porc/dest_proc_file。用户空间可以直接从/proc/dest_proc_file文件
中获取来自内核空间的信息。


