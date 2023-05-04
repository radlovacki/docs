#include <stdio.h>

int main(void)
{
	int a = 2, b = 0;
	if (!(a > b))
		printf("%d", b);
	else
		printf("%d", a);
	return 0;
}