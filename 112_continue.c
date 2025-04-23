#include <stdio.h>
void main()
{
    int i = 1;
    while (i <= 20)
    {
        i++; // 11
        if (i % 3 == 0 || i % 5 == 0)
        {
            continue;
        }
        if (i == 16 || i == 11)
        {
            continue;
        }
        printf("%d ", i);
    }
}