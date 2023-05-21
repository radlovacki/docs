#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int visina, sirina;
    scanf("%d%d", &visina, &sirina);
    int povrsina = visina * sirina;
    printf("%d", povrsina);
    return 0;
}