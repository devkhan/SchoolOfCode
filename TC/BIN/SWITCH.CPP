 #include<iostream.h>
 #include<iomanip.h>

#include<conio.h>
#include<math.h>
void trap(float &a, float &b, float &h, float &s);
void simp1_3(float &a, float &b, float &h, float &s);
void simp3_8(float &a, float &b, float &h, float &s);
float y(float x)
{
return (pow(x,2));
}
void main( )
{
float a,b,h,s;
int m;
cout<<"enter the limits of a and b:";
cin>>a>>b;
cout<<endl;
cout<<"MENU"<<endl;
cout<<"1.) TRAPEZOIDAL RULE :"<<endl;
cout<<"2.) SIMPSON'S 1/3RD RULE:"<<endl;
cout<<"3.) SIMPSON'S 3/8TH RULE:"<<endl;
cout<<"1.)\t 2.) \t 3.)";
cout<<"enter choice:";
cin>>m;
switch(m)
{
case 1: trap(a,b,h,s);
	break;
case 2:	simp1_3(a,b,h,s);
	break;
case 3:	simp3_8(a,b,h,s);
	break;
default: cout<<"invalid choice!!!";
}
getch( );
}
void trap(float &a, float&b, float &h, float &s)
{              int n;
	cout<<"\n\tIntegration by trapezoidal rule...\n\n";
	s=0;
	cout<<"\n\tEnter the no. of subintervals : ";
	cin>>n;
	h=(b-a)/n;
	for(int i=0; i<=n ;i++)
		s += y(a+(i*h));
	s *= 2;
	s += y(a) + y(b);
	cout<<"\n\tValue of integral is : "<<(h/2)*s;
}

void simp1_3(float &a, float &b, float &h, float&s)
{
	cout<<"\n\tIntegration by Simpson's 1/3 rule...\n";
	h=(b-a)/2;
	s= y(a) + y(b) + 4*y((a+b)/2);
	s= (h*s)/3;
	cout<<"\n\tValue of the integral = "<<setw(9)<<setprecision(4)<<s;
}

void simp3_8 (float &a, float&b, float &h, float &s)
{
	cout<<"\n\tIntegration by Simpson's 3/8 rule...\n";
	h= (b-a)/3.0;
	s= y(a) + 3*y(a+h) + 3*y(a+2*h) + y(b);
	s= 3*h*s/8.0;
	cout<<"\n\tValue of the integral = "<<setw(9)<<setprecision(4)<<s;
}