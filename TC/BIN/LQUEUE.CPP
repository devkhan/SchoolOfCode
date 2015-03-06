//Program to implement queue as a linked list.

#include<iostream.h>
#include<conio.h>

class node
{
	int n;
	node *next;

	public:
		node()
		{	next=NULL;	}
		void insert();
		void del();
		void show();
}*front,*rear,*temp,Q;

void node::insert()
{
	temp=new node;
	if(temp==NULL)
	{
		cout<<"\n\tMEMORY FULL!!!";
		return;
	}
	cout<<"\n\tEnter element to insert : ";
	cin>>temp->n;
	temp->next=NULL;
	if(front==NULL&&rear==NULL)
	{
		front=rear=temp;
		cout<<"\n\tElement inserted successfully.";
		return;
	}
	rear->next=temp;
	rear=temp;
	cout<<"\n\tElement inserted succesfully.";
}

void node::del()
{
	if(front==NULL&&rear==NULL)
	{
		cout<<"\n\tUNDERFLOW!!! Queue empty!!!";
		return;
	}
	cout<<"\n\tElement deleted : "<<front->n;
	temp=front;
	front=front->next;
	delete temp;
}

void node::show()
{
	if(front==NULL&&rear==NULL)
	{
		cout<<"\n\tUNDERFLOW!!! Queue empty!!!";
		return;
	}
	cout<<"\n\tQueue contents : Front-> ";
	for(temp=front;temp!=NULL;temp=temp->next)
		cout<<temp->n<<'\t';
	cout<<" <-Rear";
}

void main()
{
	clrscr();
	int choice;
	char ch;
	do
	{
		cout<<"\n\t\tQUEUE MENU";
		cout<<"\n\t1. Insert\n\t2. Delete\n\t3. Display\n\t4. EXIT";
		cout<<"\n\t\tEnter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1 : Q.insert();
				 break;
			case 2 : Q.del();
				 break;
			case 3 : Q.show();
				 break;
			case 4 : return;
			default: cout<<"\n\t!!!INVALID CHOICE!!!";
		}
		cout<<"\n\n\tWanna continue(y/n) : ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	getch();
}