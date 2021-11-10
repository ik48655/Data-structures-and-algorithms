#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
	FILE* fd = fopen("spremi.bin", "wb");
	int n;
	printf("Enter the number n: ");
	scanf("%d", &n);
	fwrite(&n, sizeof(int), 1, fd);
	printf("\n");
	int arr[100];
	for (int i = 0; i < n; i++)
	{
		printf("Enter an array element: ");
		scanf("%d", &arr[i]);
	}

	fwrite(arr, sizeof(int), n, fd);
	fclose(fd);


}