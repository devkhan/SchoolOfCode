//program to find a no. is prime or not...
#include<iostream.h>
#include<conio.h>
int main()
{
int value=1, num, i;
cout<<"enter a no.:";
cin>>num;
cout<<endl;
for(i=2;i<num;i++)
if(num%i==0)
value=0;
if(value==1)
{
cout<<"no."<<i<<" is prime";
cout<<endl;
 }
else
{
cout<<"num."<<i<<" is not prime";
cout<<endl;
}
getch();
return 0;
}