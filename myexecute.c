#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main(int argc, char *argv[]) {
	
	if (argc != 2) {
		printf("execute: argc error\n");
		exit(-1);
	}

	printf("********** execute start **********\n");
 
	pid_t pid;
	pid = fork();
	
	if(pid < 0) exit(-1);
	else if(pid == 0) {
		execv("./mycat", argv);
		exit(0);
	}
	else wait(NULL);
	
	printf("********** execute finish **********\n");
	return 0;
}
