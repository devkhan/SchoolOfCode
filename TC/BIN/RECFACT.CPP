//Program to find the factorial of a number using recursion.

#include<iostream.h>
#include<conio.h>

long fact(int n)
{
	if(n==0||n==1)
		return 1;
	return n*fact(n-1);
}

void main()
{
	clrscr();
	unsigned int n;
	cout<<"\n\tEnter a no. to find factorial : ";
	cin>>n;
	cout<<"\n\t"<<n<<'!'<<" = "<<fact(n);
	getch();
}