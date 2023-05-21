#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int duzinaTerena, sirinaTerena, rastojanje;
    scanf("%d%d%d", &duzinaTerena, &sirinaTerena, &rastojanje);
    int duzinaOgrade = duzinaTerena + 2 * rastojanje;
    int sirinaOgrade = sirinaTerena + 2 * rastojanje;
    int obimOgrade = 2 * (duzinaOgrade + sirinaOgrade);
    printf("%d", obimOgrade);
    return 0;
}