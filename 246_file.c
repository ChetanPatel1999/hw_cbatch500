// fseek() , rewind() , ftell()
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("facto.txt", "r");
    printf("ptr position : %d \n", ftell(ptr));
    // fseek(ptr,11,SEEK_SET); // its set pointer location on file
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    printf("\nptr position : %d \n", ftell(ptr));
    rewind(ptr); // its set pointer position at begining .
    printf("\nptr position : %d \n", ftell(ptr));
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