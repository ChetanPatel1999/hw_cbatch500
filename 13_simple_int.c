//wap to find simple interest.
#include<stdio.h>
void main()
{
	float p,r,t,si,ta;
	printf("enter principle amount :");
	scanf("%f",&p);//500
	printf("enter rate :");
	scanf("%f",&r);//2
	printf("enter time :");
	scanf("%f",&t);//3
	si=(p*r*t)/100;
	ta=p+si;
	printf("simple interest : %.2f\n",si);
	printf("total ammount pay: %.2f\n",ta);
	
}
