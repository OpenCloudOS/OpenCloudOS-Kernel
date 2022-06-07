# SPDX-License-Identifier: GPL-2.0
#
# Makefile for the linux networking.
#
# 2 Sep 2000, Christoph Hellwig <hch@infradead.org>
# Rewritten to use lists instead of if-statements.
#
obj-$(CONFIG_NET)		:= socket.o core/
tmp-$(CONFIG_COMPAT) 		:= compat.o
obj-$(CONFIG_NET)		+= $(tmp-y)
obj-$(CONFIG_NET)		+= ethernet/ sched/ netlink/ bpf/
obj-$(CONFIG_NETFILTER)		+= netfilter/
obj-$(CONFIG_INET)		+= ipv4/
obj-$(CONFIG_UNIX_SCM)		+= unix/
obj-$(CONFIG_NET)		+= ipv6/
obj-$(CONFIG_BPFILTER)		+= bpfilter/
obj-$(CONFIG_PACKET)		+= packet/
obj-$(CONFIG_BRIDGE)		+= bridge/
ifneq ($(CONFIG_VLAN_8021Q),)
obj-y				+= 8021q/
endif
ifneq ($(CONFIG_DCB),)
obj-y				+= dcb/
endif
obj-$(CONFIG_IEEE802154)	+= ieee802154/
ifeq ($(CONFIG_NET),y)
obj-$(CONFIG_SYSCTL)		+= sysctl_net.o
endif
obj-$(CONFIG_OPENVSWITCH)	+= openvswitch/
ifneq ($(CONFIG_NET_SWITCHDEV),)
obj-y				+= switchdev/
endif
ifneq ($(CONFIG_NET_L3_MASTER_DEV),)
obj-y				+= l3mdev/
endif
obj-$(CONFIG_XDP_SOCKETS)	+= xdp/
