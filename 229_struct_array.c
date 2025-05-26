#include <stdio.h>
#include <string.h>
struct pen
{
    char name[12]; // data member
    int price;     // data member
    float rating;  // data member
};
void main()
{
    int n;
    printf("enter array size :");
    scanf("%d", &n);
    struct pen p[n];
    int i;
    for (i = 0; i < n; i++) // 1
    {
        printf("enter p%d info :\n", i + 1);
        printf("enter name : ");
        scanf("%s", p[i].name);
        printf("enter price : ");
        scanf("%d", &p[i].price);
        printf("enter rating : ");
        scanf("%f", &p[i].rating);
    }

    for (i = 0; i < n; i++)
    {
        printf("p%d info :\n", i + 1);
        printf("pen name : %s\n", p[i].name);
        printf("pen price : %d\n", p[i].price);
        printf("pen rating : %.1f\n\n", p[i].rating);
    }
}