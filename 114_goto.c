#include <stdio.h>
void main()
{
    int i = 1;
   hi:
    printf("hello student\n");
    i++;
    if (i <= 5)
    {
        goto hi;
    }
}