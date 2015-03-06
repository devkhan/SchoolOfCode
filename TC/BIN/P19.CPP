//Program to find out if the area of a rectangle is greater than its perimeter when the four sides are given.

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,c,d,pm,ar;
	cout<<"\n\tEnter the four sides of the rectangle (in side by side order) : ";
	cin >>a>>b>>c>>d;
	pm=a+b+c+d;
	ar=b*c;
	if (ar>pm)
	cout<<"\n\tThe area of the rectangle is greater than its preimeter.";
	else
		if (ar<pm)
		cout<<"\n\tThe area of the rectangle is smaller than is its perimeter.";
		else
		cout<<"\n\tThe area and the perimeter of the rectangle are equal!!!";
	cout<<"\n\n\t***END***";
	getch();
}