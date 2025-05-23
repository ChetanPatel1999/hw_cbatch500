// wap to check plindrom string.
#include <stdio.h>
#include <string.h>
void main()
{
    char name[30], temp[30];
    printf("enter string : ");
    gets(name);
    strcpy(temp, name);
    strrev(name);
    if (strcmp(temp, name) == 0)
    {
        printf("string is plindrom");
    }
    else
    {
        printf("string is not plindrom");
    }
}