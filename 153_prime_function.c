// with return type with arguement prime number
#include <stdio.h>
int prime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void range(int s,int e)
{
    int i;
    for(i=s;i<=e;i++)
    {
        if(prime(i))
        {
            printf("%d ",i);
        }
    }
}
void main()
{
   range(1,100);
}