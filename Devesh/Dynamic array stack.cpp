//Program to implement stack operations using dynamic arrays.

#include<iostream.h>
class stack
{
	int *a;
	int p,size;
public:
	stack(int n)
	{
		size=n;
		a= new int[size];
		p=-1;
	}
	int push(int n)
	{
		if(p==(size-1))
			return 0;
		
		p++;
		a[p]=n;
		return 1;
	}
	int pop()
	{
		int ele;
		if(p==-1)
			return 0;
		ele=a[p];//--;
		p--;
		return ele;
	}
	
	int check()
	{
		if(p==-1)
			return 0;
		else if(p==(size-1))
			 return -1;
			else
				return 1;
	}
	void show()
	{
		cout<<"\n\tStack contents : ";
		for(int i=0; i<=p; i++)
			cout<<a[i];
	}
};

void main()
{
	
	int ch,n,c,size;
	char choice;
	cout<<"\n\tEnter size of the stack : ";
	cin>>size;
	stack x(size);
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
					 cout<<"\n\tPopped elemnt : "<<c;
				 break;
		case 3 : x.show();
				 break;
		case 4 : c=x.check();
				 if(c==0)
					 cout<<"\n\tStack empty";
				 if(c==-1)
					 cout<<"\n\tStack Full";
				 break;
		default : cout<<"\n\t INVALID CHOICE!!!";
		}
		cout<<"\n\tWant to continue(y/n) : ";
		cin>>choice;
	}while(choice=='y'||choice=='Y');
}
