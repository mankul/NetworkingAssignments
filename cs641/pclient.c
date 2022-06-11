#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>


#define MAX_INPUT_SIZE 256

int main(int argc, char * argv[]){

	int sockfd;

	struct sockaddr_in, server_addr, clientaddr;

	char input_buffer[MAX_INPUT_SIZE];

	if(argc < 4){
		fprintf(stderror);
		exit(0);
	}

	return 0;
}
