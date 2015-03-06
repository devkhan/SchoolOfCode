//Program to find prime nos. less than 100 using  a function.

#include<iostream.h>
#include<conio.h>

int prime(int n)
{
	for(int i=2; i<=(n/2) ; i++)
		if(n%i==0)
			return 0;
	return 1;
}

void main()
{
	clrscr();
	cout<<"\n\tPrime nos. b/w 1 and 100 : "<<endl;
	for(int i=2; i<100 ; i++)
		if(prime(i))
			cout<<'\t'<<i;
	getch();
}