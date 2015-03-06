//Program to perform bubble sort on an array.

#include<iostream.h>
#include<conio.h>
void main()
{
	int array[20],i,n,t,j;
   cout<<"\n\tEnter size of array : ";
   cin>>n;
   cout<<"\n\tEnter array elements : ";
   for(i=0;i<n;++i)
   	cin>>array[i];
   for(i=0;i<(n-1);++i)
   	for(j=0;j<(n-1);++j)
      	if(array[j]>array[j+1])
         {
         	t=array[j];
            array[j]=array[j+1];
            array[j+1]=t;
         }
   cout<<"\n\tSorted array : ";
   for(i=0;i<n;++i)
   	cout<<" "<<array[i];
   getch();
}



