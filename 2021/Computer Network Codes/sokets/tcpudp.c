#include <stdio.h> 
#include <sys/socket.h> 
#include <netinet/in.h> 
#include <string.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    int clientSocket, portNum, nBytes; char buffer[1024];
    struct sockaddr_in serverAddr; socklen_t addr_size;

    /*Create UDP socket*/
    clientSocket = socket(PF_INET, SOCK_DGRAM, 0);

    /*Configure settings in address struct*/ serverAddr.sin_family = AF_INET; serverAddr.sin_port = htons(7891);
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1"); memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);

    /*Initialize size variable to be used later on*/
    addr_size = sizeof serverAddr;

    while(1){
        printf("Type a sentence to send to server:\n");
        fgets(buffer,1024,stdin); printf("You typed: %s",buffer);

        nBytes = strlen(buffer) + 1;

        


        
        
        /*Send message to server*/
        sendto(clientSocket,buffer,nBytes,0,(struct sockaddr *)&serverAddr,addr_size);
        

        /*Receive message from server*/
        nBytes = recvfrom(clientSocket,buffer,100,0,NULL, NULL);

        printf("Received from server: %s\n",buffer);

    }

    return 0;
}
