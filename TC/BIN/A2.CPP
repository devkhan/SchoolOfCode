#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct employee
{
	int e_code;
	char e_name[20],desg;
	float salary;
};

void main()
{
	clrscr();
	int i=-1;
	char ch;
	employee obj[20];
	do
	{
		i++;
		cout<<"\n\tDetails of employee : "<<i+1;
		cout<<"\n\n\tEnter employee code : ";
		cin>>obj[i].e_code;
		cout<<"\tEnter name: ";
		gets(obj[i].e_name);
		cout<<"\tEnter designation : ";
		cin>>obj[i].desg;
		cout<<"\tEnter salary : ";
		cin>>obj[i].salary;
		cout<<"\n\tDo you want to enter more (y/n) : ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	clrscr();
	cout<<"\n\tDetails of employees with salary >20000 : ";
	for(int n=0;n<=i;n++)
	{
		if(obj[n].salary<20000)
			continue;
		cout<<"\n\tEmployee code :"<<obj[n].e_code;
		cout<<"\n\tEmployee name :"<<obj[n].e_name;
		cout<<"\n\tDesignation :"<<obj[n].desg;
		cout<<"\n\tSalary :"<<obj[n].salary;
	}
	getch();
}