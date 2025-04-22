// wap to make calculater
#include <stdio.h>
void main()
{
    int total_ammount = 2000, rs, total = 0, p;
    printf("         boyfriend luto app \n");
    printf("______________________________________\n\n");
    printf("       total ammount : %d\n",total_ammount);
    printf("______________________________________\n\n");
    do
    {
        printf("enter ammount spent on your gf : ");
        scanf("%d", &rs);   // 2000
        total = total + rs; // 1300
        if (total > total_ammount)
        {
            total = total - rs;
            printf("\nyou have insufficient balance \n");
            printf("bro please drop your gf at home\n");
            printf("you have only %d rs \n\n", total_ammount - total);
        }
        else
        {
            printf("\nyou paid succecfully ammount ! \n\n");
        }
        printf("gf want some thing more press 1 : ");
        scanf("%d", &p);
    } while (p == 1);
    printf("_________________________________________________\n\n");
    printf("       total spent ammount : %d\n", total);
    printf("       remaining amount : %d\n", total_ammount - total);
}