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

MODULE_ALIAS("i2c:emc1402");
MODULE_ALIAS("i2c:emc1403");
MODULE_ALIAS("i2c:emc1404");
MODULE_ALIAS("i2c:emc1412");
MODULE_ALIAS("i2c:emc1413");
MODULE_ALIAS("i2c:emc1414");
MODULE_ALIAS("i2c:emc1422");
MODULE_ALIAS("i2c:emc1423");
MODULE_ALIAS("i2c:emc1424");

MODULE_INFO(srcversion, "6337148C209AF149DB87EEC");
