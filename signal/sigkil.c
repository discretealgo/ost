#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
	pid_t target;
	printf("Enter pid to process to kill:");
	scanf("%d",&target);
	if(kill(target,SIGKILL)==0){
		printf("process with pid %d has been killed",target);
	}
	else{
		printf("error");
	}
	return 0;
}