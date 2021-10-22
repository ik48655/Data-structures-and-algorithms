#include<stdio.h>
void mystrcpy(char* str1, char* str2)
{
	int i;
	for (i = 0; str1[i] != '\0'; i++)
	{
		str2[i] = str1[i];
	}
	str2[i] = '\0';
}

int main()
{
	char st1[] = "abcdef";
	char st2[25];
	mystrcpy(st1, st2);
	printf("%s", st2);
	return 0;
}