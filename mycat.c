#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

int main(int argc, char *argv[]) {

	int fd; //file descripter
	char buf[BUF_SIZE]; //read buffer

	ssize_t read_size;
	
	if (argc != 2) { //argc,argv error check
		printf("cat: argc error\n");
		exit(1);
	}

	printf("********** read %s start **********\n", argv[1]);

	fd = open(argv[1], O_RDONLY); // open()
	
	if(fd < 0) printf("ERROR : FILE OPEN\n"); // read() error
	else{
		while(0 < read_size = read(fd, buf, BUF_SIZE - 1))){ // read()
			buf[read_size] = '\0';
			puts(buf);
		}
		close(fd); // close()
	}
		
	printf("********** read %s finish **********\n", argv[1]);
	return 0;
}
