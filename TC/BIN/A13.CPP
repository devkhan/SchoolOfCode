//Program to swap the private data members of two objects of different objects.

#include<iostream.h>
#include<conio.h>

class A
{
	int x,y;

	public :

		void input()
		{
			cout<<"\n\tEnter x : ";
			cin>>x;
			cout<<"\n\tEnter y : ";
			cin>>y;
		}
		void show()
		{
			cout<<"\n\tx = "<<x;
			cout<<"\n\ty = "<<y;
		}
		friend void swap();
};

class B
{
	int x,y;

	public :

		void input()
		{
			cout<<"\n\tEnter x : ";
			cin>>x;
			cout<<"\n\tEnter y : ";
			cin>>y;
		}
		void show()
		{
			cout<<"\n\tx = "<<x;
			cout<<"\n\ty = "<<y;
		}
		friend void swap();
};

A a;
B b;

void swap()
{
	int temp;
	temp=a.x;
	a.x=b.x;
	b.x=temp;
	temp=a.y;
	a.y=b.y;
	b.y=temp;
}

void main()
{
	clrscr();
	cout<<"\n\tEnter contents of class A : ";
	a.input();
	cout<<"\n\tEnter contents of class B : ";
	b.input();
	cout<<"\n\tContents before swap() function : ";
	cout<<"\n\tClass A : ";
	a.show();
	cout<<"\n\tClass B : ";
	b.show();
	swap();
	cout<<"\n\tContents after swap() function : ";
	cout<<"\n\tClass A : ";
	a.show();
	cout<<"\n\tClass B : ";
	b.show();
	getch();
}