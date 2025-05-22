// strlen()  :- return length of string
#include <stdio.h>
#include <string.h>
void main()
{
    char s[50];
    printf("enter string : ");
    gets(s); // hello
    printf("string : %s \n", s);
    printf("total char : %d", strlen(s));
}