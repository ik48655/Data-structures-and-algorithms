#include <stdio.h>
int* mystrstr(char* s1, char* s2)
{
    int i, j;
    for (i = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s1[i+j] == s2[j]; j++)
            if (s2[j + 1] == '\0')
            {
                return &s1[i];
            }
    }
    return 0;

}
int main(void)
{
    char st1[] = "abaaaaabaa";
    char st2[] = "aaab";
    printf("%s\n", mystrstr(st1, st2));
    printf("%s\n", strstr(st1, st2));
    return 0;
}