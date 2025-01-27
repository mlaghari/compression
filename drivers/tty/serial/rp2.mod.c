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

MODULE_ALIAS("pci:v000011FEd00000040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000045sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000046sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000047sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000061sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000063sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000066sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000067sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000068sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000072sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "44D0FB5A8698CB869B341E7");
