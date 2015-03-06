//Program to check whether a string is palindrome or not
//using a function.

#include<iostream.h>
#include<conio.h>

int palin(char []);

void main()
{
	clrscr();
	char str[20];
	cout<<"\n\tEnter a string : ";
	cin.getline(str, 20);
	if(palin(str))
		cout<<"\n\tGiven string is palindrome.";
	else
		cout<<"\n\tGiven string is not palindrome.";
	getch();
}

int palin(char str[])
{
	int l=0, i=0;
	while(str[l++]!='\0');
	l--;
	while(i<=(l/2))
	{
		if(str[i]!=str[l-i-1])
			return 0;
		i++;
	}
	return 1;
}