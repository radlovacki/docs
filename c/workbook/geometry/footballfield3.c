#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    unsigned short d, s, r;
    scanf("%hu%hu%hu", &d, &s, &r);
    printf("%hu", 2 * (d + s + 4 * r));
    return 0;
}