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
"depends=";

MODULE_ALIAS("i2c:tmp401");
MODULE_ALIAS("i2c:tmp411");
MODULE_ALIAS("i2c:tmp431");
MODULE_ALIAS("i2c:tmp432");
MODULE_ALIAS("i2c:tmp435");
MODULE_ALIAS("i2c:tmp461");

MODULE_INFO(srcversion, "844823E0E557D4367E7C071");
