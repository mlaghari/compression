cmd_drivers/video/fbdev/core/sysfillrect.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/video/fbdev/core/sysfillrect.ko drivers/video/fbdev/core/sysfillrect.o drivers/video/fbdev/core/sysfillrect.mod.o