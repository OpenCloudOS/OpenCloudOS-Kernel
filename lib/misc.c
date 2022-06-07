#include <linux/utsname.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/major.h>
#include <linux/syscalls.h>
#include <linux/string.h>
#include <linux/fcntl.h>
#include <linux/slab.h>
#include <linux/random.h>
#include <linux/reboot.h>
#include <linux/poll.h>
#include <linux/init.h>
#include <linux/fs.h>
#include <linux/genhd.h>
#include <linux/interrupt.h>
#include <linux/mm.h>
#include <linux/nodemask.h>
#include <linux/spinlock.h>
#include <linux/kthread.h>
#include <linux/percpu.h>
#include <linux/cryptohash.h>
#include <linux/fips.h>
#include <linux/ptrace.h>
#include <linux/workqueue.h>
#include <linux/irq.h>
#include <linux/ratelimit.h>
#include <linux/syscalls.h>
#include <linux/completion.h>
#include <linux/uuid.h>
#include <linux/mod_devicetable.h>
#include <net/strparser.h>
#include <net/xfrm.h>
#include <linux/nls.h>
#include <linux/efi.h>

struct clk {
};

struct stp_proto {
};

struct miscdevice{
};

struct acpi_hest_generic_status {
};

struct fid{
};

struct sysrq_key_op{
};

struct nvmem_cell {
    const char      *name;
    int         offset;
    int         bytes;
    int         bit_offset;
    int         nbits;
    struct device_node  *np; 
    struct nvmem_device *nvmem;
    struct list_head    node;
};

int utf16s_to_utf8s(const wchar_t *pwcs, int len,
        enum utf16_endian endian, u8 *s, int maxlen)
{
	return 0;
}
EXPORT_SYMBOL(utf16s_to_utf8s);

unsigned long randomize_page(unsigned long start, unsigned long range)
{
	return 0;
}
EXPORT_SYMBOL(randomize_page);

void nvmem_cell_put(struct nvmem_cell *cell)
{
}
EXPORT_SYMBOL(nvmem_cell_put);

void *nvmem_cell_read(struct nvmem_cell *cell, size_t *len)
{
	return NULL;
}
EXPORT_SYMBOL(nvmem_cell_read);

void del_random_ready_callback(struct random_ready_callback *rdy)
{
}
EXPORT_SYMBOL(del_random_ready_callback);

int wait_for_random_bytes(void)
{
	return 0;
}
EXPORT_SYMBOL(wait_for_random_bytes);

dma_addr_t __phys_to_dma(struct device *dev, phys_addr_t paddr)
{
	return 0;
}
EXPORT_SYMBOL(__phys_to_dma);

struct nvmem_cell *nvmem_cell_get(struct device *dev, const char *id)
{
	return NULL;
}
EXPORT_SYMBOL(nvmem_cell_get);

void add_interrupt_randomness(int irq, int irq_flags)
{
}
EXPORT_SYMBOL(add_interrupt_randomness);

void add_disk_randomness(struct gendisk *disk)
{
}
EXPORT_SYMBOL(add_disk_randomness);

int add_random_ready_callback(struct random_ready_callback *rdy)
{
	return 0;
}
EXPORT_SYMBOL(add_random_ready_callback);

void get_random_bytes (void *buf, int nbytes)
{
	(void)buf;
	(void)nbytes;
}
EXPORT_SYMBOL(get_random_bytes);

/*
 * This function will use the architecture-specific hardware random
 * number generator if it is available.  The arch-specific hw RNG will
 * almost certainly be faster than what we can do in software, but it
 * is impossible to verify that it is implemented securely (as
 * opposed, to, say, the AES encryption of a sequence number using a
 * key known by the NSA).  So it's useful if we need the speed, but
 * only if we're willing to trust the hardware manufacturer not to
 * have put in a back door.
 *
 * Return number of bytes filled in.
 */
int __must_check get_random_bytes_arch(void *buf, int nbytes)
{
	return 0;
}
EXPORT_SYMBOL(get_random_bytes_arch);

u32 get_random_u32(void)
{
	return 0;
}
EXPORT_SYMBOL(get_random_u32);

/*
 * Add device- or boot-specific data to the input pool to help
 * initialize it.
 *
 * None of this adds any entropy; it is meant to avoid the problem of
 * the entropy pool having similar initial state across largely
 * identical devices.
 */
void add_device_randomness(const void *buf, unsigned int size)
{
}
EXPORT_SYMBOL(add_device_randomness);

