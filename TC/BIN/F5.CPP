//Program to count number of vowels in a text file.

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<process.h>
void main()
{
	clrscr();
	int count=0;
	char fname[30],ch;
	cout<<"\n\tEnter the file name : ";
	gets(fname);
	ifstream fin(fname);
	if(!fin)
	{
		cout<<"\n\tUnable to open file!!!";
		getch();
		exit(0);
	}
	while(fin)
	{
		fin.get(ch);
		switch(ch)
		{
			case 'a' :
			case 'A' :
			case 'e' :
			case 'E' :
			case 'i' :
			case 'I' :
			case 'o' :
			case 'O' :
			case 'u' :
			case 'U' : count++; break ;
		}
	}
	cout<<"\n\tThe number of vowels in the file : "<<count;
	getch();
}