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
	{ 0x31ca7031, "unregister_tcf_proto_ops" },
	{ 0x58d5f34a, "register_tcf_proto_ops" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x8dae33f0, "tcf_exts_validate" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x73726af1, "tcf_action_exec" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x79e5d01d, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xab4feadd, "tcf_exts_destroy" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xaf80d873, "skb_trim" },
	{ 0xc80b99a2, "tcf_exts_dump_stats" },
	{ 0xa4ec5495, "tcf_exts_dump" },
	{ 0xb0152938, "nla_put_64bit" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x23c2bd1, "nla_put" },
};

MODULE_INFO(depends, "");

