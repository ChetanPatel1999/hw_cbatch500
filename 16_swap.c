//wap to swap two number without using third variable.
#include<stdio.h>
void main()
{
	int a,b;
	printf("enter a value : ");
	scanf("%d",&a);//12
	printf("enter b value : ");
	scanf("%d",&b);//5
	printf("dsiplay value before swapping ...\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
/*	a=a+b;//17
	b=a-b;//12
	a=a-b;//5*/
	a=a*b;//60
	b=a/b;//12
	a=a/b;//5
	printf("dsiplay value after swapping ...\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
}
