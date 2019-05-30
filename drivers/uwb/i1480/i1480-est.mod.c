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

MODULE_INFO(intree, "Y");

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uwb";

MODULE_ALIAS("usb:v8086pDF3Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0C3Bd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E005F1CC12FB28EA9FFDE11");