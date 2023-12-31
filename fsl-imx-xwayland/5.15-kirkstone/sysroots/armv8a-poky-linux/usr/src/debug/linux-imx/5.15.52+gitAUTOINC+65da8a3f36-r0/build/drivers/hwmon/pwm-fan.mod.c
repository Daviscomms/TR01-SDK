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
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0x664d962b, "devm_thermal_of_cooling_device_register" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x167275f1, "of_property_count_elems_of_size" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0xd0c830be, "devm_hwmon_device_register_with_info" },
	{ 0x72072124, "platform_get_irq" },
	{ 0xdc9a6fc6, "of_property_read_u32_index" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x4b8eb05b, "platform_irq_count" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6c0dca5a, "devm_add_action" },
	{ 0xc231191d, "devm_regulator_get_optional" },
	{ 0x7068ce3c, "devm_of_pwm_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1857d1a0, "regulator_disable" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xea466442, "pwm_apply_state" },
	{ 0x250ebd23, "regulator_enable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpwm-fan");
MODULE_ALIAS("of:N*T*Cpwm-fanC*");
