#include <stdio.h>
void main()
{
    int i, j;
    for (i = 65; i <= 69; i++) //70
    {
        for (j = i; j <= 69; j++)
        {
            printf("%c ", j);//A B C D E
        }                    //B C D E
        printf("\n");        //C D E
    }                        //D E
}                            //E