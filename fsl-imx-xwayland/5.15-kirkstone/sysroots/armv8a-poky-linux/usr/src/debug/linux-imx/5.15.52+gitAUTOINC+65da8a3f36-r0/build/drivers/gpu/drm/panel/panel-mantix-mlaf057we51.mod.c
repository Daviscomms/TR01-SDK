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
	{ 0x48549ea1, "mipi_dsi_driver_unregister" },
	{ 0xb2d21ff4, "mipi_dsi_driver_register_full" },
	{ 0xad1d54eb, "mipi_dsi_detach" },
	{ 0xa190760, "mipi_dsi_turn_on_peripheral" },
	{ 0x237637e7, "mipi_dsi_dcs_set_display_on" },
	{ 0xac831429, "mipi_dsi_dcs_exit_sleep_mode" },
	{ 0xda2f2baf, "mipi_dsi_generic_write" },
	{ 0x7fb52449, "drm_mode_probed_add" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0xd318edda, "drm_mode_duplicate" },
	{ 0xe9603732, "drm_panel_remove" },
	{ 0x44f81556, "_dev_info" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x1f6725e3, "mipi_dsi_attach" },
	{ 0xe5b733da, "drm_panel_add" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0xb6b8be23, "drm_panel_of_backlight" },
	{ 0xf11bfead, "drm_panel_init" },
	{ 0x9b26d69f, "devm_regulator_get" },
	{ 0xc3201a50, "devm_gpiod_get" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x250ebd23, "regulator_enable" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x8e3c8fab, "mipi_dsi_dcs_enter_sleep_mode" },
	{ 0x5a87c081, "mipi_dsi_dcs_set_display_off" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1857d1a0, "regulator_disable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe3f4d0d8, "gpiod_set_value_cansleep" },
	{ 0x3a2078d2, "drm_panel_disable" },
	{ 0xa4b8cdd4, "drm_panel_unprepare" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmantix,mlaf057we51-x");
MODULE_ALIAS("of:N*T*Cmantix,mlaf057we51-xC*");
MODULE_ALIAS("of:N*T*Cys,ys57pss36bh5gq");
MODULE_ALIAS("of:N*T*Cys,ys57pss36bh5gqC*");
