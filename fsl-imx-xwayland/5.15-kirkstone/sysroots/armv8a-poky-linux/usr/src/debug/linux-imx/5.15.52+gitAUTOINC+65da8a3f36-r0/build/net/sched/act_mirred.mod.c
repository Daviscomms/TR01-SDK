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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc30f8a7c, "module_layout" },
	{ 0xd58e1d79, "tcf_unregister_action" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x1588b6b2, "tcf_register_action" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x349cba85, "strchr" },
	{ 0x4174a03f, "dst_release" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x92997ed8, "_printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3b41b13f, "tcf_dev_queue_xmit" },
	{ 0x17f43246, "dev_queue_xmit" },
	{ 0x890342b2, "skb_push" },
	{ 0xa1bb21e4, "netif_receive_skb" },
	{ 0x8ce1364e, "skb_pull_rcsum" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa777c81e, "skb_clone" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6912d397, "tcf_idr_cleanup" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xbe069a82, "tcf_idr_release" },
	{ 0xe2ce09f, "tcf_chain_put_by_act" },
	{ 0xd6ab9938, "tcf_action_set_ctrlact" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x1eeaedae, "dev_get_by_index" },
	{ 0x8e1607d3, "tcf_action_check_ctrlact" },
	{ 0x5b6b7e35, "tcf_idr_create_from_flags" },
	{ 0xeb091958, "tcf_idr_check_alloc" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xaf80d873, "skb_trim" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb0152938, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x23c2bd1, "nla_put" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xd4c01226, "tcf_idr_search" },
	{ 0x37e60ef9, "tcf_generic_walker" },
	{ 0x823aae5c, "tcf_action_update_stats" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x512da9c6, "tcf_idrinfo_destroy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc7a4fbed, "rtnl_lock" },
};

MODULE_INFO(depends, "");

