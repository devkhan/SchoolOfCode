//Program to perform binary search on an array.

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
   int A[10],i,x,n,pos=(-1),f,m,l;
   cout<<"\n\tEnter array size : ";
   cin>>n;
   cout<<"\n\tEnter array elements : ";
   for(i=0;i<n;++i)
   	cin>>A[i];
   cout<<"\n\tEnter the number to be searched : ";
   cin>>x;
   f=0;
   l=n-1;
   while(f<=l)
   {
   	m=(f+l)/2;
      if(x==A[m])
      {
      	pos=m;
         break;
      }
      else if(x>A[m])
      	  f=m+1;
           else
           l=m-1;
   }
   if(pos==-1)
   	cout<<"\n\tSearch Unsuccessful!!!";
   else
   	cout<<"\n\tNumber found at "<<++pos<<" position.";
   getch();
}


