// with return type , with argument
#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int cube(int n)
{
    return n * n * n;
}
float avrage(int a, int b)
{
    return (a + b) / 2.0;
}
int range_sum(int s, int e)
{
    int sum = 0, i;
    for (i = s; i <= e; i++)
    {
        sum = sum + i;
    }
    return sum;
}
void cube_range(int s,int e)
{
    int  i;
    for (i = s; i <= e; i++)
    {
        printf("cube of %d = %d\n",i,cube(i));
    }
}
void main()
{
    printf("sum = %d\n", add(3, 8));
    printf("cube = %d\n", cube(3));
    printf("average = %.2f\n", avrage(3, 4));
    printf("sum range = %d\n", range_sum(1, 5));
    cube_range(1,10);
}