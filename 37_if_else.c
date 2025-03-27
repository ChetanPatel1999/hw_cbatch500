// wap to check given number is greater than 1000 or not.
#include <stdio.h>
void main()
{
    int value;
    printf("enter a number : ");
    scanf("%d", &value); // 1000
    if (value > 1000)
    {
        printf("number is greater than 1000");
    }
    else
    {
        printf("number is less than 1000");
    }
}