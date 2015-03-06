#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	unsigned int n,f=1,i;
	cout<<"\n\n\tEnter the number of which the factorial has to be found : ";
	cin>>n;
	i=n;
	while(n)
	{
		f*=n;
		n--;
	}
	cout<<"\n\n\t"<<i<<"! = "<<f;
	getch();
}