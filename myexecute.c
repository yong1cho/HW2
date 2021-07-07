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

	// make child process 
	// and execute cat (do not use just "cat", use another name)	
	//
	// use fork(), exec family
	//
	
	printf("********** execute finish **********\n");
	return 0;
}
