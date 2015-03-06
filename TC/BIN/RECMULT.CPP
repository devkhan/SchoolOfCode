//Program to find product of two numbers using recursion.

#include<iostream.h>
#include<conio.h>
#include<math.h>

long prod(int a, int b)
{
	a=abs(a);
	b=abs(b);
	if((a==0)||(b==0))
		return 0;
	if(b==1)
		return a;
	return a+prod(a,b-1);
}

void main()
{
	clrscr();
	int x, y;
	cout<<"\n\tEnter two numbers to find product : ";
	cin>>x>>y;
	if(((x<0)&&(y>=0))||((x>=0&&y<0)))
		cout<<"\n\tProduct "<<x<<" * "<<y<<" = "<<-prod(x,y);
	else
		cout<<"\n\tProduct "<<x<<" * "<<y<<" = "<<prod(x,y);
	getch();
}