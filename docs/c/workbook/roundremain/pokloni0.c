#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int k, n;
	scanf("%d%d", &k, &n);
	int brojPoklona = n / k;
	printf("%d", brojPoklona);
	return 0;
}