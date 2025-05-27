#include <stdio.h>
#include <string.h>
union pen
{
    char name[8];
    int price;
    float rating;
};
void main()
{
    union pen p1, p2;
    printf("size of p1 : %d\n", sizeof(p1));
    // setdata p1
    printf("p1 info :\n");
    strcpy(p1.name, "cello");
    printf("pen name : %s\n", p1.name);
    p1.price = 5;
    printf("pen price : %d\n", p1.price);
    p1.rating = 3.5;
    printf("pen rating : %.1f\n\n", p1.rating);
}