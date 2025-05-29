// read data from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char name[30];
    int stop;
    ptr = fopen("facto.txt", "r");
    while (1)
    {
        stop = fscanf(ptr, "%s", name);
        if (stop == EOF)
        {
            break;
        }
        printf("%s ", name);
    }
    fclose(ptr);
}