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
"depends=libphy";

MODULE_ALIAS("mdio:????000110000001101110001000????");
MODULE_ALIAS("mdio:????000110000001101110001011????");
MODULE_ALIAS("mdio:????000110000001101110001010????");
MODULE_ALIAS("mdio:????000000011000000110111000????");

MODULE_INFO(srcversion, "86136164F6F457F01A8D3FE");