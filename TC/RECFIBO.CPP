//Program to find the nth term of the Fibonacci series.

#include<iostream.h>
#include<conio.h>

float fib(int n)
{
	if((n==0)||(n==1))
		return n;
	return fib(n-1)+fib(n-2);
}

void main()
{
	clrscr();
	unsigned int n;
	cout<<"\n\tEnter n to find nth term of the Fibonacci series : ";
	cin>>n;
	cout<<"\n\t"<<n<<"th Fibonacci term = "<<fib(n);
	getch();
}