// wap to check given number is prime or not.
#include <stdio.h>
void main()
{
    int num, i, c = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 15
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            c++; // 4
        }
    }
    if (c == 2)
    {
        printf("num is prime");
    }
    else
    {
        printf("num is not prime");
    }
}