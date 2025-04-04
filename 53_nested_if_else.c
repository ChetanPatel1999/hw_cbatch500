// club mini project
#include <stdio.h>
void main()
{
    int age, num;
    printf("enter your age : ");
    scanf("%d", &age); // 10
    if (age >= 18)
    {
        printf("welcome to my clue ! \n");
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
            printf("your noodles is orderd please pay 80 rs");
            break;
        case 2:
            printf("slecte categary of sandwitch ! \n");
            printf("press 1 for masala sandwitch\n");
            printf("press 2 for vegiatble sandwitch\n");
            printf("press 3 for cheez sandwitch\n");
            printf("select sandwitch : ");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("your masala sandwitch is ordered please pay 120 rs\n");
                break;
            case 2:
                printf("your vegiatble sandwitch is ordered please pay 120 rs\n");
                break;
            case 3:
                printf("your cheez sandwitch is ordered please pay 120 rs\n");
                break;
            default:
                printf("please press 1 to 3 numbers");
            }

            break;
        case 3:
            printf("your manchurian is orderd please pay 100 rs");
            break;
        default:
            printf("please press 1 to 3 numbers");
        }
    }
    else
    {
        printf("you are not adult please try after %d year", 18 - age);
    }
}