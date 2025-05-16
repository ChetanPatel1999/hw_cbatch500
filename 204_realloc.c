#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i = 0, *ptr, *temp, marks, p, m;
    ptr = (int *)malloc(sizeof(int));
    temp = ptr;
    do
    {
        printf("enter student marks :");
        scanf("%d", &marks);
        *(ptr + i) = marks;
        i++; // 3
        printf("you want to store more marks press 1 :");
        scanf("%d", &p);
        if (p == 1)
        {
            ptr = realloc(temp, (i + 1) * sizeof(int));
            temp = ptr;
        }

    } while (p == 1);
    ptr = temp;
    for (m = 0; m < i; m++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    
}