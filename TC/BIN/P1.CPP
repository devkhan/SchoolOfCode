//Program to find the area and circumference of a circle.

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float r,a,c;
	const float pi = 3.14 ;
	cout<<"\n\tEnetr radius of the circle : ";
	cin>>r;
	a = pi * r * r ;
	c = 2 * pi * r ;
	cout<<"\n\tArea of the circle = "<<a;
	cout<<"\n\n\tCircumference of the circle = "<<c;
	cout<<"\n\n\t***END***";
	getch();
}