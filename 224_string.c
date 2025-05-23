// wap to print reverse string in same variable.
#include <stdio.h>
#include <string.h>
void reverse(char s[])
{
    int i;
    char temp;
    for (i = 0; i < (strlen(s) / 2); i++) // 3
    {
        temp = s[i]; // e
        s[i] = s[strlen(s) - i - 1];
        s[strlen(s) - i - 1] = temp;
    }
}
void main()
{
    char name[30];
    printf("enter string : ");
    gets(name);
    printf("string : %s\n", name);
    reverse(name);
    printf("string : %s\n", name);
}