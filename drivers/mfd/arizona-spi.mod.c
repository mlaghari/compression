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

MODULE_ALIAS("spi:wm5102");
MODULE_ALIAS("spi:wm5110");
MODULE_ALIAS("spi:wm8280");
MODULE_ALIAS("spi:wm1831");
MODULE_ALIAS("spi:cs47l24");

MODULE_INFO(srcversion, "13CFFD57377C5D8D9C99F65");