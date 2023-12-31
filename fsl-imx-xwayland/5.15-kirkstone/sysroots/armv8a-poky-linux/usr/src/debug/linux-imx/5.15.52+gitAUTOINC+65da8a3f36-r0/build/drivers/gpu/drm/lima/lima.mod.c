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
	{ 0xcc445ceb, "__sg_page_iter_dma_next" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x328c4d32, "kmem_cache_destroy" },
	{ 0xecdec901, "drm_release" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xcd723c3e, "drm_dev_register" },
	{ 0x354f3f52, "drm_compat_ioctl" },
	{ 0x7f3e258, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0x8826217f, "sysfs_remove_bin_file" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x891b144c, "devfreq_resume_device" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0xcf5cda4b, "drm_dev_alloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0x95879b36, "__pm_runtime_use_autosuspend" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x5dd3aa5a, "__pm_runtime_suspend" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0xc2312a8e, "dma_unmap_sg_attrs" },
	{ 0x1857d1a0, "regulator_disable" },
	{ 0xdde1fc13, "drm_gem_shmem_mmap" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x57038f04, "drm_sched_resubmit_jobs" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x86ee476d, "drm_gem_shmem_get_pages_sgt" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x5961b8b3, "devm_devfreq_add_device" },
	{ 0xce145ada, "drm_gem_unlock_reservations" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x434f470d, "pm_runtime_force_resume" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x51027faa, "devfreq_suspend_device" },
	{ 0x25fecfd4, "dma_map_sgtable" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0xaa830fbb, "dma_free_attrs" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x745a981, "xa_erase" },
	{ 0x4b86495d, "dma_set_coherent_mask" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xcef889ce, "drm_sched_increase_karma" },
	{ 0x55b10201, "__get_task_comm" },
	{ 0xb1734fa1, "devm_pm_opp_of_add_table" },
	{ 0x1c7ee8bb, "drm_gem_shmem_pin" },
	{ 0x1a411479, "drm_syncobj_free" },
	{ 0x1c9a6f3f, "drm_dev_put" },
	{ 0xf0517d7a, "drm_mm_init" },
	{ 0xd9639292, "devm_devfreq_remove_device" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xa12ac326, "drm_gem_shmem_prime_import_sg_table" },
	{ 0xa8744af9, "drm_gem_shmem_print_info" },
	{ 0x380c2bb1, "sg_alloc_table_from_pages_segment" },
	{ 0xf037da32, "drm_sched_stop" },
	{ 0x49b7afb3, "drm_dev_unregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x83d510bd, "drm_gem_dma_resv_wait" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x35167064, "drm_sched_entity_fini" },
	{ 0xdc96e963, "drm_gem_shmem_free_object" },
	{ 0x4f01b587, "dma_resv_add_shared_fence" },
	{ 0x43efd458, "drm_gem_handle_create" },
	{ 0xf6b74864, "vmap" },
	{ 0x40cadc0a, "shmem_read_mapping_page_gfp" },
	{ 0x210a3ce3, "drm_sched_fini" },
	{ 0xec67f145, "devm_pm_opp_set_clkname" },
	{ 0x3e192420, "drm_sched_init" },
	{ 0x50674de7, "drm_timeout_abs_to_jiffies" },
	{ 0xc56eb497, "dma_alloc_attrs" },
	{ 0xf820c399, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x56e41a93, "dev_pm_opp_set_rate" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x170a16e2, "drm_read" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x8e1a37f7, "noop_llseek" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x5b7e5d39, "kmem_cache_create_usercopy" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xf57740c4, "drm_gem_shmem_vunmap" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xe9279079, "drm_gem_prime_fd_to_handle" },
	{ 0xf3d0638, "drm_ioctl" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xd791bab4, "drm_gem_mmap" },
	{ 0x3e50b109, "drm_gem_fence_array_add" },
	{ 0x874accf, "platform_get_irq_byname_optional" },
	{ 0x7cdef8ef, "drm_gem_fence_array_add_implicit" },
	{ 0x1ea76970, "drm_syncobj_replace_fence" },
	{ 0x46c807df, "dev_pm_opp_put" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x4116c791, "drm_sched_start" },
	{ 0x7c191d0a, "dma_resv_reserve_shared" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xf56ebd38, "platform_get_irq_byname" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2b1ba535, "__pm_runtime_set_status" },
	{ 0x473069dd, "devm_reset_control_array_get" },
	{ 0xa036707b, "drm_gem_object_lookup" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xae5ad19f, "drm_sched_fault" },
	{ 0xc231191d, "devm_regulator_get_optional" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x54f24595, "drm_gem_prime_handle_to_fd" },
	{ 0x141626e0, "kmem_cache_create" },
	{ 0xcf547d9e, "drm_sched_job_init" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xf399b25e, "devfreq_recommended_opp" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x6a4f795b, "drm_sched_job_cleanup" },
	{ 0xa01b1ec5, "sysfs_create_bin_file" },
	{ 0x6295f99b, "drm_gem_shmem_unpin" },
	{ 0xb4032484, "drm_mm_insert_node_in_range" },
	{ 0x2936c0e1, "drm_gem_lock_reservations" },
	{ 0x8faf9b98, "drm_gem_shmem_create" },
	{ 0x57698a50, "drm_mm_takedown" },
	{ 0x8ddd463a, "pm_runtime_set_autosuspend_delay" },
	{ 0x40fbdf12, "drm_gem_prime_mmap" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x11b24592, "devm_pm_opp_set_regulators" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x902e36af, "drm_syncobj_find_fence" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4b7ebf95, "drm_mm_remove_node" },
	{ 0xb1acde5c, "drm_sched_entity_init" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xb61632ee, "param_ops_uint" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf02e36f, "dma_resv_add_excl_fence" },
	{ 0x3487e145, "drm_syncobj_find" },
	{ 0x8a111c5f, "drm_gem_shmem_get_sg_table" },
	{ 0x426b2955, "drm_gem_shmem_vmap" },
	{ 0xc71329f7, "drm_poll" },
	{ 0x24650ce9, "devm_platform_ioremap_resource" },
	{ 0xe3fe0bfa, "drm_sched_entity_push_job" },
	{ 0x9b72ce26, "device_property_present" },
	{ 0x250ebd23, "regulator_enable" },
	{ 0x32fcf7a0, "drm_open" },
};

MODULE_INFO(depends, "gpu-sched");

MODULE_ALIAS("of:N*T*Carm,mali-400");
MODULE_ALIAS("of:N*T*Carm,mali-400C*");
MODULE_ALIAS("of:N*T*Carm,mali-450");
MODULE_ALIAS("of:N*T*Carm,mali-450C*");
