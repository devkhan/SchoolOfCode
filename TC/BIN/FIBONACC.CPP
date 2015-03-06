#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long f=0,s=1,t,n;
	cout<<"\nHow many terms to show:";
	cin>>n;
	cout<<"\n\tFibonacci Series:"<<f<<'\,'<<s;
	for(int i=1;i<=n;i++)
	{
		t=f+s;
		cout<<'\,'<<t;
		f=s;
		s=t;
	}
	getch();
}


