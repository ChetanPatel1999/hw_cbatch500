#include <stdio.h>
void main()
{
    int p = 0, num, i;
    printf("enter a number : ");
    scanf("%d", &num); // 12
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            p++;
        }
        if (p > 2)
        {
            break;
        }
    }
    printf("value of p = %d\n", p);
    if (p == 2)
    {
        printf("num is prime ");
    }
    else
    {
        printf("num is not prime ");
    }
}