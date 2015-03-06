//Program to illustrate the use of stack.

#include<iostream.h>
#include<conio.h>

int n,top=-1,stk[10],v;
void push(int n);
void pop();
void display();

void main()
{
	int ch;
	clrscr();
	do
	{
		cout<<"\n\tWhat you want to do  ";
		cout<<"\n\t1.Push";
		cout<<"\n\t2.Pop";
		cout<<"\n\t3.Disp";
		cout<<"\n\t4.Exit";
		cout<<"\n\tEnter your choice ";
		cin>>ch;
	if(ch==1)
   {
		cout<<"\n\tEnter the value ";
		cin>>n;
		push(n);
	}
	else if(ch==2)
		  {
				pop();
        }
	else if(ch==3)
		  {
				display();
        }
	else if(ch==4)
		  {
				cout<<"\n\tClosing...";
        }
	}while(ch!=4);
	getch();
}

void push(int n)
{
	if(top==9)
	{
		cout<<"\n\tStack is full,overflow";
	}
   else
	{
		top++;
		stk[top]=n;
	}
}

void pop()
{
    if(top==-1)
	 {
	      cout<<"\n\tUnderflow";
	 }
    else
    {
			v=stk[top];
			cout<<"\n\tValue del"<<v;
			top--;
    }
}

void display()
{
	for(int i=top;i>=0;i--)
		cout<<"\n\t"<<stk[i];
}
