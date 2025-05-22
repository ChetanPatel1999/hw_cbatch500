// strcat() :- its combine to string
#include <stdio.h>
#include <string.h>
void main()
{
    char s1[50], s2[50];
    printf("enter string1 : ");
    gets(s1); // hello
    printf("enter string2 : ");
    gets(s2); // hello
    printf("string1 : %s \n", s1);//chetan
    printf("string2 : %s \n", s2);//patel
    strcat(s1, s2);
    printf("string1 : %s \n", s1);//chetanpatel
    printf("string2 : %s \n", s2);//patel
}