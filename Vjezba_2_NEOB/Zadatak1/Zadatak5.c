#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	//appending new point to file
	FILE* fp = fopen("Koordinata.bin", "ab");
	float arr[2];
	float x, y;

	printf("Enter the coordinate x: ");
	scanf("%f", &x);
	printf("Enter the coordinate y: ");
	scanf("%f", &y);

	arr[0] = x;
	arr[1] = y;

	fwrite(&arr[0], sizeof(float), 1, fp);
	fwrite(&arr[1], sizeof(float), 1, fp);
	fclose(fp);

	//Printing all points in backwards
	fp = fopen("Koordinata.bin", "rb+");
	int i = 0;
	fseek(fp, -i, SEEK_END);
	int sz = ftell(fp) - 4;
	printf("%d\n", sz);
	float num1, num2;
	while (i < sz)
	{
		i += 8;
		fseek(fp, -i, SEEK_END);
		fread(&num1, sizeof(float), 1, fp);
		printf("%f ", num1);
		fread(&num2, sizeof(float), 1, fp);
		printf("%f\n", num2);

	}
	fclose(fp);
	return 0;
}