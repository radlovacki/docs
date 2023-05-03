#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double n, k;
	scanf("%lf%lf", &n, &k);
	double brojVoznji = ceil(n / k);
	printf("%lg", brojVoznji);
	return 0;
}