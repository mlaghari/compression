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

MODULE_ALIAS("acpi*:SMO8800:*");
MODULE_ALIAS("acpi*:SMO8801:*");
MODULE_ALIAS("acpi*:SMO8810:*");
MODULE_ALIAS("acpi*:SMO8811:*");
MODULE_ALIAS("acpi*:SMO8820:*");
MODULE_ALIAS("acpi*:SMO8821:*");
MODULE_ALIAS("acpi*:SMO8830:*");
MODULE_ALIAS("acpi*:SMO8831:*");

MODULE_INFO(srcversion, "2C62C709B1D74E034C26267");
