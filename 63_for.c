// wap to print number between given range.
#include <stdio.h>
void main()
{
    int i, n, s;
    printf("enter starting range : ");
    scanf("%d", &s); //10
    printf("enter ending range : ");
    scanf("%d", &n); // 23
    for (i = s; i <= n; i++)
    {
        printf("%d ", i);
    }
}