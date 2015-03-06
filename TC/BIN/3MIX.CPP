#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
#include<math.h>
#include<process.h>
float y(float x)
{
return (1/1+x);
}
int main()
{       clrscr();
float a, b, h, s, n;
int m,i;
cout<<"enter the limits of integration a and b:";
cin>>a>>b;
cout<<"enter the choice";
cin>>m;
cout<<setprecision(6);
switch(m)
{
case 1:cout<<"enter the no. of subintervals n:";
       cin>>n;
	   cout<<" integration by TRAPEZOIDAL RULE"<<endl;
	   s=0;//SUM=S
	   h=(b-a)/n;
	   for(i=1;i<=n;i++)
	   s=s+y(a+i*h);
	   s=2*s;
	   s=s+y(a)+y(b);
	   cout<<"\nintegration is:"<<(h/2)*s<<endl;
case 2:  cout<<"SIMPSON'S 3/8th RULE"<<endl;
	   h=(b-a)/3.0;
	   s=y(a)+3*y(a+h)+3*y(a+2*h)+y(b);
	   s=3*h*s/8.0;
	   cout<<"value of the integral is"<<setw(9)<<
	   setprecision(4)<<s<<endl;

case 3:  cout<<"SIMPSON'S 1/3rd RULE"<<endl;
	    h=(b-a)/2;
	    s=y(a)+y(b)+4*y((a+b)/2);
	    s=h*s/3;
	    cout<<"value of the integral is"<<setw(9)<<
	    setprecision(4)<<s<<endl;

default: cout<<"integration over";
getch();
exit(0);
}
getch();
return 0;
}