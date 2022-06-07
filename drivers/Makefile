# SPDX-License-Identifier: GPL-2.0
#
# Makefile for the Linux kernel device drivers.
#
# 15 Sep 2000, Christoph Hellwig <hch@infradead.org>
# Rewritten to use lists instead of if-statements.
#

#obj-y				+= irqchip/
#obj-y				+= bus/
obj-y				+= pci/
obj-y				+= idle/
obj-$(CONFIG_ACPI)		+= acpi/
obj-$(CONFIG_SFI)		+= sfi/

#obj-y				+= clk/
obj-$(CONFIG_DMADEVICES)	+= dma/
#obj-y				+= soc/

obj-$(CONFIG_VIRTIO)		+= virtio/

# tty/ comes before char/ so that the VT console is the boot-time
# default.
#obj-y				+= tty/
#obj-y				+= char/

# iommu/ comes before gpu as gpu are using iommu controllers
obj-y				+= iommu/
obj-$(CONFIG_LIBNVDIMM)				+= nvdimm/

obj-$(CONFIG_CONNECTOR)		+= connector/
obj-y				+= base/ block/
obj-$(CONFIG_DAX)		+= dax/
obj-$(CONFIG_DMA_SHARED_BUFFER) += dma-buf/
obj-$(CONFIG_NUBUS)		+= nubus/
obj-y				+= scsi/
obj-y				+= net/
obj-$(CONFIG_ATM)		+= atm/
obj-$(CONFIG_UIO)		+= uio/
obj-$(CONFIG_VFIO)		+= vfio/
obj-$(CONFIG_DIO)		+= dio/
obj-$(CONFIG_SBUS)		+= sbus/
obj-$(CONFIG_ZORRO)		+= zorro/
obj-$(CONFIG_ATA_OVER_ETH)	+= block/aoe/
obj-$(CONFIG_PARIDE) 		+= block/paride/
obj-$(CONFIG_RTC_LIB)		+= rtc/
obj-$(CONFIG_PPS)		+= pps/
obj-$(CONFIG_ISDN)		+= isdn/
obj-$(CONFIG_EDAC)		+= edac/
obj-$(CONFIG_EISA)		+= eisa/
obj-$(CONFIG_PM_OPP)		+= opp/
obj-$(CONFIG_CPU_FREQ)		+= cpufreq/
obj-$(CONFIG_CPU_IDLE)		+= cpuidle/
obj-$(CONFIG_MEMSTICK)		+= memstick/
obj-$(CONFIG_NEW_LEDS)		+= leds/
obj-$(CONFIG_INFINIBAND)	+= infiniband/
obj-y				+= firmware/
ifndef CONFIG_ARCH_USES_GETTIMEOFFSET
#obj-y				+= clocksource/
endif
obj-$(CONFIG_PPC_PS3)		+= ps3/
obj-$(CONFIG_OF)		+= of/
obj-$(CONFIG_VHOST_RING)	+= vhost/
obj-$(CONFIG_VHOST)		+= vhost/
obj-$(CONFIG_VLYNQ)		+= vlynq/
obj-$(CONFIG_GREYBUS)		+= greybus/
obj-$(CONFIG_STAGING)		+= staging/
#obj-y				+= platform/

# Virtualization drivers
obj-$(CONFIG_VIRT_DRIVERS)	+= virt/
obj-$(CONFIG_HYPERV)		+= hv/

obj-$(CONFIG_PM_DEVFREQ)	+= devfreq/
obj-$(CONFIG_EXTCON)		+= extcon/
obj-$(CONFIG_MEMORY)		+= memory/
obj-$(CONFIG_INTERCONNECT)	+= interconnect/
obj-$(CONFIG_COUNTER)		+= counter/
