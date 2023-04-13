#include <cstdio>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <linu/if_ether.h>

int main(){
    int sock = socket(PF_PACKET,SOCK_RAW,htons(ETH_P_ALL));
    if(sock == -1){
        perror("Failed to open socket");
        return 1;
    }

    unsigned char buf[1550];
    while(true){
        ssize_t n = recv(sock,buf,sizeof(bug),0);
        if(n==-1){
            perror("Failed to receive");
            return 1;
        }
        if(n!=0){
            printf("Received %lu bytes: ",n);
            for(int i=0;i<n;++i){
                printf("%02x",buf[i]);
            }
            print("\n");
        }
    }
}