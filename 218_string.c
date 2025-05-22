// strcpy() :- its copy one string to another string
#include <stdio.h>
#include <string.h>
void main()
{
    char s1[50], s2[50];
    printf("enter string : ");
    gets(s1); // hello
    printf("string1 : %s \n", s1);
    printf("string2 : %s \n", s2);
    // strcpy(s2, s1);
    strcpy(s2, "chetan");
    printf("string1 : %s \n", s1);
    printf("string2 : %s \n", s2);
}