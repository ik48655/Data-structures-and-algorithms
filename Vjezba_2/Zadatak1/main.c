#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stl.h"

int main(void)
{
    objekt3d* objects = binread();
    pravibin(objects);
    pravitxt(objects);
    brise3d(objects);
    return 0;
}