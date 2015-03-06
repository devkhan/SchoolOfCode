//Program to reverse a number.

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int n, rn=0;
	cout<<"\n\tEnter a number : ";
	cin>>n;
	while(n)
	{
		rn = rn*10 + n%10;
		n/=10;
	}
	cout<<"\n\tReversed number : "<<rn;
	getch();
}