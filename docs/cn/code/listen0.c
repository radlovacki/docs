#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <stdio.h>
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib")

int main(void)
{
    WSADATA wsaData;
    int wsaError = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (wsaError == 0)
    {
        SOCKET listen_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
        if (listen_socket != INVALID_SOCKET)
        {
            SOCKADDR_IN service;
            service.sin_family = AF_INET;
            service.sin_addr.s_addr = inet_addr("127.0.0.1");
            service.sin_port = htons(27015);
            if (bind(listen_socket, (SOCKADDR*)&service, sizeof(service)) != SOCKET_ERROR)
            {
                if (listen(listen_socket, 1) != SOCKET_ERROR)
                    printf("listen() success!\n");
                else
                    printf("listen() error: %ld.\n", WSAGetLastError());
            }
            else
                printf("bind() error: %ld.\n", WSAGetLastError());
            closesocket(listen_socket);
        }
        else
            printf("socket() error: %ld.\n", WSAGetLastError());
        WSACleanup();
    }
    else
        printf("WSA error: %d.\n", wsaError);
    return 0;
}