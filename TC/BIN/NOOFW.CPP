#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>

using namespace std;

int noofwords(char *str)
{
	int n, nw=0, i;
	char ch;
	n=strlen(str);
	for(i=0;i<n;i++)
		if(*(str+i)==' ')
			nw++;
	return ++nw;
}

int main()
{
	char *s;
	cout<<"\n\tEnter a string : ";
	gets(s);
	cout<<"\n\tNO. of words : "<<noofwords(s)<<endl;
	system("pause");
}
