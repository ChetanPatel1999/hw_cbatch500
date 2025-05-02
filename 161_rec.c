#include <stdio.h>
// int factorial(int num)
// {
//     int i, fact = 1;
//     for (i = 1; i <= num; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }
// int factorial(int num)
// {
//     static int i=1, fact = 1;
//     fact = fact * i;//120
//     i++;//6
//     if (i <= num)
//     {
//         factorial(num);
//     }
//     return fact;
// }
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
void main()
{
    printf("factorial = %d\n", factorial(5));
}