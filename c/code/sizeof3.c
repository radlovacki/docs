#include <stdio.h>

int main(void)
{
	int arr[] = { 2, 4, 1, 3, 5, 0, 9, 8, 7, 6 };
	printf("%llu", sizeof(arr)/sizeof(arr[0]));
	return 0;
}