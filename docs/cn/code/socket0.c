#define _CRT_SECURE_NO_WARNINGS
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
            printf("socket() OK!\n");
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