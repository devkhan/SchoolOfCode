//Program to calculate and print file size in bytes.

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<process.h>
void main()
{
	clrscr();
	int size=0;
	char ch,fname[20];
	cout<<"\n\tEnter file name : ";
	cin.getline(fname,20);
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
		size++;
	}
	cout<<"\n\tThe size of the file \""<<fname<<"\" in bytes : "<<size;
	getch();
}