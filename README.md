# OS161

# Run 0S161

# Debug OS161

# Modify the kernel

  1. Create a file in kern/main/yourfile.c and write a fucntion
  2. Modify kern/main/main.c entering a call to your function
  3. Insert in test.h a prototype of your function
  4. Modify kern/conf/conf.kern inserting the new file:   
        
          defoption yourfile
          optfile   yourfile   main/yourfile.c
          
  5. Generate in kern/conf a new file (for example YOURFILE)
  
          It can be a copy of DUMBVM adding a new line: "options yourfile"
        
  6. Finally:
  
            ./config HELLO
            In kern/compile/HELLO
                bmake depend
                bmake
                bmake instal
            
# Writing a new system call
