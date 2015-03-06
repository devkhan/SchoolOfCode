//Program to implement integer array functions.

#include<iostream.h>

void one(int a[], int n)
{
	int i=0;
	while(i<n)
	{
		if((a[i++]%2)==0)
			cout<<'\t'<<a[i-1];
	}
}

void two(int a[], int n)
{
	int i=0;
	while(i<n)
	{
		if((a[i++]%2)!=0)
			cout<<'\t'<<a[i-1];
	}
}

void three(int a[], int n)
{
	int sum=0, pro=1, i=0;
	while(i<n)
	{
		sum+=a[i];
		pro*=a[i];
		i++;
	}
	cout<<"\n\tSum of the array elements = "<<sum;
	cout<<"\n\tProduct of the array elements = "<<pro;
}

void four(int a[], int n)
{
	int i=0, max, min;
	max=min=a[i];
	while(i<n)
		if(a[i]>max)
			max=a[i++];
		else
			min=a[i++];
	cout<<"\n\tMaximum element = "<<max;
	cout<<"\n\tMinimum element = "<<min;
}

void five(int a[], int &n)
{
	int i=0, j;
	cout<<"\n\tArray before : "<<endl;
	while(i<n)	cout<<'\t'<<a[i++];
	i=0;
	while(i<n)
	{
		for(j=i+1; j<n; j++)
			if(a[j]==a[i])
				{
					n--;
					for(int k=j; k<n; k++)
						a[k]=a[k+1];
				}
		i++;
	}
	i=0;
	cout<<"\n\tArray after : "<<endl;
	while(i<n)	cout<<'\t'<<a[i++];
}

void six(int a[], int n)
{
	cout<<"\n\tArray in reverse order : "<<endl;
	while(n)
		cout<<'\t'<<a[--n];
}

void main()
{
	int ch, n, c, a[20];
	x:
	cout<<"\n\tEnter number of elements : ";
	cin>>n;
	cout<<"\n\tEnter array elemets("<<n<<" elements) : ";
	for(int i=0; i<n; i++)
		cin>>a[i];
	do
	{
		cout<<"\n\t\tARRAY MENU";
		cout<<"\n\n\t1. Print Even Valued Elements";
		cout<<"\n\t2. Print Odd Valued Elements";
		cout<<"\n\t3. Print the sum and average of the array elements";
		cout<<"\n\t4. Print the maximum and minimum element";
		cout<<"\n\t5. Remove duplicates from the array";
		cout<<"\n\t6. Print the array in reverse order";
		cout<<"\n\t7. Re-enter the array";
		cout<<"\n\t8. EXIT";
		cout<<"\n\n\tEnter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1 : one(a,n);		break;
			case 2 : two(a,n);		break;
			case 3 : three(a,n);		break;
			case 4 : four(a,n);		break;
			case 5 : five(a,n);		break;
			case 6 : six(a,n);		break;
			case 7 : goto x;
			case 8 : return;
			default: cout<<"\n\n\t!!!INVALID CHOICE!!!";
		}
		cout<<"\n\n\tWant to continue (1 - YES, 0 - NO) : ";
		cin>>c;
	}while(c);
}