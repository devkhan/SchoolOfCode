//1^2+2^2+3^2+.....+N^2.

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int n,i,s=0;
	cout<<"\n\tEnter the value of n : ";
	cin>>n;
	for (i=1;i<=n;i++)
	s=s+pow(i,2);
	cout<<"\n\n\tSum = "<<s;
	getch();
}
