#include <stdio.h>
void main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++)
    {
        for (s = i; s < 5; s++)
        {
            printf("  ");
        }
        for (j = 1; j <= i * 2 - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 3; i <= 5; i++)
    {
        for (s = i; s < 5; s++)
        {
            printf("  ");
        }
        for (j = 1; j <= i * 2 - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 3; i <= 5; i++)
    {
        for (s = i; s < 5; s++)
        {
            printf("  ");
        }
        for (j = 1; j <= i * 2 - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++)
    {

        printf("       * *");

        printf("\n");
    }
}