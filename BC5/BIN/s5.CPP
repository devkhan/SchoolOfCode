#include<iostream.h>
#include<conio.h>

int stack[10],top=-1;

void push(int v)
{
	if(top==9)
	{
		cout<<"\n\tStack is full!!! ";
	}
	else
	{
		top++;
		stack[top]=v;
	}
}

void pop()
{
	int v;
	if(top==-1)
	{
		cout<<"\n\tStack empty, underflow!!! ";
	}
	else
	{
		v=stack[top];
		cout<<"\n\tValue del = "<<v;
		top--;
	}
}

void dispst()
{
	int i;
	cout<<"\n\tStack is\n";
	for(i=top;i>=0;i--)
		cout<<"\n\t"<<stack[i];
}


void main()
{
	int ch,v;
	clrscr();
	do
	{
		cout<<"\n\tWhat you want to do\n\t1.Push\n\t2.Pop\n\t3.Disp\n\t4.Exit\n\n\tEnter your choice : ";
		cin>>ch;
		if(ch==1)
		{
			cout<<"\n\tEnter the value you want to push : ";
			cin>>v;
			push(v);
		}
		else  if(ch==2)
				{
					pop();
				}
		 		else if(ch==3)
					{
						dispst();
					}
					else  if(ch==4)
							{
	  							cout<<"Closing.....";
							}
	}while(ch!=4);
	getch();
}