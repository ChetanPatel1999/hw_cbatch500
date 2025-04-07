// wap to print number square 1 to n.
#include <stdio.h>
int main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n);//12
    for (i = 1; i <= n; i++) //2
    {
        printf("square of %d = %d \n",i, i*i); //
    }
}