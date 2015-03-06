//Program to merge two arrays.

#include<iostream.h>
#include<conio.h>
void merge(int [],int ,int [] ,int ,int[]);
void main()
{
	clrscr();
   int A[50],B[50],C[50],m,n,mn,i;
   cout<<"\n\tEnter size of first array : ";
   cin>>m;
   cout<<"\n\tEnter first array's elements(ascending) : ";
   for(int i=0; i<m ; ++i)
   	cin>>A[i];
   cout<<"\n\tEnter size of second array : ";
   cin>>n;
   mn=m+n;
   cout<<"\n\tEnter second array's elements(descending) : ";
   for(i=0 ; i<n ; ++i)
   	cin>>B[i];
   merge(A,m,B,n,C);
   cout<<"\n\tMerged array : ";
   for(i=0 ; i<mn ; ++i)
   	cout<<C[i]<<" ";
   getch();
}
void merge(int A[],int m, int B[], int n, int C[])
{
	int x,y,z;
   for(x=0,y=n-1,z=0; x<m && y>=0 ;)
   {
   	if(A[x] <= B[y])
      	C[z++]=A[x++];
      else
      	C[z++]=B[y--];
   }
   if(x<m)
   {
   	while(x<m)
       C[z++]=A[x++];
   }
   else
   {
   	while(y>=0)
      	C[z++]=B[y--];
   }
}

