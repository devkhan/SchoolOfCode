#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class bill
{
	char name[20];
	int units;
	float charges;
	void calc_amount();

	public :

	void read();
	void show();
};

void main()
{
	clrscr();
	bill obj[10];
	int i=-1;
	char ch;
	do
	{
		i++;
		cout<<"\n\tEnter details for consumer no"<<i+1;
		obj[i].read();
		cout<<"\n\tWant to enter more (y/n) :";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	for(int n=0;n<=i;n++)
	{
		cout<<"\n\tDetails of consumer no."<<n+1;
		obj[n].show();
	}
	getch();
}

void bill::calc_amount()
{
	if(units<100)
		charges=units*0.60;
	else if(units<300)
		charges=60+(units-100)*0.80;
	     else
	     {
		charges=220+(units-300)*0.90;
		charges*=1.15;
	     }
	if(charges<50)
		charges=50;
}

void bill::read()
{
	cout<<"\n\tEnter name of the consumer :";
	gets(name);
	cout<<"\n\tEnter units :";
	cin>>units;
	calc_amount();
}

void bill::show()
{
	cout<<"\n\tName :"<<name;
	cout<<"\n\tUnits : "<<units;
	cout<<"\n\tCharges : "<<charges;
}