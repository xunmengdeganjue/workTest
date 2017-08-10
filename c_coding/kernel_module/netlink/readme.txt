2017-07-30
至今没有一个netlink的例子成功
2017-08-06
（1）mynetlink/helloworld/ 成功了，但是太简单了，演示了用户空间向内核空间发送数据；
（2）new_netlink_test 成功演示了用户空间监听内核信息的功能。
	可以先运行用户空间程序：./sender
	然后加载内核模块，在加载成功后用户空间会收到信息：“Hello from kernel”
