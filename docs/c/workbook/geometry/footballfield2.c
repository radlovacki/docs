#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int d, s, r;
    scanf("%d%d%d", &d, &s, &r);
    printf("%d", 2 * (d + s + 4 * r));
    return 0;
}