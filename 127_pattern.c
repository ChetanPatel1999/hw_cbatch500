#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)//3
    {  
        for (j = 1; j <= i; j++)//3
        {
            printf("%d ",i*j); 
        }                    
        printf("\n");        
    }
} 