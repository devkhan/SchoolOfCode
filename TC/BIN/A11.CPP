//Assignment Question No. - 11.

#include<iostream.h>
#include<conio.h>
#include<process.h>

int check(int x,int y=0);

void main()
{
	clrscr();
	int x,y,c,ch;
	cout<<"\n\tMENU";
	cout<<"\n\n\t1. Check divisibility";
	cout<<"\n\t2. Check Prime No.";
	cout<<"\n\t3.EXIT";
	cout<<"\n\n\tEnter your choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1 : cout<<"\n\tEnter dividend : ";
			 cin>>x;
			 cout<<"\n\tEnter divisor : ";
			 cin>>y;
			 c=check(x,y);
			 if(c)
				cout<<"\n\tYes, "<<y<<" is divisible by "<<x<<'.';
			 else
				cout<<"\n\tNo, "<<y<<" is not divisible by "<<x<<'.';
			 break;
		case 2 : cout<<"\n\tEnter no. to check whether prime or not : ";
			 cin>>x;
			 c=check(x);
			 if(c)
				cout<<"\n\t"<<x<<" is a prime number.";
			 else
				cout<<"\n\t"<<x<<" is not a prime number.";
			 break;
		case 3 : exit(0);
		default: cout<<"\n\t!!!INVALID CHOICE!!!";
	}
	getch();
}

int check(int x,int y)
{
	if(y)
	{
		if(x%y==0)
			return 1;
		else
			return 0;
	}
	else
	{
		for(int i=2;i<=(x/2);i++)
		{
			if(x%i==0)
				return 0;
		}
		return 1;
	}
}