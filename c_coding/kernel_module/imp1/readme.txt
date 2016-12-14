


说明：

    运行在用户上下文环境中的代码是可以阻塞的，这样，便
可以使用消息队列和 UNIX 域套接字来实现内核态与用户态的
通信。但这些方法的数据传输效率较低，Linux 内核提供 
copy_from_user()/copy_to_user() 函数来实现内核态与用户
态数据的拷贝，但这两个函数会引发阻塞，所以不能用在硬、
软中断中。一般将这两个特殊拷贝函数用在类似于系统调用一
类的函数中，此类函数在使用中往往"穿梭"于内核态与用户态。






Usage:

##compile the kernel module(imp1_k.ko)
$sudo make

##build the program work in the user-space.
$gcc -o imp1_u imp1_u.c

##insmod the kernel module.
$sudo insmode imp1_k.ko

##test the progress.
$sudo ./imp1_u 

result:
	kmsg: a message from kernel

