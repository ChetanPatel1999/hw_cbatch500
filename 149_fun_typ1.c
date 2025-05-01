// no return type no argument
#include <stdio.h>
void add()
{
    int a, b, c;
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum = %d\n", c);
}
void cube()
{
    int n, c;
    printf("enter a num : ");
    scanf("%d", &n);
    c = n * n * n;
    printf("cube of %d = %d\n", n, c);
}
void even_odd()
{
    int n;
    printf("enter a num : ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("num is even");
    }
    else
    {
        printf("num is odd");
    }
}
void factorial()
{
    int n, i, fact = 1;
    printf("enter a num : ");
    scanf("%d", &n); // 10
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d\n", n, fact);
}
void main()
{
    add();
    cube();
    even_odd();
    factorial(5);
}