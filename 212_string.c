// wap to find length of string.
#include <stdio.h>
void main()
{
    char s[50];
    printf("enter string : ");
    gets(s); // hello
    printf("string : %s \n", s);
    int i, c = 0;
    for (i = 0; s[i] != '\0'; i++) // 2
    {
        c++; // 2
    }
    printf("total char : %d", c);
}