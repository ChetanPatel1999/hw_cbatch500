// wap to check given number is multiple of 7 or not.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // 14
    if (num % 7 == 0)
    {
        printf("multiple of 7");
    }
    else
    {
        printf("not multiple of 7");
    }
}