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
"depends=rt2x00lib,rt2x00mmio,rt2x00pci,eeprom_93cx6";

MODULE_ALIAS("pci:v00001814d00000201sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E5F5BAD26D1E4D0C1F0E47C");
