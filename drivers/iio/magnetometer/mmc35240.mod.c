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
"depends=industrialio";

MODULE_ALIAS("i2c:mmc35240");
MODULE_ALIAS("acpi*:MMC35240:*");
MODULE_ALIAS("of:N*T*Cmemsic,mmc35240");
MODULE_ALIAS("of:N*T*Cmemsic,mmc35240C*");

MODULE_INFO(srcversion, "9DE4D561CF9F70400E5CA44");
