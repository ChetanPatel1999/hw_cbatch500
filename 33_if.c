// if example
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // 3
    if (num == 1)
    {
        printf("good morning");
    }
    if (num == 2)
    {
        printf("good after noon");
    }
    if (num == 3)
    {
        printf("good evevning");
    }
    if (num == 4)
    {
        printf("good night");
    }
    if (num > 4)
    {
        printf("please enter 1 to 4");
    }
}