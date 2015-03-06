#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	char name[10][20];
	int empno[10],n,i,deptno;
	float basic[10],da[10],hra[10],salary[10],pf[10];
	cout<<"\n\tEnter no of employees : ";
	cin>>n;
	for(i=0; i<n ;i++)
	{
		cout<<"\n\tEnter name of Employee "<<i+1<<" : ";
		gets(name[i]);
		cout<<"\n\tEnter employee no : ";
		cin>>empno[i];
		cout<<"\n\tEnter basic : ";
		cin>>basic[i];
		da[i]= 0.6*basic[i];
		hra[i]= 0.25*basic[i];
		pf[i]= 0.12*basic[i];
		salary[i]= basic[i]+da[i]+hra[i]-pf[i];
	}
	for(i=0; i<n ;i++)
	{
		cout<<"\n\tName of Employee "<<i+1<<" : "<<name[i];
		cout<<"\n\tEmployee No. : "<<empno[i];
		cout<<"\n\tSalary = "<<salary[i];
	}
	getch();
}