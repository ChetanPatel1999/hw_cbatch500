// wap to check given number is strong number or not.
#include <stdio.h>
void main()
{
    int num, rem, sum = 0, fact, i, temp;
    printf("enter a num : ");
    scanf("%d", &num); // 145
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        fact = 1;
        for (i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    if (sum == temp)
    {
        printf("strong number");
    }
    else
    {
        printf("not strong number");
    }
}