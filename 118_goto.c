// wap to print table of given  number using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1, num;
    printf("enter a num : ");
    scanf("%d", &num);
lable:
    printf("%d x %d = %d\n", num, i, num * i);
    i++;
    if (i <= 10)
    {
        goto lable;
    }
}