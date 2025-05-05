// wap to take array element form user and print them.
#include <stdio.h>
void main()
{
    int marks[5];
    int i;
    printf("enter students marks : \n");
    for (i = 0; i < 5; i++)
    {
        printf("enter student %d marks : ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("students marks : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", marks[i]);
    }
}