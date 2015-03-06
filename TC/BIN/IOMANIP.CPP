#include<iostream.h>
#include<iomanip.h>
int main()
{
int x= 19;
int a= 345;
double y= 76.384;

cout<<"12345678901234567890"<<endl;
cout<<setw(5)<<x<<endl;
cout<<setw(5)<<a<<setw(5)<<"hi"<<setw(5)<<x<<endl<<endl;
cout<<setprecision(2);
cout<<setw(6)<<a<<setw(6)<<y<<setw(6)<<x<<endl;
cout<<setw(6)<<x<<setw(6)<<setw(6)<<a<<setw(6)<<y<<endl;
cout<<setw(5)<<a<< x<<endl;
cout<<setw(2)<<a<<setw(4) <<x<<endl;
return 0;
}
