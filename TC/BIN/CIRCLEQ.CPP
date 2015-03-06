//Array implementation of circular queue.

#include<iostream.h>
#include<conio.h>
#include<process.h>

const int MAX=10;

void insert(int item);
int del();
void display();
int isfull();
int isempty();
int front=-1,rear=-1;
int cq[MAX];

void main()
{
	clrscr();
	int ch,item;
	char choice;
	do
	{
		cout<<"\n\tMENU";
		cout<<"\n\t1. Insert\n\t2.Delete\n\t3.Display\n\t4.EXIT";
		cout<<"\n\tEnter your choice : ";
		cin>>ch;
		switch(ch)
		{
		case 1: cout<<"\n\tEnter element to insert : ";
			cin>>item;
			insert(item);
			break;
		case 2: cout<<"\n\tDeleted item : "<<del();
			break;
		case 3: display();
			break;
		case 4: exit(0);
		default: cout<<"\n\tINVALID CHOICE!!!";
		}
		cout<<"\n\tWant to continue(y/n) : ";
		cin>>choice;
	} while (choice=='y'||choice=='Y');
	getch();
}

void insert(int item)
{
	if(isfull())
	{
		cout<<"\n\tQueue Overflow!!!";
		return;}
	if(front==-1)
		front=0;
	if(rear==(MAX-1))
		rear=0;
	else
		rear++;
	cq[rear]=item;
}

int del()
{
	int item;
	if(isempty())
	{
		cout<<"\n\tQueue Underflow";
		exit(1);
	}
	item=cq[front];
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else if(front==MAX-1)
		front=0;
	else
		front++;
	return item;
}

int isempty()
{
	if(front==-1)return 1;
	else	return 0;
}

int isfull()
{
	if((front==0)&&(rear==MAX-1)||(front==rear +1))
	return 1;
	else return 0;
}

void display()
{
	int i;
	if(isempty())
	{
		cout<<"\n\t!!!Underflow!!!";
		return;
	}
	cout<<"\n\tQueue elemnts : ";
	i=front;
	if(front<=rear)
		while(i<=rear)
		{
			cout<<"\n\t"<<cq[i++];
		}
	else 
	{
		while(i<MAX-1)
			cout<<"\n\t"<<cq[i++];
		i=0;
		while(i<=rear)
			cout<<"\n\t"<<cq[i++];
	}
}
		






