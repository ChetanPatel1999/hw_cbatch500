#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 6; i++) // 3
    {
        for (j = i; j < 6; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if(i==4 || j==1 || j==i)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}