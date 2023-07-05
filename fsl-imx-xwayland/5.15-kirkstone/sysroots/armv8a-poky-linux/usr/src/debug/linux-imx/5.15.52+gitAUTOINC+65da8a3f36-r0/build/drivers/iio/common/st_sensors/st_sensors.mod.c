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
	{ 0xd7680473, "iio_trigger_unregister" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb966f624, "iio_trigger_notify_done" },
	{ 0x1857d1a0, "regulator_disable" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xffca6187, "iio_trigger_alloc" },
	{ 0x86bc8961, "regmap_bulk_read" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xeac81ca8, "iio_get_time_ns" },
	{ 0x95d85d0b, "iio_trigger_poll_chained" },
	{ 0x87ae3dce, "device_get_match_data" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x9ab9bdd2, "__iio_trigger_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xf7bd9d7, "iio_trigger_using_own" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcbfc96c9, "irq_get_irq_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x44f81556, "_dev_info" },
	{ 0x9b26d69f, "devm_regulator_get" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x337930c9, "get_device" },
	{ 0xde774571, "__module_get" },
	{ 0x96156030, "iio_trigger_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3d256ea, "dev_fwnode" },
	{ 0x96848186, "scnprintf" },
	{ 0x96500a64, "iio_push_to_buffers" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x9b72ce26, "device_property_present" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x250ebd23, "regulator_enable" },
};

MODULE_INFO(depends, "");

