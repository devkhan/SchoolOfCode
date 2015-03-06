//Program to create a file and display its contents.

#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
	clrscr();
	fstream file;
	file.open("File",ios::out);
	char str[201];
	cout<<"\n\tEnter a string to enter in the file : ";
	cin.get(str,201);
	for(int i=0; str[i]!='\0' ;i++)
	{
		file.put(str[i]);
	}
	file.close();
	file.open("File",ios::in);
	char ch;
	cout<<"\n\n\tContents of file : ";
	while(!file.eof())
	{
		file.get(ch);
		cout<<ch;
	}
	getch();
}