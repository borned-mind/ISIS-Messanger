#include<stdlib.h>
namespace MyOwnTCPSocket{

    int Connect(char*host,int portno);
    char Write(int socket, char const * msg);
    char * Read(int socket, size_t readByte=2056);
    void setListen(int socket, unsigned long long int count);
    int acceptClient(int socket);
    void stopClient(int * socket);
}
