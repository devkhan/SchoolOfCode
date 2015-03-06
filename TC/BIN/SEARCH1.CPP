#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<stdio.h>

using namespace std;

int noofwords(char *str)
{
	int n, nw=0, i;
	n=strlen(str);
	for(i=0;i<n;i++)
		if(*(str+i)==' ')
			nw++;
	return ++nw;
}

struct token
{
	char *word;
	token *next;
}*f,*l,*top,*t;

int main()
{
	char *s;
	int n;
	cout<<"\n\tEnter a string : ";
	gets(s);
	n=noofwords(s);
	cout<<n;
	top = t = new token;
	t->word=strtok(s," ");
	puts(t->word);
	for(int i=1; i<3 ;i++)
	{
		top=t;
		t=new token;
		t->word=strtok(NULL," ");
		t->next = top;
		top=t;
		puts(top->word);
	}
	delete top;
	getch();
}
