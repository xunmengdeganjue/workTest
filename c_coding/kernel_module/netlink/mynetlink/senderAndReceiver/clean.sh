#!/bin/bash
sudo killall receiver
sudo rmmod netlink_kernel_caller.ko
sudo rmmod netlink_kernel.ko

