// pointer to array
#include <stdio.h>
#include <stdlib.h>
void main()
{

    int i, *ptr, *temp, n;
    printf("enter dyanamic array size : ");
    scanf("%d", &n); // 5
    ptr = (int *)calloc(n , sizeof(int));
    temp = ptr;
    printf("enter array element : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++; // 404
    }
    ptr = temp;
    printf("display array element : ");
    for (i = 0; i < n; i++) // 5
    {
        printf("%d ", *ptr); // 12 34 56 78 90
        ptr++;               // 420
    }
    int sum = 0;
    ptr = temp;
    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++; // 404
    }
    printf("\nsum = %d\n", sum);
    ptr = temp;
    free(ptr);
    printf("display array element : ");
    for (i = 0; i < n; i++) // 5
    {
        printf("%d ", *ptr); // 12 34 56 78 90
        ptr++;               // 420
    }
}