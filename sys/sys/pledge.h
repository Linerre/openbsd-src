/*	$OpenBSD: pledge.h,v 1.31 2017/04/20 15:21:51 deraadt Exp $	*/

/*
 * Copyright (c) 2015 Nicholas Marriott <nicm@openbsd.org>
 * Copyright (c) 2015 Theo de Raadt <deraadt@openbsd.org>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _SYS_PLEDGE_H_
#define _SYS_PLEDGE_H_

#include <sys/cdefs.h>

/*
 * pledge(2) requests
 */
#define PLEDGE_ALWAYS	0xffffffffffffffffULL
#define PLEDGE_RPATH	0x0000000000000001ULL	/* allow open for read */
#define PLEDGE_WPATH	0x0000000000000002ULL	/* allow open for write */
#define PLEDGE_CPATH	0x0000000000000004ULL	/* allow creat, mkdir, unlink etc */
#define PLEDGE_STDIO	0x0000000000000008ULL	/* operate on own pid */
#define PLEDGE_TMPPATH	0x0000000000000010ULL	/* for mk*temp() */
#define PLEDGE_DNS	0x0000000000000020ULL	/* DNS services */
#define PLEDGE_INET	0x0000000000000040ULL	/* AF_INET/AF_INET6 sockets */
#define PLEDGE_FLOCK	0x0000000000000080ULL	/* file locking */
#define PLEDGE_UNIX	0x0000000000000100ULL	/* AF_UNIX sockets */
#define PLEDGE_ID	0x0000000000000200ULL	/* allow setuid, setgid, etc */
#define PLEDGE_TAPE	0x0000000000000400ULL	/* Tape ioctl */
#define PLEDGE_GETPW	0x0000000000000800ULL	/* YP enables if ypbind.lock */
#define PLEDGE_PROC	0x0000000000001000ULL	/* fork, waitpid, etc */
#define PLEDGE_SETTIME	0x0000000000002000ULL	/* able to set/adj time/freq */
#define PLEDGE_FATTR	0x0000000000004000ULL	/* allow explicit file st_* mods */
#define PLEDGE_PROTEXEC	0x0000000000008000ULL	/* allow use of PROT_EXEC */
#define PLEDGE_TTY	0x0000000000010000ULL	/* tty setting */
#define PLEDGE_SENDFD	0x0000000000020000ULL	/* AF_UNIX CMSG fd sending */
#define PLEDGE_RECVFD	0x0000000000040000ULL	/* AF_UNIX CMSG fd receiving */
#define PLEDGE_EXEC	0x0000000000080000ULL	/* execve, child is free of pledge */
#define PLEDGE_ROUTE	0x0000000000100000ULL	/* routing lookups */
#define PLEDGE_MCAST	0x0000000000200000ULL	/* multicast joins */
#define PLEDGE_VMINFO	0x0000000000400000ULL	/* vminfo listings */
#define PLEDGE_PS	0x0000000000800000ULL	/* ps listings */
#define PLEDGE_DISKLABEL 0x0000000002000000ULL	/* disklabels */
#define PLEDGE_PF	0x0000000004000000ULL	/* pf ioctls */
#define PLEDGE_AUDIO	0x0000000008000000ULL	/* audio ioctls */
#define PLEDGE_DPATH	0x0000000010000000ULL	/* mknod & mkfifo */
#define PLEDGE_DRM	0x0000000020000000ULL	/* drm ioctls */
#define PLEDGE_VMM	0x0000000040000000ULL	/* vmm ioctls */
#define PLEDGE_CHOWN	0x0000000080000000ULL	/* chown(2) family */
#define PLEDGE_CHOWNUID	0x0000000100000000ULL	/* allow owner/group changes */
#define PLEDGE_BPF	0x0000000200000000ULL	/* bpf ioctl */

/*
 * Bits outside PLEDGE_USERSET are used by the kernel itself
 * to track program behaviours which have been observed.
 */
