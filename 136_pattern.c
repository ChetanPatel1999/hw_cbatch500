#include <stdio.h>
int main()
{
    int i, j;
    for (i = 69; i >= 65; i--) // 70
    {
        for (j = 65; j <= i; j++)
        {
            printf("%c ", j); 
        } 
        printf("\n"); 
    }
} 