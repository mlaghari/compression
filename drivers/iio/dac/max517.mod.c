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
"depends=industrialio";

MODULE_ALIAS("i2c:max517");
MODULE_ALIAS("i2c:max518");
MODULE_ALIAS("i2c:max519");
MODULE_ALIAS("i2c:max520");
MODULE_ALIAS("i2c:max521");

MODULE_INFO(srcversion, "D8520D6EAD1D85F6895F5CC");
