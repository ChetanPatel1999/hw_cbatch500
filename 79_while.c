//wap to print individual digit of given number in reverse order.
#include <stdio.h>
void main()
{
    int num, rem;
    printf("enter a num : ");
    scanf("%d", &num);//329
    while (num > 0)//
    {
        rem = num % 10;//
        printf("%d \n", rem);//
        num = num / 10;//
    }
}