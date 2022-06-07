# SPDX-License-Identifier: GPL-2.0
#
# Makefile for the Linux kernel device drivers.
#
# 15 Sep 2000, Christoph Hellwig <hch@infradead.org>
# Rewritten to use lists instead of if-statements.
#

obj-y				+= pci/
obj-y				+= idle/
obj-$(CONFIG_ACPI)		+= acpi/
obj-$(CONFIG_VIRTIO)		+= virtio/
obj-y				+= iommu/
obj-$(CONFIG_LIBNVDIMM)				+= nvdimm/
obj-y				+= base/ block/
obj-$(CONFIG_DAX)		+= dax/
obj-y				+= scsi/
obj-y				+= net/
obj-$(CONFIG_VFIO)		+= vfio/
obj-y				+= firmware/
obj-$(CONFIG_VHOST_RING)	+= vhost/
obj-$(CONFIG_VHOST)		+= vhost/
