#include<stdio.h>
#include<stdlib.h>
int* filtriraj(int* niz, int n, int th, int* nth)
{
	int i, j, d = 0;
	for (i = 0; i < n; i++)
	{
		if (niz[i] < th)
			d++;
	}
	*nth = d;
	int* novi = (int*)malloc(d * sizeof(int));
	if (!novi) return NULL;
	for (i = 0, j = 0; i < n; i++)
	{
		if (niz[i] < th)
		{
			novi[j] = niz[i];
			j++;
		}
	}
	return novi;
}
void main()
{
	int niz[5] = { 1,2,3,4,5 };
	int n = sizeof(niz) / sizeof(niz[0]);
	int i, nth;
	int broj;
	printf("Unesite broj po kojem ce niz biti filtriran.\n");
	scanf("%d", &broj);
	int* nt = filtriraj(niz, n, broj, &nth);
	for (i = 0; i < nth; i++)
	{
		printf("Novi niz[%d] = %d \n",i, nt[i]);
	}
	printf("\nBroj brojeva manjih od %d je %d\n",broj, nth);
	free(nt);
}