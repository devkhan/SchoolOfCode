#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int x;
	long double sum=0,fact=1;
	cout<<"\n\tEnter valur of x : ";
	cin>>x;
	for(int i=0; i<=12 ;i+=2)
	{
		for(int j=1; j<=i; j++)
			fact = fact*j;
		sum += pow(-1,i-1)*(pow((float)x,i)/fact);
	}
	cout<<"\n\tSum of the series : "<<sum;
	getch();
}