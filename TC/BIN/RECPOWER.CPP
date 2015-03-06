//Program to find a number raised to some power.

#include<iostream.h>
#include<conio.h>

long power(int x, int y)
{
	if(y==0||x==1)
		return 1;
	if(x==0)
		return 0;
	if(y==1)
		return x;
	return x*power(x,y-1);
}

void main()
{
	clrscr();
	int x,y;
	cout<<"\n\tEnter base : ";
	cin>>x;
	cout<<"\n\tEnter exponent : ";
	cin>>y;
	cout<<"\n\t"<<x<<'^'<<y<<" = "<<power(x,y);
	getch();
}