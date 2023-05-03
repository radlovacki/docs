#include <stdio.h>

struct vars {
	int x;		// 4 + padding 4
	double y;	// 8
	short z;	// 2 + padding 6
};

int main(void)
{
	printf("%llu", sizeof(struct vars));
	return 0;
}