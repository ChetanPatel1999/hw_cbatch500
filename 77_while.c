// wap to print table .
#include <stdio.h>
void main()
{
    int i, n;
    i = 1;
    printf("enter a num : ");
    scanf("%d", &n);//4
    while (i <= 10)
    {
        printf("%d X %d = %d\n", n, i, n * i);
        i++;
    }
}