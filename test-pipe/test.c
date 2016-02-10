#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

main()
{	
	/*fork() is used to create processes. It takes no arguments and returns a process ID. 
	  The purpose of fork() is to create a new process, which becomes the child process of the caller. */
        int fd[2];
	pid_t childpid;
	//int nbytes;
        //char readbuffer[80];
        char string[] = "olar\n";
        
        pipe(fd);

        if((childpid = fork()) == -1)
        {
                perror("fork");
                exit(1);
        }

        if(childpid==0) 
        {
                close(fd[0]); 
                while (write(fd[1], string, (strlen(string)+1)));
                exit(0);
        }    
        // else
        // {
        //         close(fd[1]);
        //         nbytes = read(fd[0], readbuffer, sizeof(readbuffer));
        //         printf("msg: %s", readbuffer); 
        // }

        return 0;
}

