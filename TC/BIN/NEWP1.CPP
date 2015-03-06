#include<iostream.h>
#include<conio.h>
int main()
{  clrscr();
int value=1, num, i;
cout<<"enter a no.:";
cin>>num;
for(i=2;i<num;i++)
if(num%i==0)
value=0;
if(value==1)
cout<<"no.iis prime";
else
cout<<"num. is not prime";
getch();
return 0;
}