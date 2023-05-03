#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double k, n;
	scanf("%lf%lf", &k, &n);
	double brojPoklona = floor(n / k);
	printf("%lg", brojPoklona);
	return 0;
}