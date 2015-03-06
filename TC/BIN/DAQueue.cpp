//Program to implement queue operations using dynamic array.

#include<iostream.h>

class queue
{
	int *a;
	int p, size;
public:
	queue(int n)
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
		int e;
		if(p==-1)
			return 0;
		e=a[p];
		p--;
		return e;
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
		cout<<"\n\tQueue contents : \n";
		cout<<"front --> ";
		for(int i=0; i<=p; i++)
			cout<<a[i]<<'\t';
		cout<<" <-- rear ";
	}
};

void main()
{
	
	int ch,n,c,size;
	char choice;
	cout<<"\n\tEnter size of the queue : ";
	cin>>size;
	queue x(size);
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
					 cout<<"\n\tQueue Full!!!";
				 else
					 cout<<"\n\t"<<n<<" pushed succesfully.";
				 break;
		case 2 : c=x.pop();
				 if(c==0)
					 cout<<"\n\tQueue Empty!!!";
				 else
					 cout<<"\n\tPopped elemnt : "<<c;
				 break;
		case 3 : x.show();
				 break;
		case 4 : c=x.check();
				 if(c==0)
					 cout<<"\n\tQueue empty";
				 if(c==-1)
					 cout<<"\n\tQueue Full";
				 break;
		default : cout<<"\n\t INVALID CHOICE!!!";
		}
		cout<<"\n\tWant to continue(y/n) : ";
		cin>>choice;
	}while(choice=='y'||choice=='Y');
}