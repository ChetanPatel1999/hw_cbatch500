// no return type but with argument
#include <stdio.h>
void add(int a, int b)
{
    int c;
    c = a + b;
    printf("sum = %d\n", c);
}
void cube(int n)
{
    int c;
    c = n * n * n;
    printf("cube of %d = %d\n", n, c);
}
void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++) //22
    {
        cube(i);
    }

}
void even_odd(int n)
{
    if (n % 2 == 0)
    {
        printf("num is even");
    }
    else
    {
        printf("num is odd");
    }
}
void main()
{
    /* printf("hello i am main\n");
     add(45,8);
     add(12,7);
     int x,y;
     x=8;
     y=6;
     add(x,y);*/
    // cube(4);
    // range(1,10);
    // printf("--------------------\n");
    // range(20,25);
    // printf("--------------------\n");
    // range(1,5);
    even_odd(5);
}