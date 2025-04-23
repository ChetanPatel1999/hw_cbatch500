// wap to 1 to 20 even  number using goto
#include <stdio.h>
void main()
{
    int i = 1;
lable:
    if (i % 2 == 0)
    {
        printf("%d ", i);
    }
    i++;
    if (i <= 20)
    {
        goto lable;
    }
}