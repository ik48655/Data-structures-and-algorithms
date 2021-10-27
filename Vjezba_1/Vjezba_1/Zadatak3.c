#include<stdio.h>
#include<stdlib.h>
int** podijeli(int* niz, int n)
{
	int duz1 = n / 2;
	int duz2 = n - duz1;
	int** nniz = (int**)malloc(2 * sizeof(int*));
	if (!nniz) return NULL;
	int* prvi = (int*)malloc(duz1 * sizeof(int));
	if (!prvi) return NULL;
	int* drugi = (int*)malloc(duz2 * sizeof(int));
	if (!drugi) return NULL;
	int i, j, k;
	for (i = 0; i < duz1; i++)
	{
		prvi[i] = niz[i];
	}
	for (j = 0; j < duz2; j++)
	{
		drugi[j] = niz[j + duz1];
	}
	nniz[0] = &prvi[0];
	nniz[1] = &drugi[0];
	return nniz;
}
int main(void)
{
	int niz[6] = { 1,2,3,4,5,6 };
	int n = sizeof(niz) / sizeof(niz[0]);
	int** novi = podijeli(niz, n);
	for (int i = 0; i < 2; i++)
		printf("\n%d\n", novi[i]);
	free(novi);
	return 0;
}