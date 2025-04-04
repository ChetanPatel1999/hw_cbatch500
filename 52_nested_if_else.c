// wap to find greatest number between three  number whithout using logical and operator.
#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("enter num1 : ");
    scanf("%d", &num1); // 455
    printf("enter num2 : ");
    scanf("%d", &num2); // 788
    printf("enter num3 : ");
    scanf("%d", &num3); // 900
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("greatest num : %d", num1);
        }
        else
        {
            printf("greatest num : %d", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("greatest num : %d", num2);
        }
        else
        {
            printf("greatest num : %d", num3);
        }
    }
}