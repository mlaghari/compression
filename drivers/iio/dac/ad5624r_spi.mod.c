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

MODULE_ALIAS("spi:ad5624r3");
MODULE_ALIAS("spi:ad5644r3");
MODULE_ALIAS("spi:ad5664r3");
MODULE_ALIAS("spi:ad5624r5");
MODULE_ALIAS("spi:ad5644r5");
MODULE_ALIAS("spi:ad5664r5");

MODULE_INFO(srcversion, "9ACD8EADBB7C62F760A6766");
