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
"depends=serio,i8042";

MODULE_ALIAS("dmi*:svn*LENOVO*:pn*20017*:pvr*LenovoIdeaPadY550*:");
MODULE_ALIAS("dmi*:svn*LENOVO*:pn*20035*:pvr*LenovoIdeaPadY550P*:");

MODULE_INFO(srcversion, "D2CAF517B0BF97F3AB155F4");
