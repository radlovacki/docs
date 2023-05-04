#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%s", (n - 3) % 4 == 0 ? "da" : "ne");
    return 0;
}