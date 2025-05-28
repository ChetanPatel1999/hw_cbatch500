// write data inside file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char name[30]="hi i am chetan\n";
    ptr = fopen("anirudh.txt", "w");
    fprintf(ptr, "hello world institute\n");
    fprintf(ptr, name);
    fclose(ptr);
}