#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<math.h>

float a1(float x);
float a2(float x,float y);
float a3(float x,float y,float z);

void main()
{
	clrscr();
	int x,y,z;
	float area;
	int ch;
	cout<<"\n\t\tAREA MENU";
	cout<<"\n\n\t1. Circle.";
	cout<<"\n\t2. Triangle.";
	cout<<"\n\t3. Rectangle.";
	cout<<"\n\t4. EXIT.";
	cout<<"\n\tEnter your choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1 : cout<<"\n\tEnter radius : ";
			 cin>>x;
			 area=a1(x);
			 break;
		case 2 : cout<<"\n\tEnter three sides of the triangle : ";
			 cin>>x>>y>>z;
			 area=a3(x,y,z);
			 break;
		case 3 : cout<<"\n\tEnter length and breadth : ";
			 cin>>x>>y;
			 area=a2(x,y);
			 break;
		case 4 : exit(0);
		default: cout<<"\n\n\tWrong choice!!!";
	}
	cout<<"\n\tArea = "<<area;
	getch();
}

float a1(float x)
{
	return 3.14*x*x;
}

float a2(float x,float y)
{
	return x*y;
}

float a3(float x,float y,float z)
{
	float s=(x+y+z)/2;
	s=s*(s-x)*(s-y)*(s-z);
	return sqrt(s);
}