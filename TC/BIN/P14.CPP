//Program to print the reverse of an inputted number.

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long r,q,rn=0,n;
	cout<<"\n\tEnter any number : ";
	cin>>n;
	while(n)
	{
		r = n%10 ;
		q = n/10 ;
		rn= rn*10 + r ;
		n = q ;
	}
	cout<<"\n\tThe reverse of the given number is : "<<rn<<" .";
	cout<<"\n\n\t***END***";
	getch();
}
