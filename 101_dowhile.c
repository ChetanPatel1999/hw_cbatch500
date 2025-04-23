// club mini project
#include <stdio.h>
void main()
{
    int age, num, sum = 0, n = 0, m = 0, s = 0, c, i;
    printf("enter your age : ");
    scanf("%d", &age); // 10
    if (age >= 18)
    {
        printf("welcome to my clue ! \n");
        do
        {
            menu:
            printf("club menue ....\n");
            printf("            item       price\n");
            printf("press 1 for noodles    80\n");
            printf("press 2 for sandwitch   120\n");
            printf("press 3 for manchurian   100\n");
            printf("press number : ");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("how many quantity : ");
                scanf("%d", &c);
                for (i = 1; i <= c; i++)
                {
                    sum = sum + 80;
                    n++;
                }
                printf("your %d noodles is orderd \n", c);
                break;
            case 2:
                printf("your sandwitch is ordered \n");
                sum = sum + 120;
                s++;
                break;
            case 3:
                printf("your manchurian is orderd \n");
                sum = sum + 100;
                m++;
                break;
            default:
                printf("please press 1 to 3 numbers\n");
                goto menu;
            }
            printf("you want to order something more so press 1 :");
            scanf("%d", &num);
        } while (num == 1);
        printf("\n\n                         your bill sir\n");
        printf("________________________________________________________________________\n\n");
        printf("        item           Quantity         price       total ammount \n");
        printf("        noodles          %d               80           %d \n", n, n * 80);
        printf("        sandwitch        %d               120          %d \n", s, s * 120);
        printf("        manchorian       %d               100          %d \n", m, m * 100);
        printf("________________________________________________________________________\n\n");
        printf("                      your total bill : %d \n ", sum);
    }
    else
    {
        printf("you are not adult please try after %d year", 18 - age);
    }
}