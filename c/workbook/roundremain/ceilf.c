#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	float num;
	scanf("%f", &num);
	printf("%.0f", ceilf(num));
	return 0;
}