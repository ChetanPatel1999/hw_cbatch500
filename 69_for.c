//wap to count factors of given number.
#include <stdio.h>
void main()
{
    int num, i,c=0;
    printf("enter a num : ");
    scanf("%d", &num); // 15
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
          c++;//4
        }
    }
    printf("total factor of %d = %d ",num,c);
}