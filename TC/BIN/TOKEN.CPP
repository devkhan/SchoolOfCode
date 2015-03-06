#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

void main()
{
	clrscr();
	char *str,*p;
	cout<<"\n\tEnter string : ";
	gets(str);
	p=strtok(str," ");
	while(p!=NULL)
	{
		cout<<p<<endl;
		p=strtok(NULL," ");
	}
	getch();
}