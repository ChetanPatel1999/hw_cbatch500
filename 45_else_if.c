// wap to check given number is nagative,positive or zero.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num);//0
    if (num > 0)
    {
        printf("num is positive");
    }
    else if (num < 0)
    {
        printf("num is nagative");
    }
    else
    {
        printf("num is zero");
    }
}