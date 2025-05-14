// if we increase pointer value by 1 so its increase by 4 
// if pointer type is integer.
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("value of a : %d\n", a);    // 12
    printf("address of a : %d\n", &a); // 6789
    printf("ptr value  : %d\n", ptr);  // 6789
    ptr++;
    printf("address of a : %d\n", &a); // 6789
    printf("value of ptr : %d\n", ptr); // 6793
}