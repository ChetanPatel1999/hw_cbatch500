// wap to check given three angle make tringle or not.
#include <stdio.h>
void main()
{
    int a1, a2, a3;
    printf("enter first angle : ");
    scanf("%d", &a1);//90
    printf("enter second angle : ");
    scanf("%d", &a2);//90
    printf("enter third angle : ");
    scanf("%d", &a3);//0
    if (a1+a2+a3==180 && a1>0 && a2>0 && a3>0)
    {
        printf("you can make tringle");
    }
    else
    {
        printf("you can not make tringle");
    }
}