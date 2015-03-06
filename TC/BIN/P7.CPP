//Program to check if the given number is an even no. or an odd no. .

#include<iostream.h>
#include<conio.h>
int main()
{
	int n;
	cout<<"\n\tEnter any number : ";
	cin>>n;
	if (n%2==0)
	cout<<"\n\tYou entered an even number.";
	else
	cout<<"\n\tYou entered an odd number.";
	cout<<"\n\n\t***END***";
	getch();
	return 0;
}