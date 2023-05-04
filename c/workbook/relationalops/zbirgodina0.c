#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if ((n - 3) % 4 == 0)
        printf("da");
    else
        printf("ne");
    return 0;
}