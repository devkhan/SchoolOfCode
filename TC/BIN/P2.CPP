//Program to find biggest of the three numbers.

#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int a,b,c;
	cout<<"\n\tEnter first number  : ";
	cin>>a;
	cout<<"\n\tEnter second number : ";
	cin>>b;
	cout<<"\n\tEnter third number  : ";
	cin>>c;

	if (a<b)
	a = b ;

	if (a<c)
	a = c ;

	cout<<"\n\tThe largest number of all three is "<<a<<"\n\n\t***END***";
	getch();
	return 0;
}