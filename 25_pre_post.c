// pre/post increament
#include <stdio.h>
void main()
{
    int a = 12, b;
    // b = ++a; // pre increament :- first increase a value than assign in b
    b = a++;    // post increament :- first assign in b  than increase a value
    printf("a = %d\n", a); // 13
    printf("b = %d\n", b); // 12
}