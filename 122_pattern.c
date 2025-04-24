#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)//1
    {
        for (j = 1; j <= 5; j++)//2
        {
            printf("%d ",i);//1 1 
        }  
        printf("\n");   
    }
} 