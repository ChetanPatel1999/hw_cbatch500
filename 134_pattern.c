#include <stdio.h>
void main()
{
    char i, j;
    for (i = 'A'; i <= 'E'; i++) // 66
    {
        for (j = 'A'; j <= 'E'; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}