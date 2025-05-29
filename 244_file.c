// fputs():= its used to write sentance in file
#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("abc.txt", "w");
    fputs("hello world institute", ptr);
    fclose(ptr);
}