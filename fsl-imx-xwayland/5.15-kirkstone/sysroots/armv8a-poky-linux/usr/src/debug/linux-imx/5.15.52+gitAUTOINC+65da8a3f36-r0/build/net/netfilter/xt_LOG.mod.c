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
	{ 0x4c81e8e4, "xt_unregister_targets" },
	{ 0x467bc214, "xt_register_targets" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x4ab8c02d, "nf_log_packet" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xd1f2eee2, "nf_logger_find_get" },
	{ 0xb8cd3a7f, "nf_logger_put" },
};

MODULE_INFO(depends, "x_tables");

