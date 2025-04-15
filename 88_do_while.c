// make a continue calculator
#include <stdio.h>
void main()
{
    int num, a, b, ans, p;
    printf("welcome to my calculater ! \n");
    do
    {
        printf("press 1 for add :\n");
        printf("press 2 for sub :\n");
        printf("press 3 for mul :\n");
        printf("press 4 for div :\n");
        printf("please press num  :");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("you choosed addition programm\n");
            printf("enter first num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            ans = a + b;
            printf("sum = %d\n", ans);
            break;
        case 2:
            printf("you choosed subtraction programm\n");
            printf("enter first num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            ans = a - b;
            printf("sub = %d\n", ans);
            break;
        case 3:
            printf("you choosed multiplication programm\n");
            printf("enter first num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            ans = a * b;
            printf("mul = %d\n", ans);
            break;
        case 4:
            printf("you choosed division programm\n");
            printf("enter first num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            ans = a / b;
            printf("div = %d\n", ans);
            break;
        default:
            printf("please enter 1 to 4\n");
        }
        printf("you want to continue so press 1 : ");
        scanf("%d", &p);
    } while (p == 1);
}