int stp_proto_register(const struct stp_proto *proto)
{
	return 0;
}
EXPORT_SYMBOL_GPL(stp_proto_register);

void stp_proto_unregister(const struct stp_proto *proto)
{
}
EXPORT_SYMBOL_GPL(stp_proto_unregister);

int llc_mac_hdr_init(struct sk_buff *skb,
             const unsigned char *sa, const unsigned char *da)
{
	return 0;
}
EXPORT_SYMBOL_GPL(llc_mac_hdr_init);

int xfrm6_input_addr(struct sk_buff *skb, xfrm_address_t *daddr,
             xfrm_address_t *saddr, u8 proto)
{
	return 0;
}
EXPORT_SYMBOL_GPL(xfrm6_input_addr);

int strp_init(struct strparser *strp, struct sock *sk,
          const struct strp_callbacks *cb)
{
	return 0;
}
EXPORT_SYMBOL_GPL(strp_init);

void strp_stop(struct strparser *strp)
{
}
EXPORT_SYMBOL_GPL(strp_stop);

/* strp must already be stopped so that strp_recv will no longer be called.
 * Note that strp_done is not called with the lower socket held.
 */
void strp_done(struct strparser *strp)
{   
}
EXPORT_SYMBOL_GPL(strp_done);

void strp_data_ready(struct strparser *strp)
{
}
EXPORT_SYMBOL_GPL(strp_data_ready);

int dmi_check_system(const struct dmi_system_id *list)
{
	return 0;
}
EXPORT_SYMBOL(dmi_check_system);

int dmi_get_bios_year(void)
{
	return 0;
}
EXPORT_SYMBOL(dmi_get_bios_year);

bool dmi_match(enum dmi_field f, const char *str)
{
	return 0;
}
EXPORT_SYMBOL_GPL(dmi_match);

/**
 *  misc_deregister - unregister a miscellaneous device
 *  @misc: device to unregister
 *
 *  Unregister a miscellaneous device that was previously
 *  successfully registered with misc_register().
 */

void misc_deregister(struct miscdevice *misc)
{
}
EXPORT_SYMBOL(misc_deregister);

int misc_register(struct miscdevice *misc)
{
	return 0;
}
EXPORT_SYMBOL(misc_register);

u64 get_random_u64(void)
{
	return 0llu;
}
EXPORT_SYMBOL(get_random_u64);

#ifdef CONFIG_NVDIMM_SELF
void *nvdimm_provider_data(struct nvdimm *nvdimm)
{
	return NULL;
}
EXPORT_SYMBOL(nvdimm_provider_data);

struct nvdimm *to_nvdimm(struct device *dev)
{
	return NULL;
}
EXPORT_SYMBOL(to_nvdimm);

struct nvdimm_bus *nvdimm_to_bus(struct nvdimm *nvdimm)
{
	return NULL;
}
EXPORT_SYMBOL(nvdimm_to_bus);

struct nvdimm_bus_descriptor *to_nd_desc(struct nvdimm_bus *nvdimm_bus)
{
	return NULL;
}
EXPORT_SYMBOL(to_nd_desc);

const char *nvdimm_name(struct nvdimm *nvdimm)
{
	return NULL;
}
EXPORT_SYMBOL(nvdimm_name);

u32 nd_cmd_in_size(struct nvdimm *nvdimm, int cmd,
		const struct nd_cmd_desc *desc, int idx, void *buf)
{
	return 0;
}
EXPORT_SYMBOL_GPL(nd_cmd_in_size);

u32 nd_cmd_out_size(struct nvdimm *nvdimm, int cmd,
		const struct nd_cmd_desc *desc, int idx, const u32 *in_field,
		const u32 *out_field, unsigned long remainder)
{
	return 0;
}
EXPORT_SYMBOL_GPL(nd_cmd_out_size);

const struct nd_cmd_desc *nd_cmd_bus_desc(int cmd)
{
	return NULL;
}
EXPORT_SYMBOL_GPL(nd_cmd_bus_desc);
#endif

void cper_estatus_print(const char *pfx,
            const struct acpi_hest_generic_status *estatus)
{
}
EXPORT_SYMBOL_GPL(cper_estatus_print);

int cper_estatus_check_header(const struct acpi_hest_generic_status *estatus)
{
	return 0;
}
EXPORT_SYMBOL_GPL(cper_estatus_check_header);

int cper_estatus_check(const struct acpi_hest_generic_status *estatus)
{
	return 0;
}
EXPORT_SYMBOL_GPL(cper_estatus_check);

