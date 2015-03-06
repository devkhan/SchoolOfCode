#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<math.h>

void one();
void two();
void three();
void four();
void five();
void six();

void main()
{
	clrscr();
	int ch;
	char yn;
	do
	{
		clrscr();
		cout<<"\n\tWelcome to program menu!!!";
		cout<<"\n\n\t1. Calculate factorial of a given number.";
		cout<<"\n\t2. Calculate the powerof y to x, x and y given by the user.";
		cout<<"\n\t3. Calculate the nth term of Fibonacci serires.";
		cout<<"\n\t4. Print the nth prime number.";
		cout<<"\n\t5. Calculate the sum of the digits of a number.";
		cout<<"\n\t6. Reverse the number(without treating it as a string).";
		cout<<"\n\t7. EXIT.";
		cout<<"\n\n\tEnter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1 : one();	break;
			case 2 : two();	break;
			case 3 : three(); break;
			case 4 : four(); break;
			case 5 : five(); break;
			case 6 : six(); break;
			case 7 : exit(0);
			default : cout<<"\n\tWrong Choice!!!";
		}
		getch();
	}while(1);
}

void one()
{
	clrscr();
	int n,f=1;
	cout<<"\n\tEnter number to calculate factorial : ";
	cin>>n;
	while(n)
	{
		f*=n;
		n--;
	}
	cout<<"\n\tFactorial of the given number = "<<f;
	getch();
	cout<<"\n\n\tPress any key to continue to the main menu.....";
	getch();
}

void two()
{
	clrscr();
	int x,y;
	float res;
	cout<<"\n\tEnter base value : ";
	cin>>x;
	cout<<"\n\tEnter exponent : ";
	cin>>y;
	res=pow(x,y);
	cout<<"\n\tAnswer (x^y) = "<<res;
	getch();
	cout<<"\n\n\tPress any key to continue to the main menu.....";
	getch();
}

void three()
{
	clrscr();
	int f=0,s=1,t,n;
	cout<<"\n\tHow many terms of Fibonacci series is to be shown : ";
	cin>>n;
	n-=2;
	cout<<"\n\n\t"<<f<<'\t'<<s;
	while(n)
	{
		t=s+f;
		cout<<'\t'<<t;
		f=s;
		s=t;
		n--;
	}
	getch();
	cout<<"\n\n\tPress any key to continue to the main menu.....";
	getch();
}

void four()
{
	clrscr();
	long p,i=1;
	int n,flag;
	cout<<"\n\tEnter n to find nth prime number : ";
	cin>>n;
	n--;
	while(n)
	{
		flag=0;
		i++;
		for(int j=2;j<=(i/2);j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			n--;
			p=i;
		}
	}
	cout<<"\n\tnth prime number = "<<p;
	getch();
	cout<<"\n\n\tPress any key to continue to the main menu.....";
	getch();
}

void five()
{
	clrscr();
	long n;
	int s=0,r;
	cout<<"\n\tEnter a number to find sum of digits : ";
	cin>>n;
	while(n)
	{
		r=n%10;
		s+=r;
		n=n/10;
	}
	cout<<"\n\tSum of digits = "<<s;
	getch();
	cout<<"\n\n\tPress any key to continue to the main menu.....";
	getch();
}

void six()
{
	clrscr();
	long n,rn=0;
	int r;
	cout<<"\n\tEnter any number to reverse : ";
	cin>>n;
	while(n)
	{
		r=n%10;
		rn*=10;
		rn+=r;
		n/=10;
	}
	cout<<"\n\tReverse number is : "<<rn;
	getch();
	cout<<"\n\n\tPress any key to continue to the main menu.....";
	getch();
}