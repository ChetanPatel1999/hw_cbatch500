// with return type , with argument
#include <stdio.h>
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
void main()
{
    int res;
    res = add(12, 6);
    printf("sum = %d\n", res);
    printf("sum = %d\n", add(45, 7));
    printf("sum = %d\n", add(3, 8));
}