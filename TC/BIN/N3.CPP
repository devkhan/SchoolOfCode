#include<iostream.h>
#include<conio.h>
int main()
{ clrscr();
int n, sn,sp,an,ap;
sn=sp=0; int nn=0;
int np=0;
do
{
cout<<"\nenter a no. (0 to terminate):\n";
cin>>n;
if(n>0)
{
sp+=n;
nn++;
}
else
{
sn+=n;
np++;
}}
while(n);
cout<<"sum of positive nos. :"<<sp<<endl;
cout<<"sum of negative nos. :"<<sn<<endl;
an=sn/nn;
cout<<"avg of negative nos...:"<<an<<endl;
ap=sp/np;
cout<<"avg of positive nos...:"<<ap<<endl;
getch();
return 0;
}