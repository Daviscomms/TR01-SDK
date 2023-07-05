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
	{ 0x21f3afd8, "rpmsg_send" },
	{ 0x6ae15c30, "qrtr_endpoint_register" },
	{ 0x43d311c2, "qrtr_endpoint_post" },
	{ 0x2ca474e7, "__pskb_pull_tail" },
	{ 0x5d2a551, "unregister_rpmsg_driver" },
	{ 0xc2d15cdb, "__register_rpmsg_driver" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0xd4c17082, "qrtr_endpoint_unregister" },
	{ 0x9b70a0e2, "devm_kmalloc" },
};

MODULE_INFO(depends, "qrtr");

