// wap to check given number is prime or not.
#include <stdio.h>
void main()
{
    int num, i, prime = 1;
    printf("enter a num : ");
    scanf("%d", &num); // 17
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            prime = 0;
        }
    }
    if (prime == 1)
    {
        printf("num is prime");
    }
    else
    {
        printf("num is not prime");
    }
}