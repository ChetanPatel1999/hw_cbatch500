// wap to check given number is greater than 1000 or not.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);
    num > 1000 ? printf("num is greater than 1000 ") : printf("num is less than 1000");
}