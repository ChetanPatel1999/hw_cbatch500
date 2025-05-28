#include <stdio.h>
void main()
{
    int i, num, fact = 1;
    FILE *ptr;
    ptr = fopen("facto.txt", "a");
    printf("enter a num: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d\n", num, fact);
    fprintf(ptr, "factorial of %d = %d\n", num, fact);
    fclose(ptr);
}