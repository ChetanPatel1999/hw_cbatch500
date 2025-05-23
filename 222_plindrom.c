// wap to check plindrom string without using built in function.
#include <stdio.h>
#include <string.h>
void main()
{
    char name[30];
    printf("enter string : ");
    gets(name);
    int i = 0, j = strlen(name) - 1, f = 1;
    //malkklam
    while (i < j)
    {
        if (name[i] != name[j])
        {
            f = 0;
            break;
        }
        i++;//4
        j--;//3
    }
    if (f == 1)
    {
        printf("string is plindrom");
    }
    else
    {
        printf("string is not  plindrom");
    }
}