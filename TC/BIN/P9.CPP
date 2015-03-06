/*An electricity board charges according to following rates:
  For the first 100 units-40 P per unit
  For the next 200 units-50 P per unit
  Beyond 300 units-60 P per unit.
  All users are charged meter charge also which is  Rs.50 .
  Wap to read the names of users and number of units consumed,and print out the charges with names.*/


#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int units,amount;
	char name[20];
	cout<<"Enter units";
	cin>>units;
	cout<<"\nEnter the name ";
	cin>>name;
	if(units<=100)
	amount=units*0.40;
	else if(units>100 && units<=300)
	amount=100*0.40+(units-100)*0.50;
	else if(units>300)
	amount=100*0.40+200*0.50+(units-300)*0.60;
	amount=amount+50;
	cout<<"Amount is"<<amount;
	cout<<"\n The bill for mr."<<name<<" is Rs"<<amount;
	getch();
}


