#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n;
	long fact=1;
	cout<<"\n\tEnter value of n : ";
	cin>>n;
	while(n)
	{
		fact *= n;
		n--;
	}
	cout<<"\n\tn! = "<<fact;
	getch();
}