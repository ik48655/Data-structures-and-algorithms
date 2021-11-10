#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i = 0;
	int arr[100];
	FILE* fp = fopen("spremi.bin", "rb");
	while(!feof(fp))
	{
		fread(&arr[i], sizeof(int), 1, fp);
		printf("Broj iz datoteke: %d \n", arr[i]);
	}
	fclose(fp);
	return 0;
}