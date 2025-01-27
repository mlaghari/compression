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

MODULE_INFO(staging, "Y");

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=adt7316";

MODULE_ALIAS("i2c:adt7316");
MODULE_ALIAS("i2c:adt7317");
MODULE_ALIAS("i2c:adt7318");
MODULE_ALIAS("i2c:adt7516");
MODULE_ALIAS("i2c:adt7517");
MODULE_ALIAS("i2c:adt7519");

MODULE_INFO(srcversion, "F0DF85337578090CC7B45F1");
