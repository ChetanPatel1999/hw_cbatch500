// fgetc() :- its read one charcter from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("facto.txt", "r");
    ch = fgetc(ptr);
    printf("%c", ch);
    fclose(ptr);
}