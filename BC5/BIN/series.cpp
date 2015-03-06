//Program to the sum of the series 1 + 1/2 + 1/3 + ... + 1/n.

#include<iostream>
#include<conio>
void main()
{
	clrscr();
   int n;
   float sum=0;
   cout<<"\n\tEnter the number to find sum of the series : ";
   cin>>n;
   for(float i=1 ; i<=n ; i+=1)
   	sum += 1/i;
   cout<<"\n\tSum of the series : "<<sum;
   getch();
}
