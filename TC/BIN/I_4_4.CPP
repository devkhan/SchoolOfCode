//Program to find the sum of the first n terms of the series :
//
//	Sum = 1-2+3-4+5-6+.....

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int n, sum=0;
	cout<<"\n\tEnter a number : ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
			sum+=i;
		else
			sum-=i;
	}
	cout<<"\n\tSum of the series : "<<sum;
	getch();
}