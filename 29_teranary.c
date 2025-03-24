// wap to check voter is eligible for casting vote or note.
#include <stdio.h>
void main()
{
    int age; 
    printf("enter youre age : ");
    scanf("%d", &age); 
    age >= 18 ? printf("voter is eligible") : printf("voter is not eligible");
}