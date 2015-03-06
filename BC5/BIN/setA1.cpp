//Program to input n numbers in an array A and to input m numbers into array B
//and to store m+n elements in array C.

#include<iostream>
#include<conio>

void sort(int[],int);

void main()
{
	clrscr();
   int m,n,mn,A[20],B[20],C[40],i,j;
   cout<<"\n\tEnter the number of elements in array A : ";
   cin>>m;
   cout<<"\n\tEnter the number of elements in array B : ";
   cin>>n;
   mn=m+n;
   cout<<"\n\tEnter elements of array A : ";
   for (i=0; i<m ; ++i)
   	cin>>A[i];
   cout<<"\n\tEnter elements of array B : ";
   for (j=0; j<n ; ++j)
   	cin>>B[j];
   for (i=0; i<m ; ++i)
   	C[i]=A[i];
   for (j=0; i<mn ; ++j,++i)
   	C[i]=B[j];
   cout<<"\n\tJoined Array : ";
   for (j=0; j<mn ; ++j)
   	cout<<' '<<C[j];
   sort(C,mn);
   cout<<"\n\tSorted Array : ";
   for (int k=0; k<mn; k++)
   	cout<<' '<<C[k];
   getch();
}

void sort(int C[], int size)
{
   /*
	int s,pos,temp;
   for (int i=0; i<size ; i++)
   {
   	s=C[i];
      for (int j=i+1; j<size ; j++)
      	if(C[j]<s)
         {
         	s=C[j];
            pos=j;
         }
      temp=C[i];
      C[i]=C[pos];
      C[pos]=temp;
	} */
   int tmp,ctr=0;
   for(int i=0; i<size ; i++)
   {
      for(int j=0; j<(size-1)-i ; j++)
   	{
   		if(C[j]>C[j+1])
         {
         	tmp=C[j];
            C[j]=C[j+1];
            C[j+1]=tmp;
         }
      }
   }
}
