//Program to find the factors of a given number.

#include<iostream.h>

void main()
{
	int n, i=0;
	cout<<"\n\tEnter a number to find its factors : ";
	cin>>n;
	while(++i<=(n/2))
		if(n%i==0)
			cout<<'\t'<<i;
	cout<<'\t'<<n;
}

