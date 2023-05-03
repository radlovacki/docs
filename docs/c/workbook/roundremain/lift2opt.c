#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d", (n / k) + (n % k != 0));
    return 0;
}