#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a,b,c,max;
cout<<"enter the value of a,b,c";
cin>>a>>b>>c;
max=a;
if(b>max)
max=b;
if(c>max)
max=c;
cout<<"the largest number<<max";
getch();
}