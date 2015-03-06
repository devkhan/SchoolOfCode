//Program to perform queue operations.

#include<iostream.h>

class queue
{
	int a[10],p;

public:

	queue(){p=0;}
	int push(int n)
	{
		if(p==10)
			return 0;
		a[p]=n;
		p++;
		return 1;
	}
	int out()
	{
		if(p==0)
			return 0;
		int e=a[0];
		p--;
		for(int i=0; i<=p; i++)
			a[i]=a[i+1];
		return e;
	}
	int check()
	{
		if(p==0)
			return 0;
		else if(p==10)
				return 10;
			 else
				 return 1;
	}
	void show()
	{
		cout<<"\n\tqueue contents : ";
		for(int i=0; i<p ;i++)
			cout<<'\t'<<a[i];
	}
};

void main()
{
	queue x;
	int ch,n,c;
	char choice;
	do
	{
		cout<<"\n\tMENU";
		cout<<"\n\n\t1. Push";
		cout<<"\n\t2. Pop";
		cout<<"\n\t3. Show contents of queue";
		cout<<"\n\t4. Check empty or full";
		cout<<"\n\tEnter your choice : ";
		cin>>ch;
		switch(ch)
		{
		case 1 : cout<<"\n\tEnter element to push : ";
				 cin>>n;
				 c=x.push(n);
				 if(c==0)
					 cout<<"\n\tqueue Full!!!";
				 else
					 cout<<"\n\t"<<n<<" pushed succesfully.";
				 break;
		case 2 : c=x.out();
				 if(c==0)
					 cout<<"\n\tqueue Empty!!!";
				 else
					 cout<<"\n\t"<<c<<" popped successfully.";
				 break;
		case 3 : x.show();
				 break;
		case 4 : c=x.check();
				 if(c==0)
					 cout<<"\n\tQueue empty";
				 if(c==9)
					 cout<<"\n\tQueue Full";
				 break;
		default : cout<<"\n\t INVALID CHOICE!!!";
		}
		cout<<"\n\tWant to continue(y/n) : ";
		cin>>choice;
	}while(choice=='y'||choice=='Y');
}
