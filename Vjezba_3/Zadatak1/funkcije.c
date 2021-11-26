#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

int cmp(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int* generiraj(int n)
{
	int* niz = (int*)malloc(sizeof(int) * n);
	niz[0] = rand() % 5;
	for (int i = 1; i < n; i++)
	{
		niz[i] = niz[i - 1] + 1 + rand() % 5;
	}
		
	return niz;
}

void shuffle(int* niz, int n)
{
	for (int i = 0; i < n; i++)
	{
		int j = (rand() * rand()) % n;
		int tmp = niz[i];
		niz[i] = niz[j];
		niz[j] = tmp;
	}
}

int* presjek(int* niz1, int* niz2, int n1, int n2)
{
	n1 = max(n1, n2);
	int* niz = (int*)malloc(sizeof(int) * n1);
	int k = 0;
	for (int i = 0; i < n1; ++i)
	{
		for (int j = 0; j < n1; ++j)
		{
			if (niz1[i] == niz2[j])
			{
				niz[k] = niz1[i];
				++k;
			}
		}
	}
	niz = (int*)realloc(niz, sizeof(int) * k);
	return niz;
}

int* presjek_jedan_sortiran(int* niz1, int* niz2, int n1, int n2)
{
	n1 = max(n1, n2);
	int* niz = (int*)malloc(sizeof(int) * n1), pitem;
	int j = 0;
	qsort(niz2, n1, sizeof(int), cmp);
	for (int i = 0; i < n1; ++i)
	{
		pitem = (int*)bsearch(&niz1[i], niz2, n2, sizeof(int), cmp);
		if (pitem != NULL)
		{
			niz[j] = niz1[i];
			++j;
		}
	}
	niz = (int*)realloc(niz, sizeof(int) * j);
	return niz;
}

int* presjek_oba_sortirana(int* niz1, int* niz2, int n1, int n2)
{
	n1 = max(n1, n2);
	int* niz = (int*)malloc(sizeof(int) * n1);
	int i = 0, j = 0, k = 0;
	qsort(niz1, n1, sizeof(int), cmp);
	qsort(niz2, n1, sizeof(int), cmp);
	while (i < n1 && j < n1)
	{
		if (niz1[i] == niz2[j])
		{
			niz[k] = niz1[i];
			++k;
			++i;
			++j;
		}
		else if (niz1[i] > niz2[j])
			++j;
		else if (niz1[i] < niz2[j])
			++i;
	}
	niz = (int*)realloc(niz, sizeof(int) * k);
	return niz;
}

void print(int niz[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", niz[i]);
	}
	printf("\n\n");
}