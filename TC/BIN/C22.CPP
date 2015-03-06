#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	void print(int);
	int n;
	cout<<"\n\tEnter the no. of lines to show : ";
	cin>>n;
	print(n);
	getch();
}
void print(int n)
{
	int i,j;
	for(i=0;i<n;++i)
	{
		for(j=0;j<=((n-i)/2);j++)
			cout<<' ';
		for(int k=1; k<=(i+1) ;k++)
			cout<<'*';
		cout<<'\n';
	}
}