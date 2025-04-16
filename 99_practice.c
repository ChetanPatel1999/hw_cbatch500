// club project .
#include <stdio.h>
void main()
{
    int age, num;
    printf("enter your age : ");
    scanf("%d", &age); // 10
    if (age >= 18)
    {
        printf("welcome to my club...\n");
        printf("menu card : \n");
        printf("1. noodles  : 120 \n");
        printf("2. momos    : 99 \n");
        printf("3. mocktail : 199 \n");
        printf("please order to press num : ");
        scanf("%d", &num);
        if (num == 1)
        {
            printf("your noodles is orderd please pay 120 rs\n");
        }
        else if (num == 2)
        {
            printf("your momos is orderd please pay 99 rs\n");
        }
        else if (num == 3)
        {
            printf("choose your mocktail ..\n");
            printf("1.mojito \n");
            printf("2. blue berry \n");
            printf("3. stroberry \n");
            printf("choose : ");
            scanf("%d", &num);
            if (num == 1)
            {
                printf("your mojito is orderd please pay 199\n");
            }
            else if (num == 2)
            {
                printf("your blueberry is orderd please pay 199\n");
            }
            else if (num == 3)
            {
                printf("your stroberry is orderd please pay 199\n");
            }
            else
            {
                printf("please enter 1 to 3");
            }
        }
        else
        {
            printf("please enter 1 to 3");
        }
    }
    else
    {
        printf("you are not adult please try after %d year", 18 - age);
    }
    printf("\nthanks for visiting our club %c", 1);
}