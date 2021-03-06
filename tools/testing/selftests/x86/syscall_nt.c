// SPDX-License-Identifier: GPL-2.0-only
/*
 * syscall_nt.c - checks syscalls with NT set
 * Copyright (c) 2014-2015 Andrew Lutomirski
 *
 * Some obscure user-space code requires the ability to make system calls
 * with FLAGS.NT set.  Make sure it works.
 */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <err.h>
#include <sys/syscall.h>

#include "helpers.h"

static unsigned int nerrs;

static void sethandler(int sig, void (*handler)(int, siginfo_t *, void *),
		       int flags)
{
	struct sigaction sa;
	memset(&sa, 0, sizeof(sa));
	sa.sa_sigaction = handler;
	sa.sa_flags = SA_SIGINFO | flags;
	sigemptyset(&sa.sa_mask);
	if (sigaction(sig, &sa, 0))
		err(1, "sigaction");
}

static void sigtrap(int sig, siginfo_t *si, void *ctx_void)
{
}

static void do_it(unsigned long extraflags)
{
	unsigned long flags;

	set_eflags(get_eflags() | extraflags);
	syscall(SYS_getpid);
	flags = get_eflags();
	set_eflags(X86_EFLAGS_IF | X86_EFLAGS_FIXED);
	if ((flags & extraflags) == extraflags) {
		printf("[OK]\tThe syscall worked and flags are still set\n");
	} else {
		printf("[FAIL]\tThe syscall worked but flags were cleared (flags = 0x%lx but expected 0x%lx set)\n",
		       flags, extraflags);
		nerrs++;
	}
}

int main(void)
{
	printf("[RUN]\tSet NT and issue a syscall\n");
	do_it(X86_EFLAGS_NT);

	/*
	 * Now try it again with TF set -- TF forces returns via IRET in all
	 * cases except non-ptregs-using 64-bit full fast path syscalls.
	 */

	sethandler(SIGTRAP, sigtrap, 0);

	printf("[RUN]\tSet NT|TF and issue a syscall\n");
	do_it(X86_EFLAGS_NT | X86_EFLAGS_TF);

	return nerrs == 0 ? 0 : 1;
}
