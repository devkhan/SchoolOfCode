#include<conio.h>
#include<iostream.h>
#include<process.h>
#include<math.h>

prod(int m,int n)
{
	if(n==1)
		return m;
	if(n==0 || m==0)
		return 0;
	return prod(m,n-1)+m;
}

int GCD (int A, int B)
{
	A = abs(A);
	B = abs(B);
	if (A > B)
	{
		A = A - B;
		return GCD (A, B);
	}
	else if (A < B)
	     {
			B = B - A;
			return GCD (A, B);
	     }
	     else
			return A;
}

fib(int n)
{
	if(n==1 || n==0)
		return n;
	return fib(n-1)+fib(n-2);
}

void main()
{
	int ch;
	clrscr();
	cout<<"\n\t*************MAIN MENU**************";
	cout<<"\n\n\t1. Multiplication";
	cout<<"\n\t2. GCD";
	cout<<"\n\t3. nth term of fibonicci series";
	cout<<"\n\t4. EXIT";
	cout<<"\n\n\tEnter your choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1 : int a,b;
			 cout<<"\n\tEnter the 2 numbers : ";
			 cin>>a>>b;
			 cout<<"\n\tResult = "<<prod(a,b);
			 break;
		case 2 : int A,B;
			 cout<<"\n\tEnter A and B : ";
			 cin>>A>>B;
			 cout<<"\n\tThe HCF is " << GCD(A,B) << endl;
			 break;
		case 3 : int n;
			 cout<<"\n\tEnter any number : ";
			 cin>>n;
			 cout<<"\n\tThe nth term of the fibonacci series : "<<fib(n);
			 break;
		case 4 : exit(0);
		default: cout<<"\n\t!!!INVALID OPTION!!!";
	}
	getch();
}