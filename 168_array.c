// wap to take array element form user and print them.
#include <stdio.h>
void main()
{
    int marks[5];
    int i;
    printf("enter students subject marks : \n");
    for (i = 0; i < 5; i++)
    {
        printf("enter student subject%d marks : ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("students subject marks : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", marks[i]);
    }
    // total sum of all marks
    // 45 67 89 33 66
    int sum = 0;
    for (i = 0; i < 5; i++) // 0
    {
        sum = sum + marks[i];
    }
    printf("\ntotal marks : %d", sum);
}