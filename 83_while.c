// wap to check given number is perfect number or not.
// 28
#include <stdio.h>
void main()
{
    int num, i, sum = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 15
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (num * 2 == sum)
    {
        printf("perfect num");
    }
    else
    {
        printf("not perfact num");
    }
}