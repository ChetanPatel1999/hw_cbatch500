// wap to check given alphabet is lower case or upper case.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a alphabet : ");
    scanf("%c", &ch); //
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("upper case alphabet ");
    }
    else
    {
        printf("lower case alphabet");
    }
}