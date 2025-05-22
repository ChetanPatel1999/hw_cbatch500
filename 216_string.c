// make function lower to upper string convert
#include <stdio.h>
#include <string.h>
void upper(char s[]) // HEllo
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
}
void main()
{
    char s[50];
    printf("enter string : ");
    gets(s); // hello
    printf("string : %s \n", s);
    upper(s);
    printf("string upper : %s \n", s);
}