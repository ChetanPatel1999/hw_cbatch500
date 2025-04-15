#include <stdio.h>
void main()
{
    int total_ammount = 20000;
    int sum = 0, num, sallary, p;
    printf("    sallary distribute app!\n");
    printf("__________________________________\n\n");
    do
    {
        printf("enter emp sallary : ");
        scanf("%d", &sallary);
        sum = sum + sallary;
        if (sum > total_ammount)
        {
            sum = sum - sallary;
            printf("you have insufficient belance\n\n");
            printf("you have only %d rs\n\n", total_ammount - sum);
        }
        else
        {
            printf("you distribute sallary successfully\n\n");
        }
        printf("any more emp press 1 : ");
        scanf("%d", &p);
    } while (p == 1);
    printf("_____________________________________\n\n");
    printf("   total ammount distribute : %d\n", sum);
    printf("   remaining  ammount  : %d\n", total_ammount - sum);
}