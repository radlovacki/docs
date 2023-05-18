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
        SOCKET example_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
        if (example_socket != INVALID_SOCKET)
        {
            SOCKADDR_IN service;
            service.sin_family = AF_INET;
            service.sin_addr.s_addr = inet_addr("127.0.0.1");
            service.sin_port = htons(27015);
            if (bind(example_socket, (SOCKADDR*)&service, sizeof(service)) != SOCKET_ERROR)
                printf("bind() OK!\n");
            else
                printf("bind() error: %ld.\n", WSAGetLastError());
            closesocket(example_socket);
        }
        else
            printf("socket() error: %ld.\n", WSAGetLastError());
        WSACleanup();
    }
    else
        printf("WSA error: %d.\n", wsaError);
    return 0;
}