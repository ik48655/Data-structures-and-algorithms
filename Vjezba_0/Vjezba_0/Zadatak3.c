#include <stdio.h>
int mystrcmp(char* s1, char* s2)
{
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
    }
    if (s1[i] < s2[i])
        return -1;
    else if (s1[i] > s2[i])
        return 1;
    else
        return 0;

}
int main(void)
{
    char st1[] = "aaa";
    char st2[] = "aaab";
    printf("%d\n%d\n", mystrcmp(st1, st2), strcmp(st1, st2));
    return 0;
}