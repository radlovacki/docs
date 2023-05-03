#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double k, n;
	scanf("%lf%lf", &k, &n);
	printf("%lg", floor(n / k));
	return 0;
}