#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<math.h>
double f(double x)
{
 return x*x*x-4.0*x-9.0;
}
void bisect(double & rx, double a, double  b, int &itr)
{
 rx= (a+b)/2.0;
 ++itr;
 cout<<"iteration no.:"<<setw(3)<<itr<<setw(7)<<setprecision(5)<<rx<<endl;
 }
int main()
{
int itr=0, mitr;
double x, a, b,aerr,x1;
clrscr();
cout<<"enter a, b, mitr, aerr:"<<endl;
cin>>a>>b>>mitr>>aerr;
if(f(a)*f(b)<0)
bisect(x,a,b,itr);
do{
if(f(a)*f(b)<0)
b=x;
else
a=x;
bisect(x1,a,b,itr);
if(fabs(x)<aerr)
{cout<<"after "<<itr<<"iterations,root:"<<setw(7)<<setprecision(5)<<x<<endl;
getch();
return 0;
}
x=x1;
}
while(itr<=mitr);
cout<<"sol. does not converge iterations are not sufficient"<<endl;
cout<<"after"<<itr<<"root is"<<x<<endl;
getch();
return 0;
}
cout<<"root does not exists on the internal & enter new value of a&b"<<endl;
getch();
return 0;
}