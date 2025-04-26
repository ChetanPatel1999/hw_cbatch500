#include <stdio.h>
void main()
{
    int s, i, j, k;
    for (i = 1; i <= 5; i++)//2
    {
        for (s = i; s < 5; s++)
        {
            printf("  ");
        }
        for (j = 1; j <= i - 1; j++)
        {
            printf("%d ", j);
        }
        for (k = i; k >= 1; k--)//0
        {
            printf("%d ", k);
        }
        printf("\n");
    }
}