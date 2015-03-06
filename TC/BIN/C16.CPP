#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int x;
	long double sum=0;
	cout<<"\n\tEnter the valur of x : ";
	cin>>x;
	for(int i=0; i<=50 ;++i)
		sum += pow(x,i);
	cout<<"\n\tSum of the series : "<<sum;
	getch();
}