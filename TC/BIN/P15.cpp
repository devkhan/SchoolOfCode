#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int d,r,q,n;
	cout<<"\n\tEnter the decimal number : ";
	cin>> d ;
	cout<<"\n\tPlease the read the number in reverse : ";
	while (n)
	{
		r = n%2;
		q = n/2;
		cout<< r ;
		n = q;
	}
	getch();
}