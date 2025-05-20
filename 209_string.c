#include <stdio.h>
void main()
{
    char s[30];
    printf("enter string : ");
    scanf("%[^\n]s",s);
    printf("string : %s", s);
}