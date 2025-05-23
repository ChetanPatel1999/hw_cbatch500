// wap to print reverse string of given string.
#include <stdio.h>
#include <string.h>
void main()
{
    char name[30];
    printf("enter string : ");
    gets(name);
    printf("string : %s\n", name);
    int l = strlen(name);
    int i;
    for (i = l - 1; i >= 0; i--)
    {
        printf("%c", name[i]);
    }
    printf("\nstring : %s\n", name);
}