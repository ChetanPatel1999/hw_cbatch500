// recursion example
#include <stdio.h>
int i = 1; // global variable
void fun()
{
    printf("hello student \n");//5
    i++; // 6
    if (i <= 10)
    {
        fun();
    }

}
void main()
{
    fun();
}