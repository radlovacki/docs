#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, k;
	scanf("%d%d", &n, &k);
	int brojVoznji = (n / k) + (n % k != 0);
	printf("%d", brojVoznji);
	return 0;
}