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
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xc9a47379, "crypto_grab_skcipher" },
	{ 0x1af03745, "crypto_unregister_template" },
	{ 0x29495c39, "crypto_get_default_null_skcipher" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xe8c65a8f, "crypto_ahash_digest" },
	{ 0x1f57ba83, "crypto_register_template" },
	{ 0x53661cf8, "crypto_drop_spawn" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xfcf15497, "crypto_skcipher_decrypt" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe4d41d88, "crypto_destroy_tfm" },
	{ 0x80d432ce, "crypto_skcipher_setkey" },
	{ 0x8fa67e21, "crypto_spawn_tfm2" },
	{ 0x37a0cba, "kfree" },
	{ 0x9cea13e0, "crypto_ahash_setkey" },
	{ 0xf99e2f30, "crypto_grab_ahash" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1691f7de, "aead_register_instance" },
	{ 0xf234f2db, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");

