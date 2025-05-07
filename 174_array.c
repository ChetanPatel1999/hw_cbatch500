// wap to swap array first element with last element.
#include <stdio.h>
void display(int arr[], int s)
{
    printf("array element are : ");
    int i;
    for (i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap(int arr[], int s)
{
    // 90, 34, 56, 78, 12
    int temp = arr[0];
    arr[0] = arr[s - 1];
    arr[s - 1] = temp;
}
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    display(arr, 5);
    swap(arr, 5);
    display(arr, 5);

    int marks[7]={45,67,34,13,89,66,44};
    display(marks,7);
    swap(marks,7);
    display(marks,7);
}