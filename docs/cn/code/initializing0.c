#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <winsock2.h>
#pragma comment(lib, "Ws2_32.lib")

int main(void)
{
    WORD wVersion = MAKEWORD(2, 2);
    WSADATA wsaData;
    int wsaerr = WSAStartup(wVersion, &wsaData);
    if (wsaerr == 0)
    {
        printf("WSA startup successful!\n");
        printf("Status: %s.\n", wsaData.szSystemStatus);
    }
    else
    {
        printf("WSA startup failed!\n");
        printf("Error: %d.\n", wsaerr);
    }
    return 0;
}