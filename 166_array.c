#include <stdio.h>
void main()
{
  int arr[5] = {2, 5, 4, 3, 8};
  int i;
  printf("array element are : ");
  for (i = 0; i < 5; i++)
  {
    printf("%d ", arr[i]);
  }
  int sum = 0;
  // 2,5,4,3,8
  for (i = 0; i < 5; i++) // 5
  {
    sum = sum + arr[i]; // 22
  }
  printf("\nsum of all array element :%d", sum);
}