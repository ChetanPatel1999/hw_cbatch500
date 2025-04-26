// wap to count prime number in givan range.
#include <stdio.h>
void main()
{
    int n, j, i, c,p=0;
    for (j = 1; j <= 100; j++)//5
    {
        n = j;
        c=0;
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            printf("%d ",n);// 2 3 5
            p++;
        }
    }
    printf("\ntotal prime number : %d ",p);
}