// comparision operator
#include <stdio.h>
void main()
{
    int a, b, c;
    a = 20;
    b = 20;
    c = a < b;
    printf("ans =%d\n", c); // 0
    c = a > b;
    printf("ans =%d\n", c); // 0
    c = a <= b;
    printf("ans =%d\n", c); // 1
    c = a >= b;
    printf("ans =%d\n", c); // 1
    c = a == b;
    printf("ans =%d\n", c); // 1
    c = a != b;
    printf("ans =%d\n", c); // 0
}