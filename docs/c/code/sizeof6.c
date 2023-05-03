#include <stdio.h>

struct vars {
	double b;	// 8
	short c;	// 2 + padding 2
	int a;		// 4
};

int main(void)
{
	printf("%llu", sizeof(struct vars));
	return 0;
}