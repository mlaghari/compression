cmd_net/netfilter/nf_nat_amanda.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/netfilter/nf_nat_amanda.ko net/netfilter/nf_nat_amanda.o net/netfilter/nf_nat_amanda.mod.o
