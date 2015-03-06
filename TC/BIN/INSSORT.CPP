//Program to sort an array using insertion sort.

#include<iostream.h>
#include<limits.h>
#include<conio.h>

void isort(int a[],int s)
{
	int temp,i,j;
	a[0]=INT_MIN;
	for(i=1;i<=s;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
		cout<<"\n\tArray after iteration "<<i<<" : ";
		for(int k=1;k<=s;k++)
			cout<<a[k]<<'\t';
	}
}

void main()
{
	clrscr();
	int a[50], s;
	cout<<"\n\tEnter size of the array : ";
	cin>>s;
	cout<<"\n\tEnter elements of the array : ";
	for(int i=1;i<=s;i++)
		cin>>a[i];
	isort(a,s);
	cout<<"\n\n\tSorted Array : ";
	for(i=1;i<=s;i++)
		cout<<a[i]<<'\t';
	getch();
}