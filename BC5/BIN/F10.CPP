//Program to find largest number out of an array of 20 numbers.

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int arr[20],large;
	cout<<"\n\tEnter the 20 elements of the array(max. 32567) : ";
	for(int i=0;i<20;i++)
	{
		cin>>arr[i];
	}
	large=arr[0];
	for(int i=0;i<20;i++)
	{
		if(large<arr[i])
		large=arr[i];
	}
	cout<<"\n\tLargest number in the array : "<<large;
	getch();
}
