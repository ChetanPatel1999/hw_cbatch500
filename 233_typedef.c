// typedef :- its used to assign temprary name of data type.
#include <stdio.h>
typedef long double ld;
typedef long long int lli;
struct student_of_10_class_B_section
{
    int rno;
    float per;
};
typedef struct student_of_10_class_B_section s10b;
void main()
{
    s10b s1;
    int a;
    lli b;
    ld c;
    printf("size of int : %d\n", sizeof(a));
    printf("size of long long int : %d\n", sizeof(b));
    printf("size of double : %d\n", sizeof(c));
}