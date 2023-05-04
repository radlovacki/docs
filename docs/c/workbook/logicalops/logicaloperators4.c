#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int age;
    scanf("%d", &age);
    if (age > 12 && age < 20)
        printf("Teenager");
    else
        printf("Not teenager");
    return 0;
}