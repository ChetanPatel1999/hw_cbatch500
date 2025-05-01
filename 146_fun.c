// function
#include <stdio.h>

void add()
{
    int a, b, c;
    printf("enter the num 1 : ");
    scanf("%d", &a);
    printf("enter the num 2 : ");
    scanf("%d", &b);
    c = a + b;
    printf("sum = %d\n", c);
    printf("----------------------------------------------------------\n");
}
void sub()
{
    int a, b, c;
    printf("enter the num 1 : ");
    scanf("%d", &a);
    printf("enter the num 2 : ");
    scanf("%d", &b);
    c = a - b;
    printf("sub = %d\n", c);
    printf("----------------------------------------------------------\n");
}
void mul()
{
    int a, b, c;
    printf("enter the num 1 : ");
    scanf("%d", &a);
    printf("enter the num 2 : ");
    scanf("%d", &b);
    c = a * b;
    printf("mul = %d\n", c);
    printf("----------------------------------------------------------\n");
}
void div()
{
    int a, b, c;
    printf("enter the num 1 : ");
    scanf("%d", &a);
    printf("enter the num 2 : ");
    scanf("%d", &b);
    c = a / b;
    printf("div = %d\n", c);
    printf("----------------------------------------------------------\n");
}

void main()
{
    int num;
    do
    {
        printf("press 1 for Addition...\n");
        printf("press 2 for Subtraction...\n");
        printf("press 3 for Multiplication...\n");
        printf("press 4 for Division...\n");
        printf("enter the num : ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            div();
            break;
        default:
            printf("enter  number 1 to 4 \n");
            printf("----------------------------------------------------------\n");
        }
        printf("you want continue so press 1 : ");
        scanf("%d",&num);
    } while (num!=1);
}