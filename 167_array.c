//how to print array element adresses
#include<stdio.h>
void main()
{
  int marks[5]={50,80,30,20,40};
  int i;
  printf("students marks : ");
  for(i=0;i<5;i++)
  {
    printf("%d ",&marks[i]);
  }
}