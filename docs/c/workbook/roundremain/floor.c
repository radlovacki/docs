#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double num;
	scanf("%lf", &num);
	printf("%lg", floor(num));
	return 0;
}