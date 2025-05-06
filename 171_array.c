// wap to take array element form user and find max element.
#include <stdio.h>
void display(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int maxElement(int arr[], int size)
{
    int max = arr[0], i;
    for (i = 0; i < size; i++) // 5
    {
        if (max < arr[i])
        {
            max = arr[i]; // 566
        }
    }
    return max;
}
void main()
{
    int arr1[5] = {12, 634, 56, 3334, 8};
    int arr2[3] = {1267, 8634, 856};
    int arr3[10]={343,56,7,32,134,57,77,55,3,6};
    int i;
    printf("display array1 element : ");
    display(arr1, 5);
    printf("\nmax element : %d", maxElement(arr1, 5));
    printf("\ndisplay array2 element : ");
    display(arr2, 3);
    printf("\nmax element : %d", maxElement(arr2, 3));
    printf("\ndisplay array3 element : ");
    display(arr3, 10);
    printf("\nmax element : %d", maxElement(arr3, 10));
}