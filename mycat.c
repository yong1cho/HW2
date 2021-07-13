#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

int main(int argc, char *argv[]) {

	int fd; //file descripter
	char buf[BUF_SIZE]; //read buffer

	if (argc != 2) { //argc,argv error check
		printf("cat: argc error\n");
		exit(1);
	}

	printf("********** read %s start **********\n", argv[1]);

	//use open(), read() close()

	//open file
	fd = open(argv[1], O_RDONLY);
	
	if(fd < 0) printf("ERROR : FILE OPEN\n");
	
	//read file
	read(fd, buf, BUF_SIZE);
	printf("%s\n", buf);
	
	//close file
	close(fd);
	
	printf("********** read %s finish **********\n", argv[1]);
	return 0;
}
