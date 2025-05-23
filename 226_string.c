// copy string
#include <stdio.h>
#include <string.h>
int copy(char s2[], char s1[]) // hello
{
    int i;
    for (i = 0; i < strlen(s1); i++) // 6
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
}
int length(char s[])
{
    int i; // hello
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    return i;
}
void main()
{
    char s1[50], s2[50];
    printf("enter string1 : ");
    gets(s1); // hello
    copy(s2, s1);
    printf("string 1 : %s\n", s1);
    printf("string 2 : %s\n", s2);
    printf("length s2 :%d \n", length(s2));
    printf("length s1 :%d ", length(s1));
}