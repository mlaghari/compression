cmd_drivers/watchdog/w83977f_wdt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/watchdog/w83977f_wdt.ko drivers/watchdog/w83977f_wdt.o drivers/watchdog/w83977f_wdt.mod.o