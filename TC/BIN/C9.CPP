//Program to print sum to reciprocal of n natural numbers.

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n;
	float sum=0;
	cout<<"\n\tEnter value of n : ";
	cin>>n;
	while(n)
	{
		sum = sum + (1/(float)n);
		--n;
	}
	cout<<"\n\tSum of reciprocal of n natural numbers : "<<sum;
	getch();
}