#define PLEDGE_USERSET	0x0fffffffffffffffULL
#define PLEDGE_STATLIE	0x4000000000000000ULL
#define PLEDGE_YPACTIVE	0x8000000000000000ULL	/* YP use detected and allowed */

#ifdef PLEDGENAMES
static struct {
	uint64_t	bits;
	char		*name;
} pledgenames[] = {
	{ PLEDGE_RPATH,		"rpath" },
	{ PLEDGE_WPATH,		"wpath" },
	{ PLEDGE_CPATH,		"cpath" },
	{ PLEDGE_STDIO,		"stdio" },
	{ PLEDGE_TMPPATH,	"tmppath" },
	{ PLEDGE_DNS,		"dns" },
	{ PLEDGE_INET,		"inet" },
	{ PLEDGE_FLOCK,		"flock" },
	{ PLEDGE_UNIX,		"unix" },
	{ PLEDGE_ID,		"id" },
	{ PLEDGE_TAPE,		"tape" },
	{ PLEDGE_GETPW,		"getpw" },
	{ PLEDGE_PROC,		"proc" },
	{ PLEDGE_SETTIME,	"settime" },
	{ PLEDGE_FATTR,		"fattr" },
	{ PLEDGE_PROTEXEC,	"protexec" },
	{ PLEDGE_TTY,		"tty" },
	{ PLEDGE_SENDFD,	"sendfd" },
	{ PLEDGE_RECVFD,	"recvfd" },
	{ PLEDGE_EXEC,		"exec" },
	{ PLEDGE_ROUTE,		"route" },
	{ PLEDGE_MCAST,		"mcast" },
	{ PLEDGE_VMINFO,	"vminfo" },
	{ PLEDGE_PS,		"ps" },
	{ PLEDGE_DISKLABEL,	"disklabel" },
	{ PLEDGE_PF,		"pf" },
	{ PLEDGE_AUDIO,		"audio" },
	{ PLEDGE_DPATH,		"dpath" },
	{ PLEDGE_DRM,		"drm" },
	{ PLEDGE_VMM,		"vmm" },
	{ PLEDGE_CHOWNUID,	"chown" },
	{ PLEDGE_BPF,		"bpf" },
	{ 0, NULL },
};
#endif

#ifdef _KERNEL

int	pledge_syscall(struct proc *, int, uint64_t *);
int	pledge_fail(struct proc *, int, uint64_t);

struct mbuf;
struct nameidata;
int	pledge_namei(struct proc *, struct nameidata *, char *);
int	pledge_namei_wlpath(struct proc *, struct nameidata *);
int	pledge_sendfd(struct proc *p, struct file *);
int	pledge_recvfd(struct proc *p, struct file *);
int	pledge_sysctl(struct proc *p, int namelen, int *name, void *new);
int	pledge_chown(struct proc *p, uid_t, gid_t);
int	pledge_adjtime(struct proc *p, const void *v);
int	pledge_sendit(struct proc *p, const void *to);
int	pledge_sockopt(struct proc *p, int set, int level, int optname);
int	pledge_socket(struct proc *p, int domain, int state);
int	pledge_ioctl(struct proc *p, long com, struct file *);
int	pledge_ioctl_drm(struct proc *p, long com, dev_t device);
int	pledge_ioctl_vmm(struct proc *p, long com);
int	pledge_flock(struct proc *p);
int	pledge_fcntl(struct proc *p, int cmd);
int	pledge_swapctl(struct proc *p);
int	pledge_kill(struct proc *p, pid_t pid);
int	pledge_protexec(struct proc *p, int prot);

#define PLEDGE_MAXPATHS	8192

struct whitepaths {
	size_t	wl_size;
	int	wl_count;
	int	wl_ref;
	struct whitepath {
		char		*name;
		size_t		len;
	} wl_paths[0];
};
void	pledge_dropwpaths(struct process *);

#endif /* _KERNEL */

#endif /* _SYS_PLEDGE_H_ */
