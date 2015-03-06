#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>

ifstream file("Words.txt");

struct phnword
{
	char p[100],w[20];
}obj;
//using namespace std;
/*
int find(char *S, char *token)
{
	int s=strlen(S),t=strlen(token);
	for(int i=0; i<s ;i++)
	{
		if((*(S+i))==(*token))
			for(int j=1; j<=t ;j++)
				if((*(S+i+j))!=(*(token+j)))
					return 0;
	}
	return 1;
}
*/

int find(char *S, char *token)
{
	cout<<S<<token<<endl;
	if(strstr(S,token)==NULL)
		return 0;
	else
		return 1;
}

int match(char *S, char **list, int size)
{
	int n=0;
	for(int i=0; i<size ;i++)
	{
		cout<<S<<*(list+i)<<endl;
		if(find(S,*(list+i)))
			n++;
	}
	return n;
}

struct token
{
	char *word;
	token *next;
}*f,*l,*t,*F,*L,*T;
/*

int find(char *t, char *t1)
{
	int x = strcmp(t,t1);
	cout<<"strcmp = "<<x;
	return !x;
}

int match(char **l, char **l1, int n, int n1)
{
	int x=0;
	for(int i=0; i<n ;i++)
		for(int j=0; j<n1 ;j++)
		{
			cout<<*(l+i)<<'\t'<<*(l1+j);
			if(find(*(l+i),*(l1+j)))
				x++;
		}
	return x;
}
  */
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

void main()
{
	clrscr();
	char *s,*S;
	cout<<"\n\tEnter a string : ";
	gets(s);
	strlwr(s);
	int n=noofwords(s);
	if(n<3)
	{
		cout<<"\n\tSorry!!! Please provide us atleast three words to search for...";
		cout<<"\n\tPlease re-run the application.";
		getch();
		return;
	}
	char **list=new char *[n];
/*	f = l = t = new token;
	t->word = strtok(s," ");
	cout<<f->word;/*
	while(t!=NULL)
	{
		t = new token;
		t->word = strtok(NULL," ");
		l->next=t;
		l=t;
		l->next=NULL;
		cout<<l->word;
	}
	t=f;
	while(t!=NULL)
	{
		cout<<t->word;
		t = t->next;
		cout<<endl;
	}
//	file.close();
*/	*list=strtok(s," ");
	cout<<*list;
	for(int i=1; i<n; i++)
	{
		*(list+i)=strtok(NULL," ");
		cout<<*(list+i);
	}
/*	strtok(s,NULL);
	cout<<"\n\tEnter string to match : ";
	gets(S);
/*	int n1=noofwords(S);
	char **list1 = new char *[n1];
	if(list==NULL)
		cout<<"NULL";
	if(*list==NULL)
		cout<<"NULL";
	*list1=strtok(S,"_");
	if(*list==NULL)
		cout<<"NULL";
	cout<<*list1;
	for(i=1; i<n1 ;i++)
	{
		*(list1+i)=strtok(NULL," ");
		cout<<*(list1+i);
	}
	getch();
*/
	char word[20];
	int n1=0,no=0;
	while(!file.eof())
	{
	file.getline(obj.p,100);
	puts(obj.p);
	strlwr(obj.p);
	file.getline(obj.w,20);
	strlwr(obj.w);
	puts(obj.w);
	n1=(match(obj.p,list,n));
	if(no<=n1)
	{
		no=n1;
		strcpy(word,obj.w);
	}
	}
	cout<<"\n\tWords matched = "<<no;
	cout<<"\n\tWord : "<<word;
//	file.seekg(1,ios::cur);
//	file.getline(line,50);
//	cout<<line;
//	int no=match(line,list,n);
	delete list;
	file.close();
//	delete list1;
//	cout<<"\n\tMatches found : "<<no;
	getch();
}