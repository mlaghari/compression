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
"depends=comedi_pci,comedi,comedi_8254,comedi_8255";

MODULE_ALIAS("pci:v00001307d00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000115sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "55AB8A01D5D5D4E2C29FD19");
