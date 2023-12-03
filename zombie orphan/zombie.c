#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
        int pid=fork();
        if(pid == 0)
        {
                for(int i=0;i<2;i++)
                        printf("Child Process\n");
        }
        else if(pid>0)
        {
                printf("Parent Process\n");
		printf("pid and ppid is %d and %d\n",getpid(),getppid());
		printf("zombie process");
                while(1);
        }
}