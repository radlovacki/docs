#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double mp, mk;
	int bk, bs, d, s;
	scanf("%d%d%d%d%lf%lf", &bk, &bs, &d, &s, &mp, &mk);
	printf("%.3lf", bk * (mk + (ceil(bs / 2.0) * d * s * mp) / 1000000) / 1000);
	return 0;
}