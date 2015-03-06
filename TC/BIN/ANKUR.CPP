#include<iostream.h>
#include<conio.h>
main()
{
int a,b,temp;
cout<<"enter a number a";
cin>> a;
cout<<"enter a number b";
cin>>b;
temp=a;
a=b;
b=temp;
cout<<"the value of a is:"<<a;
cout<<"the value of b is:"<<b;
getch();
return(0);
}