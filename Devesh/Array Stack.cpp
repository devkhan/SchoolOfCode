//Program to perform stack operations.

#include<iostream.h>

class stack
{
	int a[10],p;
public:
	stack()
	{
		p=0;
	}
	int pop()
	{
		p--;
		return a[p+1];
	}
	int push(int n)
	{
		a[p]=n;
		p++;
		return 1;
	}
	int check()
	{
		if(p==0)
			return 0;
		else if(p==9)
				return 9;
				else
						return 1;
	}
	void show()
	{
		cout<<"\n\tStack contents : ";
		for(int i=0; i<p ; i++)
		{
			cout<<a[i]<<'\t';
		}
	}
};

void main()
{
	stack x;
	int ch,n,c;
	char choice;
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
				 c=x.push(n);
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
