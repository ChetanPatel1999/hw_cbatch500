// wap to count vovel in given string.
#include <stdio.h>
void main()
{
    char name[] = "hi i am chetan patel";
    int i, c = 0, p = 0, n = 0;
    printf("name = %s\n", name);
    for (i = 0; name[i] != '\0'; i++) // 6
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            c++;
        }
        else if (name[i] == ' ')
        {
            n++;
        }
        else
        {
            p++;
        }
    }
    printf("total vovel count in string : %d\n", c);
    printf("total space count in string : %d\n", n);
    printf("total consonenet count in string : %d", p);
}