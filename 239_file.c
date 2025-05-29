// read data from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char name[30];
    ptr = fopen("facto.txt", "r");
    fscanf(ptr, "%s", name);
    printf("%s", name);
    fclose(ptr);
}