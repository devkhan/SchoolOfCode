#include<iostream.h>
#include<conio.h>
void pyramid(int x);
int main()
{

int h,i,j;
cout<<"enter the height of the pyramid:"<<endl;
cin>>h;
pyramid(h);
getch();
return 0;
}
void pyramid(int x)
{

int i,j,k;
for(i=0;i<=x;i++)
{
cout<<endl;
for(j=1;j<=(x-i);j++)
cout<<" ";
for(k=1;k<=i;k++)
cout<<"* ";
}
cout<<endl;
}