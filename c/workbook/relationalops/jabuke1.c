#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int p, m;
    scanf("%d%d", &p, &m);
    printf("%s", p > m ? "DA" : "NE");
    return 0;
}