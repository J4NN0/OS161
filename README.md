# OS161

# Run 0S161

# Debug OS161

# Modify the kernel

  1. Create a file in kern/main/yourfile.c and write a function
  2. Modify kern/main/main.c entering a call to your function
  3. In test.h:
  
         #include "opt-yourfile.h" (opt-optname.h)
         Insert a prototype of your function  
         
  4. Modify kern/conf/conf.kern inserting the new file (#Startup and initialization):   
  
          defoption yourfile
          optfile   yourfile   main/yourfile.c
          
  5. Generate in kern/conf a new file (for example YOURFILE)
  
          It can be a copy of DUMBVM adding a new line: "options yourfile"
        
  6. Finally do the make of the kernel:
  
            In kern/conf
                ./config YOURFILE
                
            In kern/compile/YOURFILE
                bmake depend
                bmake
                bmake install
            
# Writing a new system call
  
  1. In kern/arch/mips/syscall/syscall.c there is switch case in which you can menage the system calls
  2. To menage a system call it's necessary an integer code:
  
         See kern/include/kern/syscall.h
         
  3. Create your system call in kern/syscall/my_syscalls.c
  4. Modify kern/include/syscall.h adding a protorype if the syscall function
  5. Modify kern/conf/conf.kern inserting the new file (#System call layer):
  
         file syscall/my_syscalls.c
     
  6. Finally do the make of the kernel
          
          In kern/conf
            ./config DUMBVM
            
          In kern/compile/DUMBVM
              bmake depend
              bmake
              bmake install
