#include <stdio.h>
#include <string.h>
struct pen
{
    char name[12]; // data member
    int price;     // data member
    float rating;  // data member
};
void above_5_pen(struct pen p[], int n)
{
    int i;
    printf("above 5 rs pen name : \n");
    for (i = 0; i < n; i++)
    {
        if (p[i].price > 5)
        {
            printf("%s\n", p[i].name);
        }
    }
}
int total_price(struct pen p[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + p[i].price;
    }
    return sum;
}
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
    above_5_pen(p, n);
    printf("\ntotal price : %d ", total_price(p, n));
}