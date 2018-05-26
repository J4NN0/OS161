#include <types.h>
#include <kern/errno.h>
#include <kern/unistd.h>
#include <lib.h>
#include <uio.h>
#include <syscall.h>
#include <vnode.h>
#include <vfs.h>
#include <current.h>

int sys_write(userptr_t buffer, int nbytes, int *retval)
{	
	int i;

	for(i=0; i<nbytes; i++)
		kprintf("%c", ((char *)buffer)[i]);
		
	(*retval) = 1; //number fo written char
	
	return 0;

}
