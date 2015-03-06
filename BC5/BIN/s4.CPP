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
		cout<<"\nWhat you want to do  ";
		cout<<"\n1.Push";
		cout<<"\n2.Pop";
		cout<<"\n3.Disp";
		cout<<"\n4.Exit";
		cout<<"\nEnter your choice ";
		cin>>ch;

	if(ch==1)
		{
			cout<<"\nEnter the value ";
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
			cout<<"Exiting.";
		}

	}while(ch!=4);

 getch();

}

void push(int n)
{
	  if(top==9)
	{
	cout<<"\nstack is full,overflow";
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
	      cout<<"\nunderflow";
	 }
    else
 {
	v=stk[top];
	cout<<"\n value del"<<v;
	top--;
 }
 }

 void display()
{
for(int i=top;i>=0;i--)
{
cout<<stk[i]<<"\n";
}
}
