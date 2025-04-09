// wap to print even number sum 1 to n.
#include <stdio.h>
void main()
{
    int i, sum = 0, n;
    printf("enter a num : ");
    scanf("%d", &n);//20
    for (i = 1; i <= n; i++) // 11
    {
        if (i % 2 == 0)
        {
            sum = sum + i; // 55
        }
    }
    printf("sum of 1 to %d even number : %d ", n, sum);
}