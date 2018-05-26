#include <types.h>
#include <thread.h>
#include <current.h>
#include <syscall.h>

int sys__exit(int termination_code)
{
	struct thread *cur;

	cur = curthread;
	cur->termination_state = termination_code;
	
	thread_exit();
	
	return 0;
}
