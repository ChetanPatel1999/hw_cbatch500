#include <stdio.h>
void fun(int n)
{
    if (n > 1)
    {
        fun(n - 1);
    }
    printf("%d ", n);
}
void main()
{
    fun(5);
}