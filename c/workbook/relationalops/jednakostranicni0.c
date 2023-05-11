#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int obim = a + b + c;
    if (obim % 3 == 0)
        printf("da");
    else
        printf("ne");
    return 0;
}