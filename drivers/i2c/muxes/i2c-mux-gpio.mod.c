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
"depends=i2c-mux";

MODULE_ALIAS("of:N*T*Ci2c-mux-gpio");
MODULE_ALIAS("of:N*T*Ci2c-mux-gpioC*");

MODULE_INFO(srcversion, "64FDBCEE8557A8D5C54C4B5");
