// wap to take array element form user and display in reverse order.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size :");
    scanf("%d", &n);
    int arr[n];
    int i;
    printf("enter array element : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("display array element  : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\ndisplay array element in reverse order : ");
    for (i = n - 1; i >= 0; i--)//-1
    {
        printf("%d ", arr[i]);
    }
}