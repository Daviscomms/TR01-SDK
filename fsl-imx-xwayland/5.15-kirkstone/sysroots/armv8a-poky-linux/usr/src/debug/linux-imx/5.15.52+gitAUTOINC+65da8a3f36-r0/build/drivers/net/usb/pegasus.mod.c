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
	{ 0xc264d4ce, "param_ops_bool" },
	{ 0xa0d2ef8e, "param_ops_charp" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0x1aff05fc, "eth_validate_addr" },
	{ 0x3adbd83e, "eth_mac_addr" },
	{ 0xf75d67ac, "usb_deregister" },
	{ 0x3082df47, "usb_register_driver" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x85df9b6c, "strsep" },
	{ 0x92997ed8, "_printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x44f81556, "_dev_info" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xbf8e4c5f, "register_netdev" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x93892abc, "alloc_etherdev_mqs" },
	{ 0xf5754987, "netif_carrier_off" },
	{ 0x2e4d65db, "netif_carrier_on" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6af771, "usb_control_msg_recv" },
	{ 0xf0ba9bb8, "device_set_wakeup_enable" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xd745e710, "netif_device_attach" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x4ef660c1, "__netdev_alloc_skb" },
	{ 0x4d7183ea, "netif_rx" },
	{ 0xa97fd475, "eth_type_trans" },
	{ 0x1a7137b5, "skb_put" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2815f617, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfdd9e64b, "free_netdev" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x49d4d739, "unregister_netdev" },
	{ 0xb9b72d0d, "usb_control_msg_send" },
	{ 0x977ede3c, "netdev_info" },
	{ 0x4f2a6696, "usb_alloc_urb" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x7fdd07ce, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xc77d8a28, "netdev_warn" },
	{ 0xea610d1, "usb_unlink_urb" },
	{ 0x65344c0c, "mii_nway_restart" },
	{ 0x8358a4db, "mii_link_ok" },
	{ 0x9851b735, "mii_ethtool_get_link_ksettings" },
	{ 0x58b37aae, "mii_ethtool_set_link_ksettings" },
	{ 0x692ddc79, "usb_kill_urb" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x14efd444, "netdev_err" },
	{ 0x6f3c2663, "netif_device_detach" },
	{ 0x1d163a9f, "usb_submit_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0506p4601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p110Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p400Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p400Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pABC1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p200Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap1046d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap5046d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApB004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07A6p8511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07A6p8513d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07A6p8515d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07A6p0986d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07A6p07C2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3334p1701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C9pB100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0121d*dc00dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0122d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0986d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0987d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp8511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0988d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp8511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p400Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p200Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001pABC1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB7p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1342p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p400Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p811Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0913d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0951p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep400Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056EpABC1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep200Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2204d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2206d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Bp08B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp400Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp200Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep007Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B39p0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B39p0901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D1p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707p0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15E8p9100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15E8p9110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Cp1001d*dc*dsc*dp*ic*isc*ip*in*");
