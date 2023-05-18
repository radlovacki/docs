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
        printf("WSA OK!\n");
        printf("Winsock Version : %hu, %hu.\n", LOBYTE(wsaData.wVersion), HIBYTE(wsaData.wVersion));
        printf("Highest Version : %hu, %hu.\n", LOBYTE(wsaData.wHighVersion), HIBYTE(wsaData.wHighVersion));
        printf("Description     : %s.\n", wsaData.szDescription);
        printf("System Status   : %s.\n", wsaData.szSystemStatus);
        WSACleanup();
    }
    else
        printf("WSA error: %d.\n", wsaError);
    return 0;
}