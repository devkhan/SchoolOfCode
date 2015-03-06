//Program to find the sum and products of the digits of a number.

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int n, r, sum=0, product=1;
	cout<<"\n\tEnter a number : ";
	cin>>n;
	while(n)
	{
		r=n%10;
		sum+=r;
		product*=r;
		n/=10;
	}
	cout<<"\n\tSum of digits : "<<sum;
	cout<<"\n\tProduct of digits : "<<product;
	getch();
}