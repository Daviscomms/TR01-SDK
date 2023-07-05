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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xecdec901, "drm_release" },
	{ 0x1473b143, "drm_plane_create_color_properties" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0xcd723c3e, "drm_dev_register" },
	{ 0x354f3f52, "drm_compat_ioctl" },
	{ 0x815588a6, "clk_enable" },
	{ 0x6445b735, "drm_atomic_helper_update_plane" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0xcf5cda4b, "drm_dev_alloc" },
	{ 0xf6cb582e, "single_open" },
	{ 0x78dabbb9, "component_unbind_all" },
	{ 0xc2a138d0, "drm_mode_config_helper_resume" },
	{ 0xca190085, "drm_format_info_block_height" },
	{ 0xbc0cd496, "drm_mode_config_cleanup" },
	{ 0xb6819b0f, "drm_plane_create_blend_mode_property" },
	{ 0x6ef2f78e, "drm_format_info" },
	{ 0xb6e744ca, "drm_mode_config_reset" },
	{ 0x172c38e0, "drm_atomic_helper_commit_hw_done" },
	{ 0x12ff2380, "drm_atomic_helper_page_flip" },
	{ 0xdbb0b953, "single_release" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf2578039, "drm_crtc_handle_vblank" },
	{ 0x7d387c55, "of_graph_get_port_by_id" },
	{ 0x4f23702, "__drm_atomic_helper_crtc_reset" },
	{ 0x82565df2, "drm_plane_create_rotation_property" },
	{ 0xa35ee84b, "drm_helper_probe_single_connector_modes" },
	{ 0x6d7399bf, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x68ebb4c0, "drm_crtc_vblank_off" },
	{ 0x327f48f9, "platform_bus_type" },
	{ 0xd1db2def, "component_bind_all" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc310b981, "strnstr" },
	{ 0x78a0680d, "devm_ioremap_resource" },
	{ 0x1253cdb6, "drm_fb_cma_get_gem_addr" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0x28779e52, "drm_printf" },
	{ 0x6350dd8, "drm_vblank_init" },
	{ 0xb8f888d5, "component_master_del" },
	{ 0xe8580af1, "drm_of_component_match_add" },
	{ 0x3b235e89, "debugfs_create_file" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x68ffd8a7, "__drm_atomic_helper_connector_duplicate_state" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xfae79a6e, "drm_crtc_enable_color_mgmt" },
	{ 0x26b3ba67, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0x926155f3, "seq_read" },
	{ 0xce2b8625, "drm_universal_plane_init" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x98537945, "drm_get_format_info" },
	{ 0x4af8e3aa, "drm_connector_cleanup" },
	{ 0xeecdd9d, "__drm_atomic_helper_plane_duplicate_state" },
	{ 0xf25ef608, "of_reserved_mem_device_init_by_idx" },
	{ 0xd89aa58e, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0x2772b215, "of_property_read_variable_u8_array" },
	{ 0xd5b83de2, "drm_gem_cma_dumb_create_internal" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb02ca513, "drm_fbdev_generic_setup" },
	{ 0xbad2a2cc, "drm_atomic_helper_set_config" },
	{ 0x71e8aa22, "drm_plane_create_alpha_property" },
	{ 0x1c9a6f3f, "drm_dev_put" },
	{ 0x49b7afb3, "drm_dev_unregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4def48c3, "of_graph_get_remote_node" },
	{ 0xb8e7e480, "__drm_atomic_helper_plane_reset" },
	{ 0xe0dd2173, "drm_atomic_helper_disable_planes_on_crtc" },
	{ 0x12c87e6c, "drm_crtc_init_with_planes" },
	{ 0x2011343c, "drm_atomic_helper_check_plane_state" },
	{ 0xba7d08b2, "drm_gem_fb_get_obj" },
	{ 0x5dd382cb, "drm_gem_fb_create" },
	{ 0xeeb8d8fb, "drm_crtc_vblank_on" },
	{ 0xfe9f72f3, "drm_display_mode_to_videomode" },
	{ 0xfb77e23e, "drm_fb_cma_get_gem_obj" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xccc59759, "drm_format_info_block_width" },
	{ 0x2da9c344, "platform_get_resource" },
	{ 0x170a16e2, "drm_read" },
	{ 0x8e1a37f7, "noop_llseek" },
	{ 0xa049e816, "__drm_atomic_helper_connector_destroy_state" },
	{ 0xf01fb719, "__drm_atomic_helper_connector_reset" },
	{ 0xbb479485, "drm_mode_config_helper_suspend" },
	{ 0x19b6a6, "of_match_device" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfbd09116, "drm_writeback_connector_init" },
	{ 0xb7a41123, "iommu_get_domain_for_dev" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xe9279079, "drm_gem_prime_fd_to_handle" },
	{ 0xca634a9e, "drm_plane_cleanup" },
	{ 0xf3d0638, "drm_ioctl" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xd791bab4, "drm_gem_mmap" },
	{ 0x79490af7, "iommu_present" },
	{ 0x9cbea302, "drm_atomic_helper_connector_destroy_state" },
	{ 0xf08375b3, "__drm_atomic_helper_plane_destroy_state" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0xed8c7070, "of_reserved_mem_device_release" },
	{ 0x13c219b2, "drm_atomic_helper_check" },
	{ 0x70413336, "drm_atomic_helper_commit" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xf56ebd38, "platform_get_irq_byname" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2b1ba535, "__pm_runtime_set_status" },
	{ 0xc276e44, "drm_atomic_helper_commit_modeset_disables" },
	{ 0x949908f0, "drm_crtc_send_vblank_event" },
	{ 0xa036707b, "drm_gem_object_lookup" },
	{ 0xda084e5a, "drm_crtc_vblank_get" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xbdcd06fc, "drm_add_modes_noedid" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x13854a6, "drmm_mode_config_init" },
	{ 0x54f24595, "drm_gem_prime_handle_to_fd" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xf5320217, "drm_gem_cma_prime_import_sg_table" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x74d388ba, "drm_writeback_signal_completion" },
	{ 0x475b05f9, "drm_crtc_cleanup" },
	{ 0xd4423e61, "seq_lseek" },
	{ 0xfcae3fc7, "drm_atomic_helper_commit_planes" },
	{ 0x170d6ff6, "drm_writeback_queue_job" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdc667bf0, "drm_atomic_helper_cleanup_planes" },
	{ 0xe925150f, "drm_atomic_helper_shutdown" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xcb7efe2b, "drm_crtc_vblank_count" },
	{ 0x40fbdf12, "drm_gem_prime_mmap" },
	{ 0x1f29d353, "drm_atomic_helper_disable_plane" },
	{ 0x5ad383c6, "component_master_add_with_match" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb9b1db4c, "drm_dev_dbg" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x13cb9254, "drm_kms_helper_poll_init" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x61c3ab7a, "drm_atomic_helper_commit_modeset_enables" },
	{ 0x42cd4944, "drm_mode_crtc_set_gamma_size" },
	{ 0xc71329f7, "drm_poll" },
	{ 0x32fcf7a0, "drm_open" },
	{ 0xa98eccec, "drm_kms_helper_poll_fini" },
	{ 0x46010ef6, "drm_atomic_helper_check_modeset" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Carm,mali-dp500");
MODULE_ALIAS("of:N*T*Carm,mali-dp500C*");
MODULE_ALIAS("of:N*T*Carm,mali-dp550");
MODULE_ALIAS("of:N*T*Carm,mali-dp550C*");
MODULE_ALIAS("of:N*T*Carm,mali-dp650");
MODULE_ALIAS("of:N*T*Carm,mali-dp650C*");
