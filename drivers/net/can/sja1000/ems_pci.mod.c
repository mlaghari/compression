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
"depends=sja1000";

MODULE_ALIAS("pci:v0000110Ad00002104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000010B5sd00004000bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000010B5sd00004002bc*sc*i*");

MODULE_INFO(srcversion, "9D93F8A4AAFB59E450B7191");
