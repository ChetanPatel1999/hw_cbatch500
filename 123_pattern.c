#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)//3
    {
        for (j = i; j <= 5; j++)//2
        {
            printf("* ");//1 1 
        }  
        printf("\n");   
    }
} 