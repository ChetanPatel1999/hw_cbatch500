//variable declaration rule
#include<stdio.h>
int gl=90;// global variable
void game()
{
  int c=67;//local variable	
  printf("c = %d\n",c);	
  printf("gl = %d\n",gl);	
}
void fun()
{
  int b=67;//local variable	
  printf("b = %d\n",b);	
  printf("gl = %d\n",gl);	
}
void main()
{
  int a=12;//local variable
  int A;
  printf("a = %d\n",a);	
  printf("gl = %d \n",gl);
}
