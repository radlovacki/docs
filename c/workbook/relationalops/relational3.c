#include <stdio.h>

int main(void)
{
    char a = 'a', b = 'A';
    printf("%d %d %d", a >= a, a >= b, b >= a);
    return 0;
}