// strrev() :- its reverse string
#include <stdio.h>
#include <string.h>
void main()
{
    char s[50];
    printf("enter string : ");
    gets(s); // hello
    printf("string : %s \n", s);
    strrev(s);
    printf("string reverse : %s \n", s);   
}