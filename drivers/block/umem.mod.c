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

MODULE_ALIAS("pci:v00001332d00005415sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001332d00005425sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001332d00006155sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000B555sv00001332sd00005460bc*sc*i*");

MODULE_INFO(srcversion, "925E5E60D25349E965F6889");
