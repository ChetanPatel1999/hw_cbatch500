// fgetc() :- its read one charcter from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("174_array.c", "r");
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(ptr);
}