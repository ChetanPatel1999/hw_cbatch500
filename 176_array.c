// wap to reverse array element.
// input array :- {12,567,89,34,23}
// output array :- {21,765,98,43,32}
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
void sortAccending(int arr[], int s)
{
    // 5,12,23,34,567
    int i, min, minindex, j, temp;
    for (i = 0; i < s - 1; i++) // 4
    {
        min = arr[i];               // 34
        minindex = i;               // 3
        for (j = i + 1; j < s; j++) // 4
        {
            if (min > arr[j])
            {
                min = arr[j]; // 23
                minindex = j; // 4
            }
        }
        temp = arr[i]; // 34
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
}
void main()
{
    int arr[10] = {12, 567, 5, 34, 23, 3, 10, 345, 222, 15};
    display(arr, 10);
    sortAccending(arr, 10);
    display(arr, 10);
}