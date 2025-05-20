//visit string using null character
#include <stdio.h>
void main()
{
    char name[] = "hi i am chetan patel";
    int i;
    printf("name = %s\n", name);
    for (i = 0; name[i] != '\0'; i++)//6
    {
        printf("%c\n", name[i]);
    }
}