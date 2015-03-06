//Program to perform stack operations on dynamic stack.

#include<iostream.h>

class node
{
	int a;
	node *p;

public:

	int push()
	{
		stack *no=new node;
		return p;
	}


void main()
{
	node *start, f, 
	do
	{
		cout<<"\n\tMENU";
		cout<<"\n\n\t1. Push";
		cout<<"\n\t2. Pop";
		cout<<"\n\t3. Show contents of stack";
		cout<<"\n\t4. Check empty or full";
		cout<<"\n\tEnter your choice : ";
		cin>>ch;
		switch(ch)
		{
		case 1 : cout<<"\n\tEnter element to push : ";
				 cin>>n;
				 if(last->newnode()==NULL)
					cout<<"\n\tStack Full!!!";
				 else
					.push(p);
				 if(c==0)
					 cout<<"\n\tStack Full!!!";
				 else
					 cout<<"\n\t"<<n<<" pushed succesfully.";
				 break;
		case 2 : c=x.pop();
				 if(c==0)
					 cout<<"\n\tStack Empty!!!";
				 else
					 cout<<"\n\t"<<c<<" popped successfully.";
				 break;
		case 3 : x.show();
				 break;
		case 4 : c=x.check();
				 if(c==0)
					 cout<<"\n\tStack empty";
				 if(c==9)
					 cout<<"\n\tStack Full";
				 break;
		default : cout<<"\n\t INVALID CHOICE!!!";
		}
		cout<<"\n\tWant to continue(y/n) : ";
		cin>>choice;
	}while(choice=='y'||choice=='Y');
}