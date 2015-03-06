//1+1/1!+1/2!+.....+1/n!.

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float fact(int);
	float sum=1;
	int n;
	cout<<"\n\tEnter the value of n : ";
	cin>>n;
	for(int i=1;i<n;i++)
	{
		sum=sum+(1/fact(i));
	}
	cout<<"\n\n\tSum = "<<sum;
	getch();
}
float fact(int i)
{
	float fact1=1;
	while(i>0)
	{
		fact1=fact1*i;
		--i;
	}
	return (fact1);
}