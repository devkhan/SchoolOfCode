#include<iostream.h>
#include<conio.h>
#define pi 3.141
main()
{
float radius,area,circumference;
cout<<"this program will find circumference and area of the circle"<<endl;
cout<<"enter radius"<<endl;
cin>>radius;
circumference=2*pi*radius;
area=pi*radius*radius;cout<<"area is:"<<area;
cout<< " \n circumference is:"<<circumference;
}