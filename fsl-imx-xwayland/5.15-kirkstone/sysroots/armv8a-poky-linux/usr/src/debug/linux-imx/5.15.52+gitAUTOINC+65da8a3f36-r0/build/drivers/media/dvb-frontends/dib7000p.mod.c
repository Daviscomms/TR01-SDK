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
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0xc3c116d9, "i2c_transfer" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3a54d248, "i2c_add_adapter" },
	{ 0xdcb764ad, "memset" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x61e2676b, "dibx000_exit_i2c_master" },
	{ 0xa27e1191, "dibx000_reset_i2c_master" },
	{ 0xe473e1a8, "i2c_del_adapter" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x3ddb193e, "dibx000_get_i2c_adapter" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8733236, "intlog10" },
	{ 0x27b6f8f5, "dibx000_init_i2c_master" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
};

MODULE_INFO(depends, "dibx000_common");

