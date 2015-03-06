//Program to fin the first n terms of the series :
//
//	Sum = 1 + 1/2 + 1/3 + 1/4 + .....

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int n;
	float sum=0;
	cout<<"\n\tEnter a number : ";
	cin>>n;
	while(n)
		sum+=(1/(float)n--);
	cout<<"\n\tSum of the series = "<<sum;
	getch();
}