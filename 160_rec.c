// wap to print table using recursion.
#include <stdio.h>
void table(int n)
{
    static int i = 1;
    printf("%d  x %d = %d \n", n, i, n * i);
    i++;
    if(i<=10)
    {
     table(n);
    }
}
void main()
{
    table(5);
}