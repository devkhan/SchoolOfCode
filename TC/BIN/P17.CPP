//Program to input a digit and print it in words.

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n;
	cout<<"\n\tEnter any digit(0-9) : ";
	cin>>n;
	cout<<"\n\t";
	switch (n)
	{

		case 0 : cout<<"ZERO" ;
			 break ;

		case 1 : cout<<"ONE"  ;
			 break ;

		case 2 : cout<<"TWO"  ;
			 break ;

		case 3 : cout<<"THREE";
			 break ;

		case 4 : cout<<"FOUR" ;
			 break ;

		case 5 : cout<<"FIVE" ;
			 break ;

		case 6 : cout<<"SIX"  ;
			 break ;

		case 7 : cout<<"SEVEN";
			 break ;

		case 8 : cout<<"EIGHT";
			 break ;

		case 9 : cout<<"NINE" ;
			 break ;

		default: cout<<"INVALID DIGIT!!!";

	}
	cout<<"\n\n\t***END***";
	getch();
}