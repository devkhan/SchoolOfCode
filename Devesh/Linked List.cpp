//Program to implement linked list.

#include<iostream.h>

class node
{
public:
	int d;
	node *next;
};

class list
{
	node *start, *end;

public:
	
	list()
	{
		start=end=NULL;
	}
	void add(int n)
	{
		node *temp = new node;
		if(start==NULL)
		{
			start=temp;
			end=temp;
			temp->d=n;
			temp->next=NULL;
			return;
		}
		end->next=temp;
		end=temp;
		temp->d=n;
		temp->next=NULL;
		return;
	}
	void show()
	{
		cout<<"\n\tList contents : ";
		cout<<"\n\tStart --> ";
		node *temp;
		temp=start;
		while(temp!=NULL)
		{
			cout<<temp->d<<'\t';
			temp=temp->next;
		}
		cout<<" <--End";
	}
	int del()
	{
		int e;
		node *temp;
		temp=start;
		start=start->next;
		e=temp->d;
		delete temp;
		return e;
	}
};


void main()
{
	list x;
	int ch,n,e;
	char choice;
	do
	{
		cout<<"\n\tMENU";
		cout<<"\n\n\t1. Add";
		cout<<"\n\t2. Show list contents";
		cout<<"\n\t3. Delete";
		cout<<"\n\n\tEnter your choice : ";
		cin>>ch;
		switch(ch)
		{
		case 1 : cout<<"\n\tEnter element to insert : ";
				 cin>>n;
				 x.add(n);
				 break;
		
		case 2 : x.show();
				 break;
		case 3 : e=x.del();
				 cout<<"\n\t"<<e<<" deleted succesfully.";
				 break;
		default: cout<<"\n\t!!!INVALID CHOICE!!!";
		}
		cout<<"\n\tWant to conitnue : ";
		cin>>choice;
	}while(choice=='y'||choice=='Y');
}