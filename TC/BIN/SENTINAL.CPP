#include<iostream.h>
#include<conio.h>
const int  SENTINAL = 10;
int main()
{
int n,s=0, c=0;
cout<<"enter integer ending with "<<SENTINAL<<endl;
cin>>n;
while(n != SENTINAL)
{
s+=n;
c++;
cin>>n;
}
cout<<"sum of"<<c<<"\n no. is: "<<s<<endl;
if(c!=0)
cout<<"avg is :"<<   s/c<<endl;
else
cout<<"wrong input"<<endl;
return 0;
}