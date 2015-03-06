//Program to find roots of a quadratic equation.

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main ()
{
	float a,b,c,d,r1,r2;
	cout<<"\n\tEnter the values of a,b,c for the equation : ax^2 + bx + c = 0 : ";
	cin>>a>>b>>c;
	d = b*b - (4*a*c);
	if (d<0)
	cout<<"\n\tThe roots are complex and imaginary";
	else
	if (d==0)
	{
		r1 = r2 = (-b/2);
		cout<<"\n\tThe roots are real and equal.\n\n\tSquare Root = "<<r1;
	}
	else
	{
		r1 = (-b+(sqrt(d)))/(2*a);
		r2 = (-b-(sqrt(d)))/(2*a);
		cout<<"\n\tThe roots are real and unequal."<<"\n\t1st Root = "<<r1<<"\n\n\t2nd Root = "<<r2;
	}
	cout<<"\n\n\t***END***";
	getch();
}