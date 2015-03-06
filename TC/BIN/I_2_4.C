//Program to find the area and perimeter of a rectangle.

#include<stdio.h>

void main()
{
	float l, b, a, p;
	printf("\n\tEnter length and breadth : ");
	scanf("%f%f",&l,&b);
	printf("\n\tArea = %f sq. units",(l*b));
	printf("\n\tPerimeter = %f sq. units",(2*(l+b)));
	system("pause");
}
