//Program to maintain accounts in a bank using an array of objects.

#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>

class account
{
		long a_no;
		char name[20];
		float bal;
	public:
		void input();
		void output();
		void dep(float);
		void with(float);
		long getno();
		float getbal();
}obj[10];

void account::input()
{
	cout<<"\n\tEnter account no. : ";
	cin>>a_no;
	cout<<"\tEnter name of the customer : ";
	gets(name);
	cout<<"\tEnter opening balance : ";
	cin>>bal;
}

void account::output()
{
	cout<<"\n\tAccount No. : "<<a_no;
	cout<<"\n\tCustomer's Name : "<<name;
	cout<<"\n\tBalance : "<<bal;
}

void account::dep(float amount)
{
	bal += amount;
}

void account::with(float amount)
{
	bal -= amount;
}

long account::getno()
{
	return a_no;
}

float account::getbal()
{
	return bal;
}
void one(int&), two(), three(), four();
void main()
{
	clrscr();
	int i=0, x;
	char ch;
	do
	{
		cout<<"\n\tEnter details for customer "<<i+1;
		obj[i].input();
		cout<<"\n\tWant to enter more(y/n) : ";
		cin>>ch;
		i++;
	}while(ch=='y'||ch=='Y');
	clrscr();
	do
	{
		clrscr();
		cout<<"\n\tWelcome to account menu!!!";
		cout<<"\n\t\t1. Create a new account.";
		cout<<"\n\t2. Withdrawal from an account.";
		cout<<"\n\t3. Deposit in an account.";
		cout<<"\n\t4. Show the balance of an account.";
		cout<<"\n\t5. EXIT.";
		cout<<"\n\n\tEnter your choice : ";
		cin>>x;
		switch(x)
		{
			case 1 : one(i); break;
			case 2 : two(); break;
			case 3 : three(); break;
			case 4 : four(); break;
			case 5 : exit(-1);
			default : cout<<"\n\n\t!!!INVALID OPTION!!!";
		}
		cout<<"\n\tWant to continue : ";
		cin>>ch;
	}while(ch=='Y'||ch=='y');
	getch();
}

void one(int& i)
{
	i++;
	cout<<"\n\tCREATE WIZARD : ";
	cout<<"\n\n\tEnter details of new customer : ";
	obj[i].input();
	cout<<"\n\tNew account opened!!!";
	cout<<"\n\tPress any key to continue...";
	getch();
}

void two()
{
	long no;
	float amount;
	cout<<"\n\tEnter account no. to withdraw : ";
	cin>>no;
	for(int i=0; i<10; ++i)
	{
		if(obj[i].getno()==no)
		{
			cout<<"\n\tEnter amount to withdraw : ";
			cin>>amount;
			obj[i].with(amount);
			cout<<"\n\tBalance updated successfully!";
			break;
		}
	}
	if(i==10)
		cout<<"\n\tAccount not found!!!";
	cout<<"\n\tPress any key to continue...";
	getch();
}

void three()
{
	long no;
	float amount;
	cout<<"\n\tEnter account no. to deposit : ";
	cin>>no;
	for(int i=0; i<10; ++i)
	{
		if(obj[i].getno()==no)
		{
			cout<<"\n\tEnter amount to deposit : ";
			cin>>amount;
			obj[i].dep(amount);
			cout<<"\n\tBalance updated successfully!";
			break;
		}
	}
	if(i==10)
		cout<<"\n\tAccount not found!!!";
	cout<<"\n\tPress any key to continue...";
	getch();
}

void four()
{
	long no;
	cout<<"\n\tEnter account no. to show balance : ";
	cin>>no;
	for(int i=0; i<10; ++i)
	{
		if(obj[i].getno()==no)
		{
			cout<<"\n\tBalance = "<<obj[i].getbal();
			break;
		}
	}
	if(i==10)
		cout<<"\n\tAccount not found!!!";
	cout<<"\n\tPress any key to continue...";
	getch();
}
