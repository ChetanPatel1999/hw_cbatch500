// wap to check given number is plindrome or not.
#include <stdio.h>
void main()
{
    int num, rem, rev = 0, original_num;
    printf("enter a num : ");
    scanf("%d", &num);
    original_num = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (original_num == rev)
    {
        printf("plindrom number");
    }
    else
    {
        printf("not plindrom ");
    }
}