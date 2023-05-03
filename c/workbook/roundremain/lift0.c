#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, k;
	scanf("%d%d", &n, &k);
	int brojVoznji = (n % k == 0) ? (n / k) : (n / k + 1);
	printf("%d", brojVoznji);
	return 0;
}