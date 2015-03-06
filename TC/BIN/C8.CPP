#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,sum=0;
	cout<<"\n\tEnter the value of n : ";
	cin>>n;
	for(int i=0; i<=n ; i++)
		sum+=i;
	cout<<"\n\tSum of n natural numbers : "<<sum;
	getch();
}