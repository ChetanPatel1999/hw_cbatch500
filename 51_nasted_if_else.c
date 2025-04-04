// wap to check voter is eligible casting vote in india or not.
#include <stdio.h>
void main()
{
    char country;
    int age;
    printf("enter 'i' if you are indian : ");
    scanf("%c", &country);
    if (country == 'i')
    {
        printf("enter your age : ");
        scanf("%d", &age);
        if (age >= 18)
        {
            printf("you are eligible");
        }
        else
        {
            printf("you are not eligible");
        }
    }
    else
    {
        printf("you are not indian");
    }
}