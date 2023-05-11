#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib")

int main(void)
{
    WSADATA wsaData;
    int wsaError = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (wsaError == 0)
        printf("WSA startup success! Status: %s.\n", wsaData.szSystemStatus);
    else
        printf("WSA startup failed! Error: %d.\n", wsaError);
    WSACleanup();
    return 0;
}