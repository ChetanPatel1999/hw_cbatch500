// array in c lanaguge
#include <stdio.h>
void main()
{
    int arr[10] = {12, 34, 56, 78, 90,23,44,55,66,77};
    printf("array element are :\n");
    int i;
    for(i=0;i<10;i++)//3
    {
        printf("%d ", arr[i]);
    }
    arr[5]=600; 
    printf("\nafter change array element are :\n");
    for(i=0;i<10;i++)//3
    {
        printf("%d ", arr[i]);
    }
}