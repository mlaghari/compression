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
"depends=snd-pcm,snd-i2c,snd-mpu401-uart,snd,snd-ice17xx-ak4xxx,snd-cs8427,snd-ak4xxx-adda,snd-ac97-codec";

MODULE_ALIAS("pci:v00001412d00001712sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EE00F9B34134D4C6070CF9E");