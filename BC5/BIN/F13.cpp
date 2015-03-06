//Program to work on queue.

#include<iostream.h>
#include<conio.h>
#include<process.h>

struct node
{
	int info;
	node *next;
};
class queue
{
	node *front,*rear,*ptr,*save;
	int i;
	public:
		queue()
		{
			front=rear=NULL;
		}
		void insertnode();
		void deletenode();
		void showqueue();
};

void queue::insertnode()
{
	cout<<"\n\tEnter information to be added : ";
	cin>>i;
	ptr=new node;
	ptr->info=i;
	ptr->next=NULL;
   if(front==NULL)
	{
		front=rear=ptr;
	}
	else
	{
		rear->next=ptr;
		rear=ptr;
	}
	cout<<"\n\tNode inserted successfully.";
}

void queue::deletenode()
{
	int element;
	if(front==NULL)
	{
		cout<<"\n\tStack is empty!!!";
	}
	else
	{
		element=front->info;
		save=front;
		front=front->next;
		delete save;
		cout<<"\n\tElement deleted successfully.";
		cout<<"\n\tElement deleted is : "<<element;
	}
}

void queue::showqueue()
{
	if(front==NULL)
		cout<<"\n\tStack is empty!!!";
	else
	{
		cout<<"\n\t";
		while(front)
		{
			cout<<front->info<<":";
			front=front->next;
		}
	}
}

void main()
{
	queue q1;
	char ch;
	int choice;
	ch='y';
	clrscr();
	do
	{
		cout<<"\n\n\t\tMenu driven program for queue"<<endl;
		cout<<"\n \t\t 1. Insert node in queue" ;
		cout<<"\n \t\t 2. Delete node from queue";
		cout<<"\n \t\t 3. View queue";
		cout<<"\n \t\t 4. Exit";
		cout<<"\n \t\t Enter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1: while(ch=='y')
         		  {
							q1.insertnode();
						  	cout<<"\n\n\t Do you want to insert more elements (y or n)?";
							cin>>ch;
                 }
                 break;

			case 2: ch='y';
         		  while(ch=='y')
                 {
							q1.deletenode();
							cout<<"\n\n\t Do you want to delete more elements (y or n):";
							cin>>ch;
					  }
                 break;

			case 3: q1.showqueue();
         		  break;

			case 4: exit(0);

		}
	}while(choice!=4);
	getch();
}
