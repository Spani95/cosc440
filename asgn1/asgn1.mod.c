#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x380122c1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd471bbc7, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xf4593742, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xa0476b42, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x65e14d2d, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x406cb50f, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x87f61de, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x264586be, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x1757ab0d, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x32f82cba, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xb24c8ae4, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xaafda1c3, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x2a7272ae, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x75136f7d, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xce5e3f46, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x216dd015, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x59fd151c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xc498c3e6, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x4569a6a9, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xe49a4cb9, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xeddd94e9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x891e3a9e, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x77438aba, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AED8A55140A10775D575401");
