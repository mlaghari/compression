cmd_net/ipv6/netfilter/ip6table_mangle.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/ipv6/netfilter/ip6table_mangle.ko net/ipv6/netfilter/ip6table_mangle.o net/ipv6/netfilter/ip6table_mangle.mod.o
