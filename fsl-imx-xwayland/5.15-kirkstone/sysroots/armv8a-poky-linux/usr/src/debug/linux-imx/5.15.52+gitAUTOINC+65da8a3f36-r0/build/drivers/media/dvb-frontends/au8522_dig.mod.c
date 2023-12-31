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
	{ 0x90856fcf, "au8522_release_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0x6d60c7c, "au8522_led_ctrl" },
	{ 0x31658d87, "au8522_writereg" },
	{ 0x4cf2b909, "au8522_readreg" },
	{ 0xf71a0f6d, "au8522_i2c_gate_ctrl" },
	{ 0x727dc3cf, "au8522_sleep" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x9518b0ef, "au8522_analog_i2c_gate_ctrl" },
	{ 0x340b595, "au8522_get_state" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd4d7ce1b, "au8522_init" },
};

MODULE_INFO(depends, "au8522_common");

