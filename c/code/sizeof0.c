#include <stdio.h>

int main(void)
{
	printf("%llu\n", sizeof(char));
	printf("%llu\n", sizeof(short));
	printf("%llu\n", sizeof(int));
	printf("%llu\n", sizeof(long long));
	printf("%llu\n", sizeof(float));
	printf("%llu", sizeof(double));
	return 0;
}