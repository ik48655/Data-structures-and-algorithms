#include<stdio.h>
#include<stdlib.h>
int* podniz(int* niz, int start, int stop)
{
	int* arr;
	int n = stop - start;
	arr = (int*)malloc((n + 1) * sizeof(int));
	if(!arr)
	{
		return -1;
	}
	int i, j;
	for (i = start, j = 0; i <= stop; i++)
	{
		arr[j] = niz[i];
		j++;
	}
	return arr;
}
void main1()
{
	int niz[6] = { 1,2,3,4,5,6 };
	int p = 1;
	int k = 4;
	int* narr = podniz(niz, p, k);
	for (int i = 0; i < (k + 1) - p; i++)
		printf("%d ", narr[i]);
	free(narr);

}