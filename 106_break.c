// wap to search a digit in given number.
// 678543
#include <stdio.h>
void main()
{
    int num, rem, d, f = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 4567
    printf("enter a digit : ");
    scanf("%d", &d); // 45675435
    while (num > 0)
    {
        rem = num % 10;
        if (rem == d)
        {
            f = 1;
            break;
        }
        num = num / 10;
    }
    if (f == 1)
    {
        printf("digit  is in number ");
    }
    else
    {
        printf("digit  is not in number ");
    }
}