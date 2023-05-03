#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	long double num;
	scanf("%Lf", &num);
	printf("%.0Lf", ceill(num));
	return 0;
}