u64 cper_next_record_id(void)
{
	return 0;
}
EXPORT_SYMBOL_GPL(cper_next_record_id);

const char *dmi_get_system_info(int field)
{
	return NULL;
}
EXPORT_SYMBOL_GPL(dmi_get_system_info);

int dmi_name_in_vendors(const char *str)
{
	return 0;
}
EXPORT_SYMBOL_GPL(dmi_name_in_vendors);

const struct dmi_device *dmi_find_device(int type, const char *name,
                    const struct dmi_device *from)
{
	return NULL;
}
EXPORT_SYMBOL_GPL(dmi_find_device);

void __init dmi_setup(void)
{
}
EXPORT_SYMBOL_GPL (dmi_setup);

int dmi_name_in_serial(const char *str)
{
	return 0;
}
EXPORT_SYMBOL_GPL (dmi_name_in_serial);

void rand_initialize_disk(struct gendisk *disk)
{
}
EXPORT_SYMBOL_GPL (rand_initialize_disk);

struct clk *clk_register_fixed_rate(struct device *dev, const char *name,
        const char *parent_name, unsigned long flags,
        unsigned long fixed_rate)
{
	return NULL;
}
EXPORT_SYMBOL_GPL(clk_register_fixed_rate);

int exportfs_encode_fh(struct dentry *dentry, struct fid *fid, int *max_len,
        int connectable)
{
	return 0;
}
EXPORT_SYMBOL_GPL(exportfs_encode_fh);

struct dentry *exportfs_decode_fh(struct vfsmount *mnt, struct fid *fid,
        int fh_len, int fileid_type,
        int (*acceptable)(void *, struct dentry *), void *context)
{ 
	return 0;
}
EXPORT_SYMBOL_GPL(exportfs_decode_fh);

int exportfs_encode_inode_fh(struct inode *inode, struct fid *fid,
                 int *max_len, struct inode *parent)
{
	return 0;
}
EXPORT_SYMBOL_GPL(exportfs_encode_inode_fh);

int register_sysrq_key(int key, struct sysrq_key_op *op_p)
{
	return 0;
}
EXPORT_SYMBOL_GPL(register_sysrq_key);

int sysrq_toggle_sysrq_key(int __sysrq_use_leftctrl)
{
	return 0;
}
EXPORT_SYMBOL_GPL(sysrq_toggle_sysrq_key);

int sysrq_toggle_support(int enable_mask)
{
	return 0;
}
EXPORT_SYMBOL_GPL(sysrq_toggle_support);

void tty_audit_fork(struct signal_struct *sig)
{
}
EXPORT_SYMBOL_GPL(tty_audit_fork);

void tty_audit_exit(void)
{
}
EXPORT_SYMBOL_GPL(tty_audit_exit);

int tty_audit_push(void)
{
	return 0;
}

struct irq_domain * irq_remapping_get_irq_domain(struct irq_alloc_info *info)
{
	return NULL;
}
EXPORT_SYMBOL_GPL(irq_remapping_get_irq_domain);

int clk_register_clkdev(struct clk *cl, const char *name, const char *p)
{
	return 0;
}
EXPORT_SYMBOL_GPL(clk_register_clkdev);

u32 acpi_pm_read_verified(void)
{
	return 0;
}
EXPORT_SYMBOL_GPL(acpi_pm_read_verified);

int mc146818_set_time(struct rtc_time *time)
{
	return 0;
}
EXPORT_SYMBOL_GPL(mc146818_set_time);

int rtc_valid_tm(struct rtc_time *tm)
{
	return 0;
}
EXPORT_SYMBOL_GPL(rtc_valid_tm);

void rtc_time64_to_tm(time64_t time, struct rtc_time *tm)
{
}
EXPORT_SYMBOL_GPL(rtc_time64_to_tm);

void __init clockevent_i8253_init(bool oneshot)
{
}

int pstore_register(struct pstore_info *psi)
{
	return 0;
}
EXPORT_SYMBOL_GPL(pstore_register);

SYSCALL_DEFINE3(getrandom, char __user *, buf, size_t, count,
        unsigned int, flags)
{
	return 0;
}

//int memcpy (void *dst, void *src, int len)
//{
//	return 0;
//}
//EXPORT_SYMBOL_GPL(memcpy);
//
//int __memcpy_mcsafe (void *dst, void *src, int len)
//{
//	return 0;
//}
//EXPORT_SYMBOL_GPL(__memcpy_mcsafe);

MODULE_LICENSE("GPL");
