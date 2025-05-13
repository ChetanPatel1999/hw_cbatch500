#include <stdio.h>
void main()
{
    char a = 12;
    short int b;
    int c;
    float d;
    double e;
    printf("value of a = %d\n", a);
    printf("address of a = %d\n", &a);
    printf("size of char in byte = %d\n",sizeof(a));
    printf("size of short int in byte = %d\n",sizeof(b));
    printf("size of  int in byte = %d\n",sizeof(c));
    printf("size of  float byte = %d\n",sizeof(d));
    printf("size of  double byte = %d\n",sizeof(e));
}