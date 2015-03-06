#include <iostream.h>
#include <conio.h>

class dm;
class db;

class dm
{
	float m;
	float cm;

	public:

		void input();
		void output();
		friend void addm();
		friend void addb();
};

class db
{
	float f;
	float in;

	public:

		void input();
		void output();
		friend void addb();
		friend void addm();
};

dm a,c;
db b,d;

void main()
{
	clrscr();
	int ch;
	a.input();
	b.input();
	cout<<"\n\tDo you want result in : ";
	cout<<"\n\t1. m and cm or ";
	cout<<"\n\t2. ft. and in. ";
	cout<<"\n\tEnter your choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1 : addm();
			 cout<<"\n\tResult : ";
			 c.output();
			 break;
		case 2 : addb();
			 cout<<"\n\tResult : ";
			 d.output();
			 break;
		default: cout<<"\n\t!!!WRONG CHOICE!!!";
	}
	getch();
}

void dm::input()
{
	cout<<"\n\tEnter metres : ";
	cin>>m;
	cout<<"\n\tEnter centimetres : ";
	cin>>cm;
}

void db::input()
{
	cout<<"\n\tEnter feets : ";
	cin>>f;
	cout<<"\n\tEnter inches : ";
	cin>>in;
}

void dm::output()
{
	cout<<"\n\tMetres = "<<m;
	cout<<"\n\tCentimetres = "<<cm;
}

void db::output()
{
	cout<<"\n\tFeets = "<<f;
	cout<<"\n\tInches = "<<in;
}

void addm()
{
	c.cm=a.m*100+a.cm;
	c.cm+=(b.f*30.48+b.in*2.54);
	c.m=0;
	while(c.cm>100)
	{
		c.m+=1;
		c.cm-=100;
	}
}

void addb()
{
	d.in=b.f*12+b.in;
	d.in+=(a.m*100+a.cm)/2.54;
	d.f=0;
	while(d.in>12)
	{
		d.f+=1;
		d.in-=12;
	}
}
