#include <stdio.h>
char* mystrcat(char* st1, char* st2)
{
    int i = 0, j = strlen(st1);
    while (st1[i] != '\0')
    {
        st1[j] = st2[i];
        j++;
        i++;
    }
    st1[j] = '\0';
    return st1;
}
int main(void)
{
    char str1[20] = "abc";
    char str2[] = "abc";
    printf("%s\n", mystrcat(str1, str2));
    printf("%s\n", strstr(str1, str2));
    return 0;
}