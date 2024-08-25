#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <sys/socket.h>
#include <sys/types.h>

#include <netinet/in.h>


int client_socket;
	char buf[200]= "1)Contcatenate two strings\n2)Occurence\n3)Compare\n4)Palindrome\n5)Addition";
	
	// create the server socket
	int server_socket;

int concatenate(){
char d1[200]="Enter First strings";
	send(client_socket, d1, sizeof(d1), 0);
	char msg1[200];
	recv(client_socket, &msg1, sizeof(msg1), 0);
char d2[]={"Enter Second strings"};
	send(client_socket, d2, sizeof(d2), 0);
	char msg2[200];
	recv(client_socket, &msg2, sizeof(msg2), 0);
//	char final[400];
//strcpy(final, msg1); /* copy name into the new var */
strcat(msg1, msg2); 
printf("%s", &msg1);
	send(client_socket, msg1, sizeof(msg1), 0);
}
int compare(){
char d1[200]="Enter First strings";
	send(client_socket, d1, sizeof(d1), 0);
	char msg1[200];
	recv(client_socket, &msg1, sizeof(msg1), 0);
char d2[]={"Enter Second strings"};
	send(client_socket, d2, sizeof(d2), 0);
	char msg2[200];
	recv(client_socket, &msg2, sizeof(msg2), 0);


if(strcmp(msg1,msg2)==0)
{
	 char final[200]="True";
			send(client_socket, final, sizeof(final), 0);
}
else{
	char final[200]="False";
			send(client_socket, final, sizeof(final), 0);
}
//	send(client_socket, msg1, sizeof(msg1), 0);
}
int addition(){
	int sum=0;
char d1[200]="Enter First num";
	send(client_socket, d1, sizeof(d1), 0);
	char msg1[200];
	recv(client_socket, &msg1, sizeof(msg1), 0);
char d2[]={"Enter Second num"};
	send(client_socket, d2, sizeof(d2), 0);
	char msg2[200];
	recv(client_socket, &msg2, sizeof(msg2), 0);

int a, b;
if(msg1[0]=='o' && msg1[1]=='n' && msg1[2]=='e'){
	a=1;
}
if(msg1[0]=='t' && msg1[1]=='w' && msg1[2]=='o'){
	a=2;
}
if(msg1[0]=='t' && msg1[1]=='h' && msg1[2]=='r'&& msg1[2]=='e'&& msg1[2]=='e'){
	a=3;
}
if(msg1[0]=='f' && msg1[1]=='o' && msg1[2]=='u'&& msg1[2]=='r'){
	a=4;
}
if(msg1[0]=='f' && msg1[1]=='i' && msg1[2]=='v'&& msg1[2]=='e'){
	a=5;
}
if(msg1[0]=='s' && msg1[1]=='i' && msg1[2]=='x'){
	a=6;
}
if(msg1[0]=='s' && msg1[1]=='e' && msg1[2]=='v'&& msg1[2]=='e'&& msg1[2]=='n'){
	a=7;
}
if(msg1[0]=='e' && msg1[1]=='i' && msg1[2]=='g'&& msg1[2]=='h'&& msg1[2]=='t'){
	a=8;
}
if(msg1[0]=='n' && msg1[1]=='i' && msg1[2]=='n'&& msg1[2]=='e'){
	a=9;
}
if(msg1[0]=='t' && msg1[1]=='e' && msg1[2]=='n'){
	a=10;
}

//-----------------------------
if(msg2[0]=='o' && msg2[1]=='n' && msg2[2]=='e'){
	b=1;
}
if(msg2[0]=='t' && msg2[1]=='w' && msg2[2]=='o'){
	b=2;
}
if(msg2[0]=='t' && msg2[1]=='h' && msg2[2]=='r'&& msg2[2]=='e'&& msg2[2]=='e'){
	b=3;
}
if(msg2[0]=='f' && msg2[1]=='o' && msg2[2]=='u'&& msg2[2]=='r'){
	b=4;
}
if(msg2[0]=='f' && msg2[1]=='i' && msg2[2]=='v'&& msg2[2]=='e'){
	b=5;
}
if(msg2[0]=='s' && msg2[1]=='i' && msg2[2]=='x'){
	b=6;
}
if(msg2[0]=='s' && msg2[1]=='e' && msg2[2]=='v'&& msg2[2]=='e'&& msg2[2]=='n'){
	b=7;
}
if(msg2[0]=='e' && msg2[1]=='i' && msg2[2]=='g'&& msg2[2]=='h'&& msg2[2]=='t'){
	b=8;
}
if(msg2[0]=='n' && msg2[1]=='i' && msg2[2]=='n'&& msg2[2]=='e'){
	b=9;
}
if(msg2[0]=='t' && msg2[1]=='e' && msg2[2]=='n'){
	b=10;
}

 sum=a+b;
 
 if(sum==1){
	char final[200]="one";
	send(client_socket, final, sizeof(final), 0);
}
if(sum==2){
	char final[200]="two";
	send(client_socket, final, sizeof(final), 0);
}
if(sum=3){
	char final[200]="three";
	send(client_socket, final, sizeof(final), 0);
}
if(sum=4){
	char final[200]="four";
	send(client_socket, final, sizeof(final), 0);
}
if(sum=5){
	char final[200]="five";
	send(client_socket, final, sizeof(final), 0);
}
if(sum=6){
	char final[200]="six";
	send(client_socket, final, sizeof(final), 0);
}
if(sum=7){
	char final[200]="seven";
	send(client_socket, final, sizeof(final), 0);
}
if(sum=8){
	char final[200]="eight";
	send(client_socket, final, sizeof(final), 0);
}
if(sum=9){
	char final[200]="nine";
	send(client_socket, final, sizeof(final), 0);
}
if(sum=10){
	char final[200]="ten";
	send(client_socket, final, sizeof(final), 0);
}

	

}
int palindrome(){
char d1[200]="Enter strings";
	send(client_socket, d1, sizeof(d1), 0);
	char msg1[200];
	recv(client_socket, &msg1, sizeof(msg1), 0);

int length=0;
	int i,ret=1;
	
	/*calculate length*/
	while(msg1[length]!='\0') length++;
	 
    for(i=0; i<length; i++)
	{
		if((msg1[0+i] != msg1[(length-1)-i]))
		{
			char final[200]="False";
			send(client_socket, final, sizeof(final), 0);
			break;
		}			
	} 	
	 char final[200]="True";
			send(client_socket, final, sizeof(final), 0);
}

int occurence(){
	int find=0;
char d1[200]="Enter strings";
	send(client_socket, d1, sizeof(d1), 0);
	char msg1[200];
	recv(client_socket, &msg1, sizeof(msg1), 0);
char d2[]={"Enter Char"};
	send(client_socket, d2, sizeof(d2), 0);
	char msg2[200];
	recv(client_socket, &msg2, sizeof(msg2), 0);
		char a, final[200]="";
	for(int i=0; i<200; i++){
	
		if(msg1[i]==msg2[0]){
		
			 final[0]=i+'0';
			send(client_socket, final, sizeof(final), 0);
			find=1;
			break;
		}
	}
	if(find==0){
		char final[200]="-1";
		send(client_socket, final, sizeof(final), 0);
	}

//	char final[400];
//strcpy(final, msg1); /* copy name into the new var */
strcat(msg1, msg2); 
printf("%s", &msg1);
	send(client_socket, msg1, sizeof(msg1), 0);
}
int main() {

	
	server_socket = socket(AF_INET, SOCK_STREAM, 0);

	
	// define the server address
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(5008);
	server_address.sin_addr.s_addr = INADDR_ANY;

	// bind the socket to our specified IP and port
	bind(server_socket, (struct sockaddr*) &server_address, sizeof(server_address));
	listen(server_socket, 5);


	 client_socket = accept(server_socket, NULL, NULL);
	 	pid_t pid=fork();
	
	if(pid>0){
		 send(client_socket, buf, sizeof(buf), 0);
// printf("1) Contcatenate two strings");
recv(client_socket, &buf, sizeof(buf), 0);
printf("%s",buf);
if(buf[0]=='1'){
	

	concatenate();
}
else if(buf[0]=='2'){
	
	occurence();
}
else if(buf[0]=='3'){
	
	compare();
}
else if(buf[0]=='4'){
	
	palindrome();
}
else if(buf[0]=='5'){
	
	addition();
}
//	wait(NULL);

	// char msg[100];
	// for(int i=0; i<100; i++){
	// 	msg[i]=0;
	// }
	// for(int i=0,k=n-1; i<n; i++,k--){
	// 	msg[i]=buffer[k];
	// }
	// char server_message[256] = "Hi, Yes you have reached the server!";
	// // send the message
	
	
	// send(client_socket[i], msg, sizeof(msg), 0);
	
}
else if(pid==0){
//recv(client_socket, &buf, sizeof(buf), 0);
// printf("\n %s \n", buf);
// send(client_socket, buf, sizeof(buf), 0);

}

	// close the socket
	
	close(server_socket);
	return 0;
}
