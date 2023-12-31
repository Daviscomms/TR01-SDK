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
	{ 0x90bf54b4, "ocelot_fdb_dump" },
	{ 0xc09265ae, "ocelot_port_mirror_add" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x7ca5236f, "ocelot_can_inject" },
	{ 0xc29e3738, "ocelot_deinit_port" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe1c91243, "ocelot_phylink_mac_link_up" },
	{ 0xcd7fc776, "dsa_switch_shutdown" },
	{ 0xa3121d6, "ocelot_sb_pool_get" },
	{ 0x4dd9be4f, "dsa_port_walk_mdbs" },
	{ 0x1ee6bc56, "ocelot_vcap_policer_add" },
	{  0x62f8c, "enetc_mdio_write" },
	{ 0x9784247, "mdio_device_free" },
	{ 0xf4ff11ea, "ocelot_cls_flower_stats" },
	{ 0xc0c74076, "ocelot_init_timestamp" },
	{ 0xfd5c77ae, "ocelot_vcap_filter_del" },
	{ 0x613d68da, "ocelot_get_bridge_fwd_mask" },
	{ 0xb866760c, "ocelot_ptp_enable" },
	{ 0xbe56e23b, "ocelot_lag_fdb_del" },
	{ 0xf66b058d, "ocelot_sb_pool_set" },
	{ 0x8baf2152, "ocelot_sb_occ_port_pool_get" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0x4d113d09, "ocelot_port_inject_frame" },
	{ 0xe28a8ecb, "ocelot_sb_port_pool_get" },
	{ 0x29c98350, "ocelot_vcap_filter_add" },
	{ 0xdf7131dd, "dsa_mdb_present_in_other_db" },
	{ 0x4820ce12, "pci_disable_device" },
	{ 0x3ea5ee54, "ocelot_regfields_init" },
	{ 0x6d3c0ff4, "__mdiobus_register" },
	{ 0xc159525, "ocelot_regmap_init" },
	{ 0x9924a0d7, "ocelot_init" },
	{ 0x265a7752, "dsa_fdb_present_in_other_db" },
	{ 0xc18675f7, "ocelot_sb_tc_pool_bind_set" },
	{ 0xe98406d8, "ocelot_port_del_dscp_prio" },
	{ 0xe6d22f06, "ocelot_port_pre_bridge_flags" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa4e63ae2, "ocelot_sb_port_pool_set" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa335ddbc, "ocelot_mact_flush" },
	{ 0x1d428c06, "ocelot_port_mdb_del" },
	{ 0x9679a59e, "flow_rule_match_vlan" },
	{ 0x729d8fd5, "ocelot_port_get_dscp_prio" },
	{ 0x78a0680d, "devm_ioremap_resource" },
	{ 0xbc349eda, "enetc_hw_alloc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5451b875, "ocelot_cls_flower_replace" },
	{ 0xc679c9af, "of_get_phy_mode" },
	{ 0x27031ec0, "ocelot_deinit_timestamp" },
	{ 0x9b1c5e76, "ocelot_mact_lookup" },
	{ 0x35d632f1, "mdiobus_unregister" },
	{ 0x9c9023c7, "ocelot_port_lag_leave" },
	{ 0xecab466d, "ocelot_port_lag_join" },
	{ 0x689bb0c, "dsa_port_walk_fdbs" },
	{ 0xe6cfea00, "ocelot_phylink_mac_link_down" },
	{ 0x3a26f3c1, "ocelot_fdb_del" },
	{ 0x9f9832dc, "ocelot_port_set_dsa_8021q_cpu" },
	{ 0x4d7183ea, "netif_rx" },
	{ 0x4edf6343, "__ocelot_write_ix" },
	{ 0x9b3f919e, "pci_set_master" },
	{ 0xdcb764ad, "memset" },
	{ 0x40d440bf, "ocelot_vcap_policer_del" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xf0745599, "ocelot_devlink_sb_register" },
	{ 0xdff1b134, "ocelot_bridge_stp_state_set" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbc140cc0, "ocelot_lag_fdb_add" },
	{ 0xf0728927, "lynx_pcs_create" },
	{ 0xa81cbb27, "of_device_is_available" },
	{ 0xeece192d, "mdiobus_free" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x8d234ebf, "mdio_device_create" },
	{ 0x2597bd3a, "dsa_unregister_switch" },
	{ 0x46202a00, "ocelot_port_vlan_filtering" },
	{ 0x180cefaf, "ocelot_cls_flower_destroy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4a2de733, "ocelot_get_ethtool_stats" },
	{ 0xce44a042, "ocelot_vlan_del" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xd0d655bc, "ocelot_deinit" },
	{ 0x3a4cb5ce, "ocelot_init_port" },
	{ 0x2af0731c, "of_get_child_by_name" },
	{ 0x94609769, "dsa_tag_8021q_register" },
	{ 0xd9e108b, "ocelot_port_set_default_prio" },
	{ 0xbcea93dd, "ptp_classify_raw" },
	{ 0x3e7c9ea, "ocelot_port_get_default_prio" },
	{ 0x80665624, "ocelot_xtr_poll_frame" },
	{ 0xe0af715e, "regmap_field_read" },
	{ 0x476b1f15, "ocelot_fdb_add" },
	{ 0x5dd6fc29, "ocelot_ptp_adjtime" },
	{ 0x44f81556, "_dev_info" },
	{ 0xd0a4a485, "ocelot_ptp_settime64" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xc663bddd, "ocelot_port_bridge_join" },
	{ 0x6cda794f, "ocelot_port_txtstamp_request" },
	{ 0xe6732c14, "ocelot_hwstamp_get" },
	{ 0x33ca0158, "ocelot_get_sset_count" },
	{ 0x699f9599, "ocelot_apply_bridge_fwd_mask" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x332d4bd9, "dsa_port_from_netdev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x2e38ebcc, "__ocelot_read_ix" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x2ee2eeab, "ocelot_vcap_block_find_filter_by_id" },
	{ 0xc6b35586, "pci_unregister_driver" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x1e8c483e, "of_get_next_available_child" },
	{ 0xca90e080, "ocelot_port_mirror_del" },
	{ 0x77cf0198, "ocelot_drain_cpu_queue" },
	{ 0xe9ea8873, "regmap_field_update_bits_base" },
	{ 0xd3ba7561, "ocelot_get_dsa_8021q_cpu_mask" },
	{ 0xab5a4bf8, "ocelot_port_add_dscp_prio" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xad3b1e1a, "ocelot_sb_occ_tc_port_bind_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x572a1b27, "dsa_register_switch" },
	{ 0x4829a47e, "memcpy" },
	{ 0x844202aa, "ocelot_get_strings" },
	{ 0xa2132289, "ocelot_port_unset_dsa_8021q_cpu" },
	{ 0x8fee3a1e, "lynx_pcs_destroy" },
	{ 0x324c01ae, "flow_rule_match_eth_addrs" },
	{ 0xc1d15a4c, "phylink_set_port_modes" },
	{ 0xf779d827, "ocelot_ptp_gettime64" },
	{ 0xff73175a, "ocelot_get_txtstamp" },
	{ 0x62006b63, "ocelot_sb_occ_max_clear" },
	{ 0xcbc79840, "ocelot_get_ts_info" },
	{ 0x182cfd25, "ocelot_sb_occ_snapshot" },
	{ 0x167e1bea, "regmap_fields_update_bits_base" },
	{ 0x8103ee83, "__pci_register_driver" },
	{ 0x2af21efc, "ocelot_get_max_mtu" },
	{ 0x644a1014, "ocelot_vcap_filter_replace" },
	{ 0x2e624d9, "ocelot_port_set_maxlen" },
	{ 0xd424764b, "ocelot_port_bridge_leave" },
	{ 0xae44c84, "ocelot_ptp_verify" },
	{ 0x3d152f3b, "ocelot_devlink_sb_unregister" },
	{ 0xa91eeca2, "ocelot_port_bridge_flags" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x48407624, "ocelot_ptp_adjfine" },
	{ 0xf84c3df6, "lynx_get_mdio_device" },
	{ 0x9649c9cc, "ocelot_sb_tc_pool_bind_get" },
	{ 0xcbe2e529, "ocelot_mact_learn_streamdata" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc4ef2d49, "ocelot_vlan_add" },
	{ 0xa89db71d, "ocelot_port_mdb_add" },
	{ 0xbba93d47, "ocelot_port_policer_add" },
	{ 0x7ae94665, "enetc_mdio_read" },
	{ 0x569b5601, "ocelot_port_lag_change" },
	{ 0x6b62332b, "ocelot_port_policer_del" },
	{ 0x65cfc77d, "ocelot_hwstamp_set" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x80c2a3d2, "pci_enable_device" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x36fd07ad, "__ocelot_rmw_ix" },
	{ 0x530dab6c, "ocelot_set_ageing_time" },
	{ 0x2dc42123, "phylink_set_pcs" },
	{ 0x1be1d354, "dsa_tag_8021q_unregister" },
	{ 0x5e3694b8, "mdiobus_alloc_size" },
	{ 0xde28135e, "ocelot_vlan_prepare" },
};

MODULE_INFO(depends, "dsa_core");

MODULE_ALIAS("pci:v00001957d0000EEF0sv*sd*bc*sc*i*");
