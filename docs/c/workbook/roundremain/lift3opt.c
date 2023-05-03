#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, k;
	scanf("%d%d", &n, &k);
	printf("%d", (n + k - 1) / k);
	return 0;
}