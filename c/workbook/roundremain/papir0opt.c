#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double mp, mk;
    int bk, bs, d, s;
    scanf("%d%d%d%d%lf%lf", &bk, &bs, &d, &s, &mp, &mk);
    printf("%.3lf", (bk * (mk + ((bs + 1) / 2) * ((d * s * mp) / 1000000.0))) / 1000.0);
    return 0;
}