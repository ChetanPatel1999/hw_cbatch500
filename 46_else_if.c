// wap to find greatest number between three number.
#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("enter num1 : ");
    scanf("%d", &num1); // 455
    printf("enter num2 : ");
    scanf("%d", &num2); // 78
    printf("enter num3 : ");
    scanf("%d", &num3); // 90
    if (num1 > num2 && num1 > num3)
    {
        printf("greatest num : %d", num1);
    }
    else if (num2 > num3)
    {
        printf("greatest num : %d", num2);
    }
    else
    {
        printf("greatest num : %d", num3);
    }
}