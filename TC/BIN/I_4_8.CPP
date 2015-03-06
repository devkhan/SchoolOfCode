//Program to print triangle of asterisks.

#include<iostream.h>

void main()
{
	int n;
	cout<<"\n\tEnter number of lines to show : ";
	cin>>n;
	for(int i=1,l=0; i<=n ;i++,l+=2)
	{
		cout<<endl;
		for(int j=n-1; j>=i ;j--)
			cout<<' ';
		for(int k=0 ; k<=l ; k++)
			cout<<'*';
	}
}