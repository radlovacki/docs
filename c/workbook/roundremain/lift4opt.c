#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    double n, k;
    scanf("%lf%lf", &n, &k);
    printf("%lg", ceil(n / k));
    return 0;
}