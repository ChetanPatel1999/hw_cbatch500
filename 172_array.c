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
int matchArray(int a1[], int a2[], int s1, int s2)
{
    int i;
    if (s1 != s2)
    {
        return 0;
    }
    else
    {
        for (i = 0; i < s1; i++) // 2
        {
            if (a1[i] != a2[i])
            {
                return 0;
            }
        }
        return 1;
    }
}
void main()
{
    int arr1[5] = {12, 56, 56, 3334, 8};
    int arr2[3] = {1267, 8634, 856};
    int arr3[5] = {12, 56, 56, 3334, 8};
    int arr4[5] = {12, 56, 678, 3334, 8};

    if (matchArray(arr1, arr4, 5, 5))
    {
        printf("array are same");
    }
    else
    {
        printf("array are not same");
    }
}