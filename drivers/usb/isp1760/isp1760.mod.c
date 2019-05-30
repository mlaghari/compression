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
"depends=udc-core";

MODULE_ALIAS("pci:v000010B5d00005406sv000010B5sd00009054bc06sc80i00*");
MODULE_ALIAS("of:N*T*Cnxp,usb-isp1760");
MODULE_ALIAS("of:N*T*Cnxp,usb-isp1760C*");
MODULE_ALIAS("of:N*T*Cnxp,usb-isp1761");
MODULE_ALIAS("of:N*T*Cnxp,usb-isp1761C*");

MODULE_INFO(srcversion, "C3EE05546C63AFE02406307");