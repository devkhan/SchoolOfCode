//Program to check if a year is a leap year or not.

#include<iostream.h>
#include<conio.h>
void main()
{
	int y;
	cout<<"\n\n\tEnter year : ";
	cin>>y;
	if (y%4==0)
	cout<<"\n\tYes, it is aleap year.";
	else
	cout<<"\n\tNo,it is not a leap year.";
	cout<<"\n\n\t***END***" ;
	getch();
}