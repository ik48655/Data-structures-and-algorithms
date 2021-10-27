#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	float x;
	float y;
}tocka;
typedef struct
{
	int n;
	tocka* niz;
}poligon;
poligon* novi_poligon(float* niz_x, float* niz_y, int n)
{
	poligon* nnovi = (poligon*)malloc(sizeof(poligon));
	if (!nnovi) return NULL;
	nnovi->niz = (tocka*)malloc(n * sizeof(tocka));
	if (!nnovi->niz) return NULL;
	for (int i = 0; i < n; i++)
	{
		nnovi->niz[i].x = niz_x[i];
		nnovi->niz[i].y = niz_y[i];
	}
	return nnovi;
}
tocka** pozitivni(poligon* p, int* pc)
{
	tocka** plus;
	plus = (tocka*)malloc(p->n * sizeof(tocka*));
	int broj = 0;
	int i;
	for (i = 0; i < p->n; i++)
	{
		if (p->niz[i].x > 0 && p->niz[i].y > 0)
		{
			plus[broj] = &(p->niz[i]);
			printf("%d\n", &(p->niz[i]));
			broj++;
		}
	}
	*pc = broj;
	return plus;
}
void main()
{
	float nniz_x[5] = { -1,2,3,-4,5 };
	float nniz_y[5] = { 5,-6,7,8,9 };
	int n = sizeof(nniz_x) / sizeof(nniz_x[0]);
	int nn;
	tocka** pt;
	poligon* nnn = novi_poligon(nniz_x, nniz_y, n);
	nnn->n = n;
	printf("Koordinate poligona:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d, %d\n", &nnn->niz[i].x, &nnn->niz[i].y);
		printf("x: %0.2f, y: %0.2f\n", nnn->niz[i].x, nnn->niz[i].y);
	}
	printf("\n");
	pt = pozitivni(nnn, &nn);
	for (int i = 0; i < nn; i++)
	{
		printf("%d\n", pt[i]);
	}
	free(pt);
	free(nnn->niz);
	free(nnn);
}