#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	float x;
	float y;

}Koordinata;

int main(void)
{
	FILE* fp = fopen("Koordinata.bin", "wb");
	int n;
	printf("Enter the number n: ");
	scanf("%d", &n);
	fwrite(&n, sizeof(int), 1, fp);

	Koordinata arr[100];
	int i = 0;
	for (i; i < n; i++)
	{
		printf("Enter the coordinate x: ");
		scanf("%f", &arr[i].x);
		fwrite(&arr[i].x, sizeof(float), 1, fp);
		printf("Enter the coordinate y: ");
		scanf("%f", &arr[i].y);
		fwrite(&arr[i].y, sizeof(float), 1, fp);
	}
	fclose(fp);
	return 0;
}