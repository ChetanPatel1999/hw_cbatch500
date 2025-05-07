// How many even and how many odd number count with recursion.
#include <stdio.h>
int even_count(int s, int e)
{
    static int c = 0;
    if (s % 2 == 0)
    {
        c++;//1
    }
    s++;//3
    if (s <= e)
    {
        even_count(s, e);
    }
    return c;
}
void main()
{
    printf("even count = %d", even_count(1, 10));
}