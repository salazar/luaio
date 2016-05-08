#ifndef _IO_H_
#define _IO_H_

#include <sys/kauth.h>

typedef struct kfile {
	struct vnode *vp;
	kauth_cred_t cred;
	int mode;
} KFILE

KFILE*  kfopen(const char*, const char *mode);
int     kfclose(KFILE *kfp);
ssize_t kfread(KFILE *, void *, size_t nb);
ssize_t kfwrite(KFILE*, const void *, size_t nb);

#endif
