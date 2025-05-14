// pointer to array
#include <stdio.h>
void main()
{
    int arr[5];
    int i, *ptr, *temp;
    ptr = &arr[0];
    temp = ptr;
    printf("enter array element : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr = temp;
    printf("display array element : ");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d ", *ptr); // 12 34 56 78 90
        ptr++;               // 420
    }
    int sum = 0;
    ptr = temp;
    for (i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++; // 404
    }
    printf("\nsum = %d", sum);
}