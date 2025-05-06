// wap to take array element form user and display only even element.
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
    printf("\nstudents subject marks only even : ");
    int c=0;
    for (i = 0; i < 5; i++)
    {
        if (marks[i] % 2 == 0)
        {
            printf("%d ", marks[i]);
            c++;
        }
    }
    printf("\ntotal even number : %d",c);
}