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

MODULE_ALIAS("i2c:mip4_ts");
MODULE_ALIAS("acpi*:MLFS0000:*");
MODULE_ALIAS("of:N*T*Cmelfas,mip4_ts");
MODULE_ALIAS("of:N*T*Cmelfas,mip4_tsC*");

MODULE_INFO(srcversion, "3A635F0B57AA1A058446053");