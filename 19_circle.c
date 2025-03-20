//constant variable
#include<stdio.h>
void main()
{
	const float pi=3.141;
	float r,a;
    printf("enter radius : ");
    scanf("%f",&r);
    a=pi*r*r;
    printf("area of circle : %.2f",a);
}
