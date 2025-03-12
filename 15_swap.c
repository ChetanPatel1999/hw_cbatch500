//wap to swap two number using third variable.
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter a value : ");
	scanf("%d",&a);//12
	printf("enter b value : ");
	scanf("%d",&b);//5
	printf("dsiplay value before swapping ...\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	c=a;
	a=b;
	b=c;
	printf("dsiplay value after swapping ...\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
}
