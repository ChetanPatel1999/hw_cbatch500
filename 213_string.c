// wap to make a funnction for length of  string.
#include <stdio.h>
int length(char s[])
{
    int i, c = 0;
    for (i = 0; s[i] != '\0'; i++) // 2
    {
        c++; // 2
    }
    return c;
}
void main()
{
    char s[50];
    printf("enter string : ");
    gets(s); // hello
    printf("string : %s \n", s);
    printf("total char : %d", length(s));
}