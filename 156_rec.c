// recursion example
#include <stdio.h>

void fun()
{
    static int i=1; //its run only one time in whole program
    printf("hello student \n");//3
    i++; //4
    if (i <= 5)
    {
        fun();
    }

}
void main()
{
    fun();
}