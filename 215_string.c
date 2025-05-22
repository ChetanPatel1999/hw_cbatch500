// strupr()  :- convert string in uper case
// strlwr()  :- convert string in lower case
#include <stdio.h>
#include <string.h>
void main()
{
    char s[50];
    printf("enter string : ");
    gets(s); // hello
    printf("string : %s \n", s);
    strupr(s);
    printf("string upper : %s \n", s);
    strlwr(s);
    printf("string lower : %s \n", s);
}