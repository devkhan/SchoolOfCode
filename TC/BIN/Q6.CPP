#include<conio.h>
#include<iostream.h>
#include<process.h>
#include<math.h>

//1.multiplication
int y;

prod(int m,int n)
	{
	if(n==1)
	   return m;
	  if(n==0 || m==0)
	   return 0;
	  y=prod(m,n-1)+m;
	  return y;
	}

//2.GCD
int GCD (int A, int B)
{
    A = abs(A);
    B = abs(B);


    if (A > B)
    {
	A = A - B;
	return GCD (A, B); //Recursive function call - works fine
	//GCD (A, B);  -- This function call seems to return an incorrect value
    }
    else if (A < B)
    {
	B = B - A;
	return GCD (A, B);//Recursive function call
	//GCD (A, B); -- This function call seems to return an incorrect value
    }

    else if (A==B)
    {
	return A;
    }
    return 0;
}

//3.nth term of fabonacci series
int x;
fib(int n)
	{
	if(n==1 || n==0)
	   return n;
	  x=fib(n-1)+fib(n-2);
	   return x;
	}

void main()
{
int ch;
clrscr();
cout<<"*************MAIN MENU**************";
cout<<"\n1.multiplication";
cout<<"\n2.GCD";
cout<<"\n3.nth term of fibonicci series";
cout<<"\n4.Exit";
cout<<"\nEnter your choice : ";
cin>>ch;
	if(ch==1)
	{
	int a,b,r;
	cout<<"Enter the 2 numbers : ";
	cin>>a>>b;
	r=prod(a,b);
	cout<<r;
	}

	else if(ch==2)
	{

	int A,B;
	cout<<"Enter A and B : ";
	cin>>A>>B;
	cout << "The GCD is " << GCD(A,B) << endl;
	}

	else if(ch==3)
	{
	  int a,r;
	  cout<<"Enter any number : ";
	  cin>>a;
	  r=fib(a);
	  cout<<"The no. at position "<<a<<" is "<<r;
	}

getch();
}