#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=atm,uPD98402";

MODULE_ALIAS("pci:v00001193d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001193d00000002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "88013FB7B8EDF7F402B11D9");
