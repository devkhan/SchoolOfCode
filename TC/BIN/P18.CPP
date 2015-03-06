//Program to find if the square root of a number is prime or not.

#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>
void main()
{
	clrscr();
	int n,sr;
	cout<<"\n\tEnter any number : ";
	cin>>n;
	sr=sqrt(n);
	for (int i=2 ; i<(sr/2) ; i++)
	{
		if (((sr/2)%i)==0)
		{
			cout<<"\n\tThe square root of "<<n<<" is not a prime number.";
			goto a;
		}
	}
	cout<<"\n\tThe square root of "<<n<<" is a prime number.""";
	a:
	cout<<"\n\n\t***END***";
	getch();

}
