#include<iostream.h>
#include<conio.h>
int main()
{
int x,y,z,a,b,c, max, min;
cout<<"enter nos.:"<<endl;
cin>>x>>y>>z;
a=x;
b=y;
c=z;
max=x;
min=a;
if(max<y)
max=y;
if(max<z)
max=z;
if(min>b)
min=b;
if(min>c)
min=c;
cout<<"max no. is :"<<max<<endl;
cout<<"min no. is:" <<min<<endl;
getch();
return 0;
}