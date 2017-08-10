
相关目录（2017-08-10）
├── example_to_refer       ：进行所有netlink相关的代码测试
├── kernel_device_viewer   ：
├── mynetlink              ：各阶段实现了相对完整功能的代码备份
│   ├── helloworld	   ：【测试通过】	
│   ├── senderAndReceiver  ：【测试通过】
│   └── update_myvar       ：【未测试】
│       └── user_module    ：【未测试】
└── new_netlink_test


2017-07-30
    至今没有一个netlink的例子成功
2017-08-06
（1）mynetlink/helloworld/ 成功了，但是太简单了，演示了用户空间向内核空间发送数据；
（2）new_netlink_test 成功演示了用户空间监听内核信息的功能。
	可以先运行用户空间程序：./sender
	然后加载内核模块，在加载成功后用户空间会收到信息：“Hello from kernel”
2017-08-10
 (3) mynetlink/senderAndReceiver 实现了用户空间向内核空间进行数据发送及接收的功能。
     内核空间向用户空间使用了多播的方式，但是还没有实现内核空间对来自用户空间的数据的解析。
  
