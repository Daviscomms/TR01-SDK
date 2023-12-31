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
	{ 0xaba12d7f, "usbnet_resume" },
	{ 0x55e7daad, "usbnet_suspend" },
	{ 0xfe44bb2a, "usbnet_disconnect" },
	{ 0xded225a5, "usbnet_probe" },
	{ 0xf75d67ac, "usb_deregister" },
	{ 0x3082df47, "usb_register_driver" },
	{ 0xa3ce7100, "usbnet_write_cmd_async" },
	{ 0xaf80d873, "skb_trim" },
	{ 0x9d127634, "skb_pull" },
	{ 0x977ede3c, "netdev_info" },
	{ 0x23fb529f, "usbnet_write_cmd" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x402e666e, "usbnet_read_cmd" },
	{ 0xfbd05a1a, "usbnet_get_endpoints" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x1a7137b5, "skb_put" },
	{ 0x890342b2, "skb_push" },
	{ 0xca320b7, "__dev_kfree_skb_any" },
	{ 0x9746b3f0, "skb_copy_expand" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");
