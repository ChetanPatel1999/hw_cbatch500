// wap to search given number in given table.
//  8 16
#include <stdio.h>
void main()
{
    int num, s, i, f = 0;
    printf("enter a table num : ");
    scanf("%d", &num); // 8
    printf("enter a search num : ");
    scanf("%d", &s); // 45
    for (i = 1; i <= 10; i++)
    {
        if (num * i == s)
        {
            f = 1;
            break;
        }
    }
    if(f==1)
    {
        printf("num is found");
    }
    else
    {
        printf("num is not found");
    }
}