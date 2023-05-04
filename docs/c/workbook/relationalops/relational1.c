#include <stdio.h>

int main(void)
{
    int a = 1, b = 2;
    printf("%d %d %d", a <= a, a <= b, b <= a);
    return 0;
}