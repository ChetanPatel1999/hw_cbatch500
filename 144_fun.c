#include <stdio.h>
void add() // function defination
{
    int a, b, c;
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum = %d\n", c);
}
void main()
{
    printf("hi i am main\n");
    add(); //calling
    printf("again inside main\n");
    add();// calling
    printf("end main function");
}
