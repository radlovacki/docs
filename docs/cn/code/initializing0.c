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
        printf("WSA OK!");
        WSACleanup();
    }
    else
        printf("WSA error: %d.\n", wsaError);
    return 0;
}