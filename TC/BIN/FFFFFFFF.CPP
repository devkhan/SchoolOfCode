#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
float a,b,n,c;
a=0;
b=1;
cout<<"enter a number";
cin>>n;
cout<<"fs is";
cout<<a<<"\n"<<b;
for(int i=2;i<n;i++)
{
c=a+b;
cout<<"\n"<<c;
a=b;
}
getch();
return 0;
}