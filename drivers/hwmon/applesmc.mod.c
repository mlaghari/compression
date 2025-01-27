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
"depends=input-polldev";

MODULE_ALIAS("dmi*:pn*MacBookAir*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*MacBookPro*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*MacBook*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*Macmini*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*MacPro*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*iMac*:rvn*Apple*:");

MODULE_INFO(srcversion, "99F26C14F515EEF42BFB196");
