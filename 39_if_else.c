// wap to check given char is vovel or consonent.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a alphabet : ");
    scanf("%c", &ch); //
    printf("givan char is : %c\n",ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("char is vovel");
    }
    else
    {
        printf("char is consonent");
    }
}