#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    float x;
    float y;
    float z;
}tocka;

typedef struct
{
    tocka normala;
    tocka vrh_a;
    tocka vrh_b;
    tocka vrh_c;
    unsigned short boja;
}trokut;

typedef struct
{
    int n;
    trokut* niz;
}objekt3d;

objekt3d* binread();
void pravitxt(objekt3d* tekstualni);
void pravibin(objekt3d* binarni);