#include<iostream.h>
#include<conio.h>
float abs(float x);
int main()
{

float y, num;
cout<<"enter a no."<<endl;
cin>>num;
y=abs(num);
cout<<"absolute value of"<<num<<"is"<<"\t"<<y<<endl;
getch();
return 0;
}
float abs(float x)
{
if(x>=0)
return x;
else
return -x;
}