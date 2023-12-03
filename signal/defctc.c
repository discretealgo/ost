#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>
void oh(int sig){
	printf("i got signal %d\n",sig);
	signal(SIGINT,oh);
	//signal(SIGINT,SIG_DFL);
}
int main(){
	//signal(SIGINT,SIG_DFL);	

	signal(SIGINT,oh);
	while(1){
		printf("hello world\n");
		sleep(1);
	}
}