//Program to perform binary search on an array using recursion.

#include<iostream.h>
#include<conio.h>

int bsearch(int a[],int e,int beg,int last)
{
	if(beg==last&&a[beg]==e)
		return last;
	else
	{
		int mid=(beg+last)/2;
		if(a[mid]>e)
			bsearch(a,e,mid+1,last);
		else if(a[mid]<e)
			bsearch(a,e,beg,mid-1);
			else
				return mid;
	}
	return -1;
}

void main()
{
	clrscr();
	int a[50],s,n;
	cout<<"\n\tEnter size of the array : ";
	cin>>s;
	cout<<"\n\tEnter array elements : ";
	for(int i=0;i<s;i++)
		cin>>a[i];
	cout<<"\n\tEnter element to be searched : ";
	cin>>n;
	if(bsearch(a,n,0,s-1)==-1)
		cout<<"\n\tElement not found!!!";
	else
		cout<<"\n\tElement found at position "<<bsearch(a,n,0,s-1)+1;
	getch();
}