// fputc() :- // its write inside file
#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("facto.txt", "w");
    fputc('K', ptr);
    fputc(' ',ptr);
    fputc(65, ptr);
    fclose(ptr);
}