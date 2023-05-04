#include <stdio.h>

int main(void)
{
    double a = 1.0, b = 3.0, c = a / b, d = 0.333333;
    printf("%d %d %d", a == a, b == c, c == d);
    return 0;
}