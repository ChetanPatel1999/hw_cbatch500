// fgets():= its used to read line from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char s[50];
    ptr = fopen("abc.txt", "r");
    fgets(s, 30, ptr);
    printf("%s", s);
    fclose(ptr);
}