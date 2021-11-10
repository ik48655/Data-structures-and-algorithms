#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	float br;
	int n;
	int i = 0;
	printf("Enter an index n: ");
	scanf("%d", &n);
	FILE* fp = fopen("Koordinata.bin", "rb");
	fseek(fp, 4 + n * 8, SEEK_SET);  //preskacemo n koji smo unijeli u datoteku jer je integer(4+), n je index, (*8) svaka struktura ima 2 float-a po 4 byta
	for (i; i < 2; i++)
	{
		fread(&br, sizeof(float), 1, fp);
		printf("%f ", br);
	}
	fclose(fp);
	return 0;
}