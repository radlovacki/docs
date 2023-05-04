#include <stdio.h>

int main(void)
{
    float a = 1.0, b = 3.0, c = a / b, d = 0.33333333;
    printf("%d %d %d", a != b, b != c, c != d);
    return 0;
}