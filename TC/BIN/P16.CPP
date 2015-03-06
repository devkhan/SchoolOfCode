//Program to print the multiplication table of a number given by the user.

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n,t,m = 1;
	cout<<"\n\tEnter the number of which the multiplication table is to be shown : ";
	cin>>n;
	cout<<"\n\tEnter the number of terms to be shown : ";
	cin>>t;
	cout<<"\n\tMultiplication table :\n";
	for(i=1;i<=t;++i)
	{
		m = i*n;
		cout<<"\n\t"<<m;
	}
	cout<<"\n\n\t***END***";
	getch();
}
