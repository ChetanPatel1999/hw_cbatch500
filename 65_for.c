// wap to print average 1 to n.
#include <stdio.h>
void main()
{
    int i, sum = 0, n;
    float avg;
    printf("enter a num : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // 11
    {
        sum = sum + i; // 55
    }
    printf("sum of 1 to %d : %d ", n, sum);
    avg = sum / (float)n;
    printf("\naverage of 1 to %d = %.2f", n, avg);
}