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
void reverseArrayElement(int arr[], int s)
{
    int i, rev, num, rem;
    // 21,567,89,34,23
    for (i = 0; i < s; i++)//1
    {
        num = arr[i]; // 567
        rev = 0;
        while (num)
        {
            rem = num % 10;
            rev = rev * 10 + rem; // 765
            num = num / 10;
        }
        arr[i] = rev;
    }
}
void main()
{
    int arr[5] = {12, 567, 89, 34, 23};
    display(arr, 5);
    reverseArrayElement(arr, 5);
    display(arr, 5);
}