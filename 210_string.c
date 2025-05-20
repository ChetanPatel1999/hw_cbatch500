//gets() :- take string from user
//puts() :- display string on output screen
#include <stdio.h>
void main()
{
    char s[50];
    printf("enter string : ");
    gets(s);
    //printf("string : %s", s);
    puts(s);
}