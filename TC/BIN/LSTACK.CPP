//Program to implement linked list as a stack.

#include<iostream.h>
#include<conio.h>

class node
{
	char ch;
	node *next;

	public:

		void push();
		void pop();
		void show();
		node(){		next=NULL;	}
}*top,*ptr,stack;

void node::push()
{
	ptr=new node;
	if(ptr==NULL)
	{
		cout<<"\n\tOVERFLOW!!! Memory Full!";
		return;
	}
	cout<<"\n\tEnter elemnt to be pushed : ";
	cin>>ptr->ch;
	ptr->next=NULL;
	if(top==NULL)
	{
		top=ptr;
		cout<<"\n\tElement inserted successfully.";
		return;
	}
	ptr->next=top;
	top=ptr;
	cout<<"\n\tElement inserted successfully.";
}

void node::pop()
{
	if(top==NULL)
	{
		cout<<"\n\tUNDERFLOW!!! Stack empty!";
		return;
	}
	cout<<"\n\tElement deleted : "<<top->ch;
	ptr=top;
	top=top->next;
	delete ptr;
}

void node::show()
{
	if(top==NULL)
	{
		cout<<"\n\tUNDERFLOW!!! Stack empty!";
		return;
	}
	cout<<"\n\tStcak Contents : \n\tTop->   ";
	for(ptr=top;ptr!=NULL;ptr=ptr->next)
		cout<<ptr->ch<<endl<<"\t\t";
}

void main()
{
	clrscr();
	int choice;
	char ch;
	do
	{
		cout<<"\n\t\tSTACK MENU";
		cout<<"\n\t1. Push\n\t2. Pop\n\t3. Display\n\t4. EXIT";
		cout<<"\n\t\tEnter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1 : stack.push();
				 break;
			case 2 : stack.pop();
				 break;
			case 3 : stack.show();
				 break;
			case 4 : return;
			default: cout<<"\n\t!!!INVALID CHOICE!!!";
		}
		cout<<"\n\n\tWanna continue(y/n) : ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	getch();
}