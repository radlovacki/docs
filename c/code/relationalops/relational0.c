#include <stdio.h>

int main(void)
{
	int a = 1, b = 2;
	char c = 'a', d = 'z';
	float e = 3.14159, f = 3.14159;
	printf("%d %d %d", a < b, c <= d, e <= f);
	return 0;
}