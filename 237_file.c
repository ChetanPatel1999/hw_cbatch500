//append mode append data inside file
//without delete previous data 
#include <stdio.h>
void main()
{
    FILE *ptr;
    char name[30]="hi i am chetan\n";
    ptr = fopen("anirudh.txt", "a");
    fprintf(ptr, "hello world institute\n");
    fprintf(ptr, name);
    fclose(ptr);
}