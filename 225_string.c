// compare two string
#include <stdio.h>
#include <string.h>
int compare(char s1[], char s2[])
{
    if (strlen(s1) != strlen(s2))
    {
        return 0;
    }
    else
    {
        int i;
        for (i = 0; i < strlen(s1); i++)
        {
            if (s1[i] != s2[i])
            {
                return 0;
            }
        }
        return 1;
    }
}
void main()
{
    char s1[50], s2[50];
    printf("enter string1 : ");
    gets(s1); // hello
    printf("enter string2 : ");
    gets(s2); // hello
    if (compare(s1, s2))
    {
        printf("string are same");
    }
    else
    {
        printf("string are not same");
    }
}