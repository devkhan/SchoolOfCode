//Sum of the series : 1+x+x^2+x^3+x^4+x^5.

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int x,sum=0;
	cout<<"\n\tEnter the value x : ";
	cin>>x;
	for(int i=0; i<=5; i++)
		sum +=  pow(x,i);
	cout<<"\n\tSum of the series : "<<sum;
	getch();
}