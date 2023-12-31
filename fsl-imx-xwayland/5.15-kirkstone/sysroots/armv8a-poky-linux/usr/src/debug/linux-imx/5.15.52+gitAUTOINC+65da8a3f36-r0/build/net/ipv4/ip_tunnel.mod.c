#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc30f8a7c, "module_layout" },
	{ 0xa6bf73ea, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe7801cac, "iptun_encaps" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x4174a03f, "dst_release" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd660f671, "dst_cache_get_ip4" },
	{ 0x9d8ced5d, "neigh_destroy" },
	{ 0x57ee6ac5, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdcb764ad, "memset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x638c7455, "ns_capable" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xfdd9e64b, "free_netdev" },
	{ 0x74448d61, "icmp_ndo_send" },
	{ 0x5792f848, "strlcpy" },
	{ 0x702d8fd2, "iptunnel_xmit" },
	{ 0x951b633a, "gro_cells_receive" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x482e3152, "init_net" },
	{ 0x69f3c7c6, "__skb_get_hash" },
	{ 0xfb5fa0f8, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xae5f342b, "icmpv6_ndo_send" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x92997ed8, "_printk" },
	{ 0x3a9b68b8, "alloc_netdev_mqs" },
	{ 0xa97fd475, "eth_type_trans" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x33ff7af4, "pskb_expand_head" },
	{ 0x7e87d822, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xeb9bd801, "unregister_netdevice_queue" },
	{ 0x1fa998f3, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7eae6d9b, "gro_cells_init" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd232e8b0, "dst_cache_set_ip4" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb2f181d6, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x5710282c, "dev_set_mtu" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");

