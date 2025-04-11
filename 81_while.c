// wap to count digit in given number.
#include <stdio.h>
void main()
{
    int num, rem, c = 0;
    printf("enter a num : ");
    scanf("%d", &num); //4589
    while (num > 0)    
    {
        c++;//1
        num = num / 10; 
    }
    printf("digit count in number :  %d", c);
}