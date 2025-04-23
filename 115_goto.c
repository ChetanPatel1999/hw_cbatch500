#include <stdio.h>
void main()
{
    int i = 1;
    printf("hello student\n");
    i++;
    if (i <= 5)
    {
        goto hi;
    }
    printf("before lable \n");
hi:
    printf("after lable ");
}