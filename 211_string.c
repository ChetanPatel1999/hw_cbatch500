// fgets() :- take string from user
// fputs() :- display string on output screen
#include <stdio.h>
void main()
{
    char s[50];
    printf("enter string : ");
    fgets(s, 50, stdin);
    printf("string : %s", s);
    // fputs(s,stdout);
}