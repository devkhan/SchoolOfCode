#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,flag=0;
	cout<<"\n\tEnter the number : ";
	cin>>n;
	for(int i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	cout<<"\n\n\t"<<n<<" is not a prime number!!!";
	else
	cout<<"\n\n\t"<<n<<" is a prime number!!!";
	getch();
}
