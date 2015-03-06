//Program to design a four function calculator.

#include<iostream.h>
#include<conio.h>
int main()
{
	float a,b;
	char op;
	cout<<"\n\n\tEnter first value : ";
	cin>>a;
	cout<<"\n\tEnter second value : ";
	cin>>b;
	cout<<"\n\tEnter the action to be taken on the given values :\n\t1. '+'\n\t2. '-'\n\t3. '*'\n\t4. '/'";
	cin>>op;
	switch (op)
	{
		case '+' : cout<<"The sum : "<<a+b;		break ;

		case '-' : cout<<"The difference : "<<a-b;	break ;

		case '*' : cout<<"The product : "<<a*b;		break ;

		case '/' : cout<<"The qoutient : "<<a/b;	break ;

		default : cout<<"Invalid operator !!!\n\tPlease enter any of these four operator : +,-,*,/";
	}
	getch();
	return 0;
}