#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cmp(const void* a, const void* b);
int* generiraj(int n);
void shuffle(int* niz, int n);
int* presjek(int* niz1, int* niz2, int n, int n2);
int* presjek_jedan_sortiran(int* niz1, int* niz2, int n, int n2);
int* presjek_oba_sortirana(int* niz1, int* niz2, int n, int n2);
void print(int niz[], int n);
