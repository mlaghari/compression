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
"depends=snd-soc-ssm2602,snd-soc-core";

MODULE_ALIAS("i2c:ssm2602");
MODULE_ALIAS("i2c:ssm2603");
MODULE_ALIAS("i2c:ssm2604");
MODULE_ALIAS("of:N*T*Cadi,ssm2602");
MODULE_ALIAS("of:N*T*Cadi,ssm2602C*");
MODULE_ALIAS("of:N*T*Cadi,ssm2603");
MODULE_ALIAS("of:N*T*Cadi,ssm2603C*");
MODULE_ALIAS("of:N*T*Cadi,ssm2604");
MODULE_ALIAS("of:N*T*Cadi,ssm2604C*");

MODULE_INFO(srcversion, "1F86486E014D26BB3C20AAF");