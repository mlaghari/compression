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
"depends=drm,drm_kms_helper,ttm,i2c-algo-bit";

MODULE_ALIAS("pci:v0000102Bd00000522sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000524sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000530sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000532sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000534sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000536sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0DCFC55C4664A5F52DA117A");