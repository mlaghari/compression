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

MODULE_ALIAS("spi:ad5760");
MODULE_ALIAS("spi:ad5780");
MODULE_ALIAS("spi:ad5781");
MODULE_ALIAS("spi:ad5790");
MODULE_ALIAS("spi:ad5791");

MODULE_INFO(srcversion, "957B89B2C386E052E6BD695");
