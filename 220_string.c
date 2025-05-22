// strcmp():- its compare two string
// if string are same so return 0 if differn return 1
// strcmpi() :- its ignor upper and lower case
#include <stdio.h>
#include <string.h>
void main()
{
    char s1[50], s2[50];
    printf("enter string1 : ");
    gets(s1); // hello
    printf("enter string2 : ");
    gets(s2); // hello
    if (strcmpi(s1,s2)==0)
    {
        printf("string are same");
    }
    else
    {
        printf("string are different");
    }
}