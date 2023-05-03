#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, k;
	scanf("%d%d", &n, &k);
	int brojVoznji = (n + k - 1) / k;
	printf("%d", brojVoznji);
	return 0;
}