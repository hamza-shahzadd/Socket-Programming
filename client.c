#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h>
int main() {
	
	
	char buf[200];
	
	// create the socket
	int sock;
	sock = socket(AF_INET, SOCK_STREAM, 0);
	
	//setup an address
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_addr.s_addr = inet_addr("10.0.2.15");
	server_address.sin_port = htons(3006);
int a=1;
	connect(sock, (struct sockaddr *) &server_address, sizeof(server_address));
	
	while(a){
	recv(sock, &buf, sizeof(buf), 0);
	printf("\n %s \n", buf);
	
	//string a=0;
	scanf("%s",&buf);
	send(sock, &buf, sizeof(buf), 0);
	for(int i=0;i<200;i++)
	{
	    buf[i]='\0';
	}
	
   }	
	close(sock);

	return 0;
}

