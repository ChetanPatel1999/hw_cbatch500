//wap to print even number between 1 to 20 using recursion.
#include <stdio.h>
void fun()
{
    static int i=1; 
    if(i%2==0)
    {
        printf("%d  \n",i);
    }
    i++; 
    if (i <=20)
    {
        fun();
    }

}
void main()
{
    fun();
}