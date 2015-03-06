//Program to convert the given temprature from degree celsius to degree fahrenhiet.

#include<iostream.h>
#include<conio.h>
void main()
{
	int c ;
	float t,ct;
	cout<<"\n\tTEMPRATURE CONVERSION MENU";
	cout<<"\n\t1.Celsius to Fahrenhiet";
	cout<<"\n\t2.Fahrenhiet to Celsius";
	cout<<"\n\tEnter your choice for temprature conversion (1 or 2) : ";
	cin>>c;
	cout<<"\n\t";
	switch (c)
	{
		case 1 : cout<<"Enter temprature in degree Celsius : ";
			 cin>>t;
			 ct = (1.8*t) + 32 ;
			 cout<<"\tThe converted temprature : "<<ct;
			 break ;

		case 2 : cout<<"Enter temprature in degree Fahrenhiet : ";
			 cin>>t;
			 ct = (t-32)/1.8 ;
			 cout<<"\tThe converted temprature : "<<ct;
			 break ;

		default : cout<<"Invalid choice !!!\n\tPlease enter either 1 or 2";
	}
	getch();
}