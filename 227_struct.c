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
    struct pen p1, p2 = {"goldex", 10, 4.4}, p3 = {
                                                 "trimex",
                                                 50,
                                                 4.3,
                                             };
    printf("size of p1 : %d\n", sizeof(p1));
    // setdata p1
    strcpy(p1.name, "cello");
    p1.price = 5;
    p1.rating = 3.5;

    printf("p1 info :\n");
    printf("pen name : %s\n", p1.name);
    printf("pen price : %d\n", p1.price);
    printf("pen rating : %.1f\n\n", p1.rating);

    printf("p2 info :\n");
    printf("pen name : %s\n", p2.name);
    printf("pen price : %d\n", p2.price);
    printf("pen rating : %.1f\n\n", p2.rating);
}