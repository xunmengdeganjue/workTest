#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x1deb9105, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xc7ed4efb, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x44305dab, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0x7368e46b, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xa926e943, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x1392d5c, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0xaa35ac6d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CCE59C022AA4B3E9558EA17");
