#include <stdio.h> 
#include <sys/socket.h> 
#include <netinet/in.h> 
#include <string.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>


int main(){
    int udpSocket, nBytes; char buffer[1024];
    struct sockaddr_in serverAddr, clientAddr; struct sockaddr_storage serverStorage; socklen_t addr_size, client_addr_size;
    int i;

    /*Create UDP socket*/
    udpSocket = socket(PF_INET, SOCK_DGRAM, 0);

    /*Configure settings in address struct*/ serverAddr.sin_family = AF_INET; serverAddr.sin_port = htons(7891);
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1"); memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);

    /*Bind socket with address struct*/
    bind(udpSocket, (struct sockaddr *) &serverAddr, sizeof(serverAddr));

    /*Initialize size variable to be used later on*/
    addr_size = sizeof serverStorage;

    while(1){
        nBytes = recvfrom(udpSocket,buffer,1024,0,(struct sockaddr *)&serverStorage, &addr_size);

        /*Convert message received to uppercase*/
        for(i=0;i<nBytes-1;i++)
        buffer[i] = toupper(buffer[i]);

        /*Send uppercase message back to client, using serverStorage as the addres
        s*/
        sendto(udpSocket,buffer,nBytes,0,(struct sockaddr *)&serverStorage,addr_size);
    }

    return 0;
}
