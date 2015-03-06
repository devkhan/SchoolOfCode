//Program to print average of positive and negative floatinf point numbers.

#include<iostream>
#include<conio>
void main()
{
	clrscr();
   float cur,pt=0,nt=0;
   int p=0,n=0;
   for(int i=1; i<=10;i++)
   {
   	cout<<"\n\tEnter float number "<<i<<": ";
      cin>>cur;
      if(cur<0)
      {
      	nt+=cur;
         n++;
      }
      if(cur>0)
      {
      	pt+=cur;
         p++;
      }
   }
   cout<<"\n\tAverage of +ve nos. : "<<(pt/p);
   cout<<"\n\tAverage of -ve nos. : "<<(nt/n);
   getch();
}
