cmd_drivers/watchdog/ie6xx_wdt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/watchdog/ie6xx_wdt.ko drivers/watchdog/ie6xx_wdt.o drivers/watchdog/ie6xx_wdt.mod.o
