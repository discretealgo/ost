#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{	
	int pid=fork();
	if(pid==0)
	{
		for(int i=0;i<2;i++)
			printf("I am child.\n");
	}
	else
	{
		wait(NULL);
		printf("I am parent.\n");
		while(1);
	}
}


int main(){
	int pid=fork();
	if(pid<0){
		printf("fork failed");
	}
	else if(pid==0){
		printf("child process is running with pid %d",getpid());
		sleep(2);
		printf("child process is done");
	}
	else{
		printf("parent process with pid %d is running ",getpid());
		int status;
		wait(&status);
		printf("parent process is done");
	}
	return 0;
}