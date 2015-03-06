#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int a[50], s, n, p=-1;
	cout<<"\n\tEnter size of the array : ";
	cin>>s;
	for( int i=0 ; i<s ; i++ )
	{
		cout<<"\n\tEnter element "<<i+1<<" : ";
		cin>>a[i];
	}
	cout<<"\n\tEnter elemnt to find : ";
	cin>>n;
	while(s)
		if(a[--s]==n)
		{
			p=s;
			break;
		}
	if(p==-1)
		cout<<"\n\tElemnt not found!!!";
	else
		cout<<"\n\tElemnt found at position no. "<<++p;
	getch();
}