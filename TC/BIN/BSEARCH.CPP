//Program to perform binary search.

#include<iostream.h>
#include<conio.h>

int bsearch(int [], int, int);

void main()
{
	clrscr();
	int a[50], s, n, p;
	cout<<"\n\tEnter size of the array : ";
	cin>>s;
	cout<<"\n\tEnter elemnts in ascending order : ";
	for(int i=0; i<s; i++)
	{
		cout<<"\n\tEnter element "<<i+1<<" : ";
		cin>>a[i];
	}
	cout<<"\n\tEnter elemnt to find : ";
	cin>>n;
	p=bsearch(a,s,n);
	if(p==-1)
		cout<<"\n\tElemnt not found!!!";
	else
		cout<<"\n\tElemnt found at position : "<<++p;
	getch();
}

int bsearch(int a[],int s,int n)
{
	int start=0,last=s-1,pos=-1;
	int mid=(start+last)/2;
	while(start!=last)
	{
		if(n==a[mid])
		{
			pos=mid;
			break;
		}
		if(n>a[mid])
			start=mid;
		else
			last=mid;
		mid=(start+last)/2;
	}
	return pos;
}
