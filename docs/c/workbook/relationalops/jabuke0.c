#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int p, m;
    scanf("%d%d", &p, &m);
    if (p > m)
        printf("DA");
    else
        printf("NE");
    return 0;
}