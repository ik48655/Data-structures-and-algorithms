#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"


int main()
{
	clock_t start_t, end_t;
	double total_t;
	int n = 10000;

	printf("N = %d\n", n);

	int* niz1 = generiraj(n);
	int* niz2 = generiraj(n);
	shuffle(niz1, n);
	shuffle(niz2, n);

	start_t = clock();
	int* pres = presjek(niz1, niz2, n, n);
	end_t = clock();
	total_t = (double)(end_t - start_t);
	total_t = total_t / CLOCKS_PER_SEC;
	printf("Presjek: %lf\n", total_t);
	free(pres);

	start_t = clock();
	int* pres2 = presjek_jedan_sortiran(niz1, niz2, n, n);
	end_t = clock();
	total_t = (double)(end_t - start_t);
	total_t = total_t / CLOCKS_PER_SEC;
	printf("Presjek(jedan sortiran): %lf\n", total_t);
	free(pres2);

	start_t = clock();
	int* pres3 = presjek_oba_sortirana(niz1, niz2, n, n);
	end_t = clock();
	total_t = (double)(end_t - start_t);
	total_t = total_t / CLOCKS_PER_SEC;
	printf("Presjek(oba sortirana): %lf\n", total_t);
	free(pres3);

	return 0;
}