// realloc
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, *ptr1, *temp, i, n1, n2;
    printf("enter dynamic array size :");
    scanf("%d", &n1);
    ptr = (int *)malloc(n1 * sizeof(int));
    temp = ptr;
    printf("array address : ");
    for (i = 0; i < n1; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
    ptr = temp;
    printf("\nenter array element : ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr = temp;
    printf("\nenter increse dynamic array size :");
    scanf("%d", &n2); // 8
    ptr1 = realloc(ptr, n2 * sizeof(int));
    temp = ptr1;
    printf("new array address : ");
    for (i = 0; i < n2; i++)
    {
        printf("%d ", ptr1);
        ptr1++;
    }
    ptr1 = temp;
    for (i = 0; i < n1; i++)
    {
        ptr1++;
    }
    printf("\nenter extra array element : ");
    for (i = 0; i < n2 - n1; i++)
    {
        scanf("%d", ptr1);
        ptr1++;
    }
    ptr1 = temp;
    printf("\nenter extra array element : ");
    for (i = 0; i < n2; i++)
    {
        printf("%d ", *ptr1);
        ptr1++;
    }
}