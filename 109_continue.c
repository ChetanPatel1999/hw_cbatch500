// wap to print odd numbers using continue stmnt
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        printf("%d\n", i);
    }
}