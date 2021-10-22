#include <stdio.h>
int mystrlen(char* s1)
{
    int i = 0, broj = 0;
    while (s1[i] != '\0')
    {
        broj++;
        i++;
    }
    return broj;
}
int main(void)
{
    char str[] = "Ivan";
    int duljina = 0;
    printf("%d\n%d\n", mystrlen(str), strlen(str));
    return 0;
}