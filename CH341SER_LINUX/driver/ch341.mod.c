#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1b8b0f85, "tty_port_hangup" },
	{ 0x92dc580e, "tty_port_close" },
	{ 0xe7dd52f9, "tty_port_open" },
	{ 0x21d81531, "usb_deregister" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7719de57, "usb_autopm_get_interface_async" },
	{ 0xbba258ad, "usb_anchor_urb" },
	{ 0xeadbe8e6, "usb_autopm_get_interface" },
	{ 0x679722b3, "usb_control_msg" },
	{ 0xad6d045f, "kmalloc_caches" },
	{ 0x850e6a88, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x1bc99d4b, "usb_ifnum_to_if" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcdc475fb, "tty_port_init" },
	{ 0xf865343f, "usb_alloc_coherent" },
	{ 0xef31351c, "usb_alloc_urb" },
	{ 0xc8754da, "_dev_info" },
	{ 0xbf8bbd0e, "usb_driver_claim_interface" },
	{ 0xa76be773, "usb_get_intf" },
	{ 0x5c2fcc61, "tty_port_register_device" },
	{ 0xef07e8e1, "usb_free_urb" },
	{ 0xffcd2306, "usb_free_coherent" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x20978fb9, "idr_find" },
	{ 0x98f593c4, "tty_standard_install" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf72e8c06, "pcpu_hot" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa19b956, "__stack_chk_fail" },
	{ 0x6c257ac0, "tty_termios_hw_change" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0x96a0cd90, "usb_put_intf" },
	{ 0xcdfcc001, "tty_port_tty_get" },
	{ 0xa4b84cfa, "tty_vhangup" },
	{ 0x42ba7f91, "tty_kref_put" },
	{ 0xf022f20e, "tty_unregister_device" },
	{ 0x6b6c6761, "usb_driver_release_interface" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x2e6c9f5a, "usb_submit_urb" },
	{ 0xb671f400, "_dev_err" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x9feb243b, "usb_autopm_put_interface_async" },
	{ 0x7b0c27e0, "usb_kill_urb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xde2c4902, "tty_port_put" },
	{ 0xf4eaea22, "__tty_alloc_driver" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x93a664e2, "tty_register_driver" },
	{ 0x914ccc00, "usb_register_driver" },
	{ 0x122c3a7e, "_printk" },
	{ 0x2f3d178a, "tty_unregister_driver" },
	{ 0x6742b04f, "tty_driver_kref_put" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4822a91b, "__dynamic_dev_dbg" },
	{ 0xb453a97a, "tty_port_tty_hangup" },
	{ 0xe5d49266, "tty_insert_flip_string_fixed_flag" },
	{ 0xefa19d12, "tty_flip_buffer_push" },
	{ 0x39c56b90, "usb_autopm_get_interface_no_resume" },
	{ 0x7f97199b, "usb_autopm_put_interface" },
	{ 0x9c5091dd, "usb_get_from_anchor" },
	{ 0x7c8611d4, "tty_port_tty_wakeup" },
	{ 0x453e7dc, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1A86p7523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p7522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p5523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86pE523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4348p5523d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D4B228097D2B7219B44DB95");
