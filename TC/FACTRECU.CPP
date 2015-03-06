//Program to find factorial using recursion.

#include<iostream.h>
#include<conio.h>

long double fact(long n)
{
	if(n==0)
		return 1;
	return n*fact(n-1);
}
void main()
{
	clrscr();
	long n;
	cout<<"\n\tEnter no. to find factorial : ";
	cin>>n;
	if(n<0)
		cout<<"\n\t!!!INVALID VALUE!!!";
	else if((n==0)||(n==1))
		cout<<"\n\tFactorial = "<<'1';
	     else
		cout<<"\n\tFactorial = "<<fact(n);
	getch();
}