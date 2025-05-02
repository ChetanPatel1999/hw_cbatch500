// recursion example
#include <stdio.h>
void fun()
{
    printf("hello student \n");
    fun(); // recursive calling
}
void main()
{
    fun();
}