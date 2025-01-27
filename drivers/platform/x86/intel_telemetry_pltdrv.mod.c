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
"depends=intel_telemetry_core,intel_punit_ipc,intel_pmc_ipc";

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005C:feature:*");

MODULE_INFO(srcversion, "CFEFB7CCFCF36EE00091BA8");
