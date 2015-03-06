//Program to replace every ' ' in a file with a '-'.

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<process.h>
#include<stdio.h>
void main()
{
	clrscr();
	char fname[50],ch;
	cout<<"\n\tEnter file name : ";
	gets(fname);
	ifstream fin(fname);
	ofstream fout("New.txt");
	if(!fin)
	{
		cout<<"\n\tUnable to open file!!!";
	}
	while(fin)
	{
		fin.get(ch);
		if(ch==' ')
		ch='-';
		fout.put(ch);
	}
	cout<<"\n\tWork Done : File written to \"New.txt\".";
	getch();
}

