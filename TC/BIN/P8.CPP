//Program to compute simple and compute interest on the given principal, rate of interest and time.

#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
	int c;
	float p,r,t,si,ci,a,q;
	cout<<"\n\t\tINTEREST COMPUTING MENU";
	cout<<"\n\n\tEnter Pricipal amount : ";
	cin>>p;
	cout<<"\n\tEnter Rate of Interest per annum : ";
	cin>>r;
	cout<<"\n\tEnter time : ";
	cin>>t;
	cout<<"\n\n\t1.Simple Interest\n\t2.Compound Interest";
	cout<<"\n\tEnter your choice(1 or 2) : ";
	cin>>c;
	cout<<"\n\t";
	switch (c)
	{
		case 1 : si = (p*r*t)/100;
			 cout<<"Simple interest = "<<si;
			 break ;

		case 2 : q = pow(((100+r)/100),t);
			 a = p*q;
			 ci = a-p;
			 cout<<"Compund interest = "<<ci;
			 break ;

		default : cout<<"INVALID CHOICE !!!";
			  cout<<"\n\tPlease enter either 1 or 2";
	}
	cout<<"\n\n\t***END***";
	getch();
	return 0;
}