
#include <stdio.h>
void main()
{
    int age;
    printf("what is your age ? ");
    scanf("%d", &age); 
    if (age >= 18)
    {
        printf("your are eligible for voting");
    }
    else
    {
        printf("your are not eligible for voting");
    }
}