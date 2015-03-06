//Program to perform bubble sort on an array.

#include<iostream.h>
#include<conio.h>

void bsort(int array[],int n)
{
	int i,j,t;
	for(i=0;i<(n-1);++i)
	{
		for(j=0;j<(n-1);++j)
			if(array[j]>array[j+1])
			{
				t=array[j];
				array[j]=array[j+1];
				array[j+1]=t;
			}
		cout<<"\n\tArray after iteration "<<i+1<<" : ";
		for(j=0;j<n;j++)
			cout<<array[j]<<'\t';
	}
}

void main()
{
	clrscr();
	int array[20],i,n;
	cout<<"\n\tEnter size of array : ";
	cin>>n;
	cout<<"\n\tEnter array elements : ";
	for(i=0;i<n;++i)
		cin>>array[i];
	bsort(array,n);
	cout<<"\n\tSorted array : ";
	for(i=0;i<n;++i)
		cout<<array[i]<<'\t';
	getch();
}
