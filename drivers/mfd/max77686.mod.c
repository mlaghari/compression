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

MODULE_ALIAS("i2c:max77686");
MODULE_ALIAS("i2c:max77802");
MODULE_ALIAS("of:N*T*Cmaxim,max77686");
MODULE_ALIAS("of:N*T*Cmaxim,max77686C*");
MODULE_ALIAS("of:N*T*Cmaxim,max77802");
MODULE_ALIAS("of:N*T*Cmaxim,max77802C*");

MODULE_INFO(srcversion, "62EEF19260914CEF46C3743");
