#include<iostream.h>
#include<conio.h>

int prime(long n)
{
	int flag=0;
	for(int i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}

void main()
{
	clrscr();
	long n;
	int d[6];
	cout<<"\n\tEnter no : ";
	cin>>n;
	long n1=n;
	int flag=0;
	for(int i=0;i<6;i++)
	{
		d[i]=n1%10;
		n1/=10;
	}
	int d1[6];
	for(int x=0;x<6;x++)d1[x]=d[x];
	for(int j=0;j<6;j++)
	{
		n1=d[j]*100000;
		for(int k=0,l=10;k<6;k++,l*=10)
		{
			n1+=d1[k]*l;
		}
		if(!prime(n1))
		{
			flag=1;
			break;
		}
	}
	if(flag)
		cout<<"\n\tNot prime in every case";
	else
		cout<<"\n\tPrime in every case";
	getch();
}