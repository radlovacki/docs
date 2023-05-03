#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double masaPapira, masaKorica;
	int brojKnjiga, brojStrana, duzina, sirina;
	scanf("%d%d%d%d%lf%lf", &brojKnjiga, &brojStrana, &duzina, &sirina, &masaPapira, &masaKorica);
	double brojListova = ceil(brojStrana / 2.0);
	double povrsinaLista = (duzina / 1000.0) * (sirina / 1000.0);
	double masaLista = povrsinaLista * masaPapira;
	double masaKnjige = masaKorica + brojListova * masaLista;
	double ukupnaMasa = (brojKnjiga * masaKnjige) / 1000.0;
	printf("%.3lf", ukupnaMasa);
	return 0;
}