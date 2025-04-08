//wap to print table of given number.
#include <stdio.h>
void main()
{
    int i, n, tab;
    printf("enter a num : ");
    scanf("%d", &n);          // 7
    for (i = 1; i <= 10; i++) // 2
    {
        tab = n * i;
        printf("%d \n", tab);
    }
}