cmd_drivers/staging/sm750fb/ddk750_sii164.o := gcc-5 -Wp,-MD,drivers/staging/sm750fb/.ddk750_sii164.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/5/include -I./arch/x86/include -I./arch/x86/include/generated/uapi -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -m64 -falign-jumps=1 -falign-loops=1 -mno-80387 -mno-fp-ret-in-387 -mpreferred-stack-boundary=3 -mskip-rax-setup -mtune=generic -mno-red-zone -mcmodel=kernel -funit-at-a-time -maccumulate-outgoing-args -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_SSSE3=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -DCONFIG_AS_SHA1_NI=1 -DCONFIG_AS_SHA256_NI=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -fno-delete-null-pointer-checks -Wno-maybe-uninitialized -O2 --param=allow-store-data-races=0 -Wframe-larger-than=2048 -fno-stack-protector -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -pg -mfentry -DCC_USING_FENTRY -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -DCC_HAVE_ASM_GOTO  -DMODULE  -DKBUILD_BASENAME='"ddk750_sii164"'  -DKBUILD_MODNAME='"sm750fb"' -c -o drivers/staging/sm750fb/ddk750_sii164.o drivers/staging/sm750fb/ddk750_sii164.c

source_drivers/staging/sm750fb/ddk750_sii164.o := drivers/staging/sm750fb/ddk750_sii164.c

deps_drivers/staging/sm750fb/ddk750_sii164.o := \
  drivers/staging/sm750fb/ddk750_sii164.h \
  drivers/staging/sm750fb/ddk750_hwi2c.h \

drivers/staging/sm750fb/ddk750_sii164.o: $(deps_drivers/staging/sm750fb/ddk750_sii164.o)

$(deps_drivers/staging/sm750fb/ddk750_sii164.o):
