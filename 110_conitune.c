// continue and break 
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 1)
        {
            continue;
        }
        if (i % 6 == 0)
        {
            break;
        }
        printf("%d\n", i);
    }
}