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

MODULE_ALIAS("i2c:tps62360");
MODULE_ALIAS("i2c:tps62361");
MODULE_ALIAS("i2c:tps62362");
MODULE_ALIAS("i2c:tps62363");
MODULE_ALIAS("of:N*T*Cti,tps62360");
MODULE_ALIAS("of:N*T*Cti,tps62360C*");
MODULE_ALIAS("of:N*T*Cti,tps62361");
MODULE_ALIAS("of:N*T*Cti,tps62361C*");
MODULE_ALIAS("of:N*T*Cti,tps62362");
MODULE_ALIAS("of:N*T*Cti,tps62362C*");
MODULE_ALIAS("of:N*T*Cti,tps62363");
MODULE_ALIAS("of:N*T*Cti,tps62363C*");

MODULE_INFO(srcversion, "3CDBFEC520733D678E4C707");
