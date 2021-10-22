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
char* reverse(char* s1, char* s2)
{
    int slen = mystrlen(s2);
    int i, j;
    for (i = 0, j = slen - 1; (i < slen) && (j >= 0); i++, j--)
    {
        s2[j] = s1[i];
    }
    s2[i] = '\0';
}
int main(void)
{
    char st1[] = "JabukaJabuka";
    char st2[] = "Kruska";
    reverse(st1, st2);
    printf("%s", st2);
    return 0;
}