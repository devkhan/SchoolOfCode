//Program to sort an array using selection sort.

#include<iostream.h>
#include<conio.h>

void selsort(int a[],int size)
{
	int i,j,small,temp,pos;
	for(i=0;i<size;i++)
	{
		small=i;
		for(j=i+1;j<size;j++)
			if(a[j]<a[small])
			       {	small=j;}
		temp=a[small];
		a[small]=a[i];
		a[i]=temp;
		cout<<"\n\tArray after iteration "<<i+1<<" : ";
		for(j=0;j<size;j++)cout<<a[j]<<'\t';
	}
}

void main()
{
	clrscr();
	int a[50], size;
	cout<<"\n\tEnter size of the array (max. 50) : ";
	cin>>size;
	cout<<"\n\tEnter array elements : ";
	for(int i=0;i<size;i++)
		cin>>a[i];
	selsort(a,size);
	cout<<"\n\n\tSorted Array : ";
	for(int j=0;j<size;j++)
		cout<<a[j]<<'\t';
	getch();
}