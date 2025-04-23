//wap to 1 to 10 number using goto
#include <stdio.h>
void main()
{
    int i = 1;
lable:
    printf("%d \n",i);
    i++;
    if (i <= 10)
    {
        goto lable;
    }
}