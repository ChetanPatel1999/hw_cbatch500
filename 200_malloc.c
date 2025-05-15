// pointer to array
#include <stdio.h>
#include <stdlib.h>
void main()
{

    float *ptr, *temp;
    int i, n;
    printf("enter dyanamic array size : ");
    scanf("%d", &n); // 5
    ptr = (float *)malloc(n * sizeof(float));
    temp = ptr;
    printf("enter array element : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", ptr);
        ptr++; // 404
    }
    ptr = temp;
    printf("display array element : ");
    for (i = 0; i < n; i++) // 5
    {
        printf("%.2f ", *ptr); // 12 34 56 78 90
        ptr++;                 // 420
    }
    float sum = 0;
    ptr = temp;
    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++; // 404
    }
    printf("\nsum = %.2f\n", sum);
    ptr = temp;
    free(ptr);
    printf("display array element : ");
    for (i = 0; i < n; i++) // 5
    {
        printf("%.2f ", *ptr); // 12 34 56 78 90
        ptr++;                 // 420
    